/*
Given two binary strings a and b, return their sum as a binary string.

Example 1:
    Input: a = "11", b = "1"
    Output: "100"

Example 2:
    Input: a = "1010", b = "1011"
    Output: "10101"
*/

#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.length()-1;
        int n = b.length()-1;
        string res;
        int carry = 0;
        
        while(m>=0 || n>=0 || carry){
            if(m>=0){
                carry += a[m] - '0';
                m--;
            }
            if(n>=0){
                carry += b[n] - '0';
                n--;
            }
            
            res += (carry%2 + '0');
            carry = carry/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};