/*
We define the usage of capitals in a word to be right when one of the following cases holds:

    All letters in this word are capitals, like "USA".
    All letters in this word are not capitals, like "leetcode".
    Only the first letter in this word is capital, like "Google".

Given a string word, return true if the usage of capitals in it is right.
*/

#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count=0;
        int pos=-1;
        int n=word.length();
        for(int i=0; i<n; i++){
            if(isupper(word[i])){
                count++;
                pos=i;
            }
        }
        if(count==0||count==n|| pos==0){
            return true;
        }
        return false;
    }
};