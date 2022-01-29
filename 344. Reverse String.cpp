/*
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
    Input: s = ["h","e","l","l","o"]
    Output: ["o","l","l","e","h"]

Example 2:
    Input: s = ["H","a","n","n","a","h"]
    Output: ["h","a","n","n","a","H"]
*/

#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int low=0, high=n-1;
        while(low<high)
        {
            swap(s[low++],s[high--]);
        }
    }
};