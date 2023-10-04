/*
    Input :
        txt : abcdefg
        pat : bcd
    Output : 
        1 

*/

#include<bits/stdc++.h>
using namespace std;

// Naive Approach : O((n-m)*m) S.C : O(1)

// KMP Algorithm : O(n+m) S.C : O(m)
void fillLPS(string str, int *lps){
    int n=str.length(),len=0;
    lps[0]=0;
    int i=1;
    while(i<n){
        if(str[i]==str[len])
        {len++;lps[i]=len;i++;}
        else
        {if(len==0){lps[i]=0;i++;}
            else{len=lps[len-1];}
        }
    }
}
void KMP(string txt, string pat){
    int n = txt.length();
    int m = pat.length();
    int lps[m];
    fillLPS(pat,lps);
    int i = 0, j = 0;
    while(i<n){
        if(pat[j]==txt[i]){
            i++,j++;
        }
        if(j==m){
            cout<<i-j<<" ";
            j = lps[j-1];
        }
        else if(i<n && pat[j]!=txt[i]){
            if(j==0) i++;
            else j = lps[j-1];
        }
    }

}