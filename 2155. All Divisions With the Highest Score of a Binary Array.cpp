/*
You are given a 0-indexed binary array nums of length n. nums can be divided at index i 
(where 0 <= i <= n) into two arrays (possibly empty) numsleft and numsright:
numsleft has all the elements of nums between index 0 and i - 1 (inclusive), 
while numsright has all the elements of nums between index i and n - 1 (inclusive).
    If i == 0, numsleft is empty, while numsright has all the elements of nums.
    If i == n, numsleft has all the elements of nums, while numsright is empty.
    The division score of an index i is the sum of the number of 0's in numsleft 
    and the number of 1's in numsright.

Return all distinct indices that have the highest possible division score. You may return the answer in any order.

Example 1:
    Input: nums = [0,0,1,0]
    Output: [2,4]
    Explanation: Division at index
        - 0: numsleft is []. numsright is [0,0,1,0]. The score is 0 + 1 = 1.
        - 1: numsleft is [0]. numsright is [0,1,0]. The score is 1 + 1 = 2.
        - 2: numsleft is [0,0]. numsright is [1,0]. The score is 2 + 1 = 3.
        - 3: numsleft is [0,0,1]. numsright is [0]. The score is 2 + 0 = 2.
        - 4: numsleft is [0,0,1,0]. numsright is []. The score is 3 + 0 = 3.
    Indices 2 and 4 both have the highest possible division score 3.
    Note the answer [4,2] would also be accepted.
*/

#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n = nums.size();
        // initalizing left and right with size n+1 and having value as 0
        vector<int> left(n+1,0);
        vector<int> right(n+1,0);
        // counting 0's in left array and increasing values index wise
        for(int i=1;i<=n;i++){
            int x = 0;
            if(nums[i-1]==0){
                x++;
            }
            left[i] = left[i-1]+x;
        }
        for(int i=n-1;i>=0;i--){
            int x = 0;
            //if 1 is found, element in array will increase by 1
            if(nums[i]==1){ 
                x++;
            }
            right[i] = right[i+1]+x; 
        }
        // calculating max_score at every index
        int max_score = INT_MIN;
        for(int i=0;i<=n;i++){
            max_score = max(left[i]+right[i],max_score);
        }
        vector<int> ans;
        for(int i=0;i<=n;i++){
            if(max_score==(left[i]+right[i])){
                ans.push_back(i);
            }
        }
        return ans;
    }
};