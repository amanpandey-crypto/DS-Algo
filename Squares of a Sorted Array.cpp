/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in 
non-decreasing order.

Example 1:
    Input: nums = [-4,-1,0,3,10]
    Output: [0,1,9,16,100]
    Explanation: After squaring, the array becomes [16,1,0,9,100].
    After sorting, it becomes [0,1,9,16,100].
*/

#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int> sq(n);
        int l=0;
        int h=n-1;
        for(int i=n-1; i>=0; i--){
            if(abs(nums[h])<abs(nums[l]))
            {
                sq[i]=nums[l]*nums[l];
                l++;
            } 
            else
            {
                sq[i]=nums[h]*nums[h];
                h--;
            }   
        }
        
        return sq;
    }
};