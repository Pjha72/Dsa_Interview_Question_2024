// Constructing Longest Proper Prefix Suffix Array

/*
    Input: ababaca
    Output: 0012301

    Proper PRefix of "ababaca" are "", "a", "ab", "aba", "abab", "ababa", "ababac"
    Proper Suffix of "ababaca" are "", "a", "ca", "aca", "baca", "abaca", "babaca"

    Ex : Input : "abacabad"
        Output : {0, 0, 1, 0, 1, 2, 3, 0}

        Input : "abbabb"
        Ouput : {0, 0, 0, 1, 2, 3}
*/

#include<bits/stdc++.h>
using namespace std;

// Naive Approach : O(n^3)
int LongestPrefixSuffix(string s, int n){
    for(int len=n-1;len>0;len--){
        bool flag = true;
        for(int i=0;i<len;i++){
            if(s[i] != s[n-len+i]){
                flag = false;
            }
        }
        if(flag == true){
            return len;
        }
        return 0;
    }
}
void LPS(string s, int n, int lps[]){
    for(int i=0;i<n;i++){
        lps[i] = LongestPrefixSuffix(s,i+1);
    }
}

// Efficient Approach : O(n)
/*
Basic Idea : 
    1. If len = lps[i-1] and s[len] and s[i] are same, then lps[i] = len+1
    2. If s[i] and s[len] are not same
        a. If len == 0, then lps[i] = 0
        b. Else, we recursively apply lps[] to len = lps[len-1]
            then compare str[i] and str[len]
    
*/

void fillLps(string s, int n, int lps[]){
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while(i<n){
        if(s[i] == s[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len==0){
                lps[i] =0 ;
                i++;
            }
            else{
                len = lps[len-1];
            }
        }
    }
}
int main(){
    string s = "ababaca";
    int n = s.length();
    int lps[n];
    LPS(s, n, lps);
}