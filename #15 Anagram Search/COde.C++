/*
Anagram Search
    Input:
        txt[] = "BACDGABCDA"  pat[] = "ABCD"
    Output:
        Yes
*/

#include<bits/stdc++.h>
using namespace std;

// Naive Approach : O((n-m+1)*m) S.C : O(1)
bool isPersent(string txt, string pat){
    int n = txt.length();
    int m = pat.length();
    for(int i=0;i<=n-m;i++){
        if(AnagramCheck(pat, txt, i)){
            return true;
        }
    }
    return false;
}

bool AnagramCheck(string pat, string txt, int i){
    int count[256] = {0};
    for(int j=0;j<txt.length();j++){
        count[pat[j]]++;
        count[txt[i+j]]--;
    }
    for(int j=0;j<256;j++){
        if(count[j] != 0){
            return false;
        }
    }
    return true;
}


// Efficient Approach : O(n+m) S.C : O(Char)
bool areSame(int CT[],int CP[]){
    for(int i=0;i<256;i++){
        if(CT[i]!=CP[i])return false;
    }
    return true;
}

bool isPersent(string txt, string pat){
    int n = txt.length();
    int m = pat.length();
    int countTxt[256] = {0};
    int countPat[256] = {0};

    for(int i=0;i<m;i++){
        countTxt[txt[i]]++;
        countPat[pat[i]]++;
    }
    for(int i=m;i<n;i++){
        if(areSame(countTxt, countPat)){
            return true;
        }
        countTxt[txt[i]]++;
        countTxt[txt[i-m]]--;
    }
    return false;
}