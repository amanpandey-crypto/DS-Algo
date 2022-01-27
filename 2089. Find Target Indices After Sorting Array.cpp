/*
You are given a 0-indexed integer array nums and a target element target.
A target index is an index i such that nums[i] == target.
Return a list of the target indices of nums after sorting nums in non-decreasing order. If there are no target indices, 
return an empty list. The returned list must be sorted in increasing order.

Example 1:
    Input: nums = [1,2,5,2,3], target = 2
    Output: [1,2]
    Explanation: After sorting, nums is [1,2,2,3,5].
    The indices where nums[i] == 2 are 1 and 2.

Example 2:
    Input: nums = [1,2,5,2,3], target = 3
    Output: [3]
    Explanation: After sorting, nums is [1,2,2,3,5].
    The index where nums[i] == 3 is 3.

Example 3:
    Input: nums = [1,2,5,2,3], target = 5
    Output: [4]
    Explanation: After sorting, nums is [1,2,2,3,5].
    The index where nums[i] == 5 is 4.
*/

#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        
        int l=0,r=nums.size()-1,index;
        while(l<=r){
            int mid=l+(r-l)/2;
            
            if(nums[mid]==target &&(mid==0 || nums[mid-1]!=target)){index=mid;break;}
            
           if(nums[mid]<target)l=mid+1;
            else r=mid-1;
        }
        while(index<nums.size() && nums[index]==target)res.push_back(index++);
        
        return res;
    }
};