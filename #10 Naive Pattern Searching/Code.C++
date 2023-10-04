/*
Txt = "ABABDABACDABABCABAB"
Pat = "ABABCABAB"

O/P : Pattern found at index 10
*/

#include<bits/stdc++.h>
using namespace std;

// Naive Pattern Searching : O((n-m+1)*m)
void PatternSearching(string txt, string pat){
    int n = txt.size();
    int m = pat.size();

    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(txt[i+j]!=pat[j]){
                break;
            }
        }
        if(j==m){
            cout<<i<<" ";
        }
    }
}


// Improved Naive Pattern Searching for Distinct
void PatternSearching(string txt, string pat){
    int n = txt.size();
    int m = pat.size();

    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(txt[i+j]!=pat[j]){
                break;
            }
        }
        if(j==m){
            cout<<i<<" ";
        }
        if(j==0){
            i++;
        }
        else{
            i = i+j;
        }
    }
}
int main(){

    string txt = "ABABDABACDABABCABAB";
    string pat = "ABABCABAB";

    PatternSearching(txt,pat);
}