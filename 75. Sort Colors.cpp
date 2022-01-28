/*
Given an array nums with n objects colored red, white, or blue, sort them 
in-place so that objects of the same color are adjacent, with the colors 
in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, 
and blue, respectively.
You must solve this problem without using the library's sort function.

Example 1:
    Input: nums = [2,0,2,1,1,0]
    Output: [0,0,1,1,2,2]

Example 2:
    Input: nums = [2,0,1]
    Output: [0,1,2]
*/


#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

//Using Dutch Nation Flag algorithm (very important)
class Solution {
public:
    void sortColors(vector<int>& a) {
        int lo = 0;
        int hi =  a.size()- 1;
        int mid = 0;

        while (mid <= hi) 
        {
            switch (a[mid]) 
            {
                case 0:
                    swap(a[lo++], a[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(a[mid], a[hi--]);
                    break;
            }
        }
    }
};


//Using Counting sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c_zero = 0, c_one = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
                c_zero++;
            else if(nums[i] == 1)
                c_one++;
        }
        for(int x = 0; x < c_zero; x++)
            nums[x] = 0;
        for(int y = c_zero; y < c_one + c_zero; y++)
            nums[y] = 1;
        for(int z = c_zero + c_one; z < nums.size(); z++)
            nums[z] = 2;
    }
};

