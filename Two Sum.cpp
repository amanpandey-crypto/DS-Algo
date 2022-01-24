/*
Given an array of integers nums and an integer target, return indices of the two numbers 
such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the 
same element twice.
You can return the answer in any order.

Example 1:

    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/


//Using unordered map

//1st solution
#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map <int, int> sol;
        for(int i=0; i<n; i++)
        {
            int x= nums[i];
            int y= target-x;
            if(sol.find(y)!=sol.end())
            {
                return {sol[y], i};
            }
            sol[nums[i]]=i;
        }
        return {-1, -1};
    }
};

//2nd solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map <int, int> sol;
        for(int i=0; i<n; i++)
        {
            int x= nums[i];
            if(sol.find(target-x)!=sol.end())
            {
                return {sol[target-x], i};
            }
            sol[nums[i]]=i;
        }
        return {-1, -1};
    }
};
