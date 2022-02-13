/*
Given a string s containing just the characters 
'(', ')', '{', '}', '[' and ']', determine if 
the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

Example:
    Input: s = "()"
    Output: true
*/

#include <iostream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> paren;
        for(auto it:s){
            if(it=='(' || it=='{' || it == '[') 
                paren.push(it); 
            else {
                if(paren.empty()) 
                    return false; 
                char c = paren.top(); 
                paren.pop(); 
                if((it == ')' and c == '(') or  (it == ']' and c == '[') 
                or (it == '}' and c == '{')) 
                    continue;
                else 
                    return false;
            }
        }
        return paren.empty(); 
    }
};