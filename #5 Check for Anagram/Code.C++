#include<bits/stdc++.h>
using namespace std;

// Naive solution :O(nlogn)
bool anagram(string s1, string s2, int n, int m){
    if(n!=m) return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}

// Efficient solution : O(n), O(1)
bool anagram(string s1, string s2, int n, int m){
    if(n!=m) return false;
    int count[256] = {0};
    for(int i=0;i<n;i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0) return false;
    }
    return true;
}

int main(){
    string s1 = "listen";
    string s2 = "silent";

    int n = s1.length(), m = s2.length();
    anagram(s1,s2,n,m);
}