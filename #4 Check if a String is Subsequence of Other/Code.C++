#include<bits/stdc++.h>
using namespace std;

// Iterative solution : O(n+m), O(1)
bool Subsequence(string s1, string s2){
    int i = 0, j= 0;
    while(i<s1.length() && j<s2.length()){
        if(s1[i] == s2[j]){
            i++,j++;
        }
        else{
            i++;
        }
    }
    return (j==s2.length());
}

// recursive solution : O(m+n), O(m+n)
bool Subsequence(string s1, string s2, int n, int m){
    if(n==0){
        return false;
    }
    if(m==0) return false;
    if(s1[n-1]==s2[m-1]){
        return Subsequence(s1,s2,n-1,m-1);
    }
    else{
        return Subsequence(s1,s2,n-1,m);
    }
}

int main(){
    string s1 = "ABCD";
    string s2 = "AD";

    Subsequence(s1,s2);
}

// Leetcode : https://leetcode.com/problems/is-subsequence/description/