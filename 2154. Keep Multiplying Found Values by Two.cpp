/*
You are given an array of integers nums. You are also given an integer original 
which is the first number that needs to be searched for in nums.
You then do the following steps:
    If original is found in nums, multiply it by two (i.e., set original = 2 * original).
    Otherwise, stop the process.
    Repeat this process with the new number as long as you keep finding the number.
    Return the final value of original.

Example 1:
    Input: nums = [5,3,6,1,12], original = 3
    Output: 24
    Explanation: 
        - 3 is found in nums. 3 is multiplied by 2 to obtain 6.
        - 6 is found in nums. 6 is multiplied by 2 to obtain 12.
        - 12 is found in nums. 12 is multiplied by 2 to obtain 24.
        - 24 is not found in nums. Thus, 24 is returned.
*/


#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

//Using Sorting and linear search
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        for(auto i:nums)
            if(i==original)
                original=original*2;
        return original;
    }
};

//Using Hashing (unordered_set)
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set <int> hash(nums.begin(), nums.end());
        while(hash.count(original)) //we can't use find() function as it returns iterator.
            original*=2;
        return original;
    }
};

//using Recursion
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int flag=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==original)
                flag=1;
        }
        if (flag==1)
            return findFinalValue(nums, original*2);
        else 
            return original;
    }
};