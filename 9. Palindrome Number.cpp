/*
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.
 
Example 1:

    Input: x = 121
    Output: true
    Explanation: 121 reads as 121 from left to right and from right to left.
*/

#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

class Solution {
public:
    bool isPalindrome(int num) {
        long int rev=0;
        int temp=num;
        while(num>0)
        {
            rev = rev*10 + num%10;
            num/=10;
        }
        if(rev==temp)
            return true;
        return false;
    }
};