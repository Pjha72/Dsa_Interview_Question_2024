#include<bits/stdc++.h>
using namespace std;

// Naive solution : O(n^2)
int LeftmostRepatingCharacter(string s, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]) return i;
        }
    }
    return -1;
}
// Effecient solution : O(n), O(1)
int LeftmostRepeatingCharacter(string s, int n){
    int count[256] = {0};
    for(int i=0;i<n;i++){
        count[s[i]]++;
    }
    for(int i=0;i<n;i++){
        if(count[s[i]]>1) return i;
    }
    return -1;
}

// Effecient solution -1 : O(n), O(1)
int LeftmostRepeatingCharacter(string s, int n){
    int fIndex[256];
    fill(fIndex,fIndex+256,-1);
    int res = INT_MAX;
    for(int i=0;i<n;i++){
        int fi = fIndex[s[i]];
        if(fi==-1) fIndex[s[i]] == i;
        else res = min(res,fi);
    }
    return (res==INT_MAX)?-1:res;
}

// Effecient solution -2 : O(n), O(1)
int LeftmostRepeatingCharacter(string s, int n){
    bool visited[256];
    fill(visited, visited+256, false);
    int res = -1;
    for(int i=s.size()-1;i>=0;i--){
        if(visited[s[i]]) res = i;
        else visited[s[i]] = true;
    }
    return res;
}

int main(){
    string s = "geeksforgeeks";
    int n  = s.length();

    LeftmostRepeatingCharacter(s,n);
}