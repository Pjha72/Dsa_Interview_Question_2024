/*
    Input : str = "abcdabc"
    Ouput : 4
*/

#include<bits/stdc++.h>
using namespace std;

// Naive Solution : O(n^3)
/*
    Generate all substrings and check if it has all unique characters
*/
bool areDistinct(string s, int i, int j){
    vector<bool> visited(256);
    for(int k=i;k<=j;k++){
        if(visited[s[k]] == true){
            return false;
        }
        visited[s[k]] = true;
    }
    return true;
}

int LongestSubstring(string s){
    int  n = s.length();
    int res = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(areDistinct(s,i,j)){
                res = max(res,j-i+1);
            }
        }
    }
    return res;
}

// Better Solution : O(n^2)
int LongestSubstring(string s){
    int n = s.length(), res = 0;
    for(int i=0;i<n;i++){
        vector<bool> visited(256);
        for(int j=i;j<n;j++){
            if(visited[s[j]] == true){
                break;
            }
            else{
                res = max(res, j-i+1);
                visited[s[j]] = true;
            }
        }
    }
    return res;
}

// Efficient Solution : O(n)
/*
    maxFind(j) = Length of the longest substring that has
    distinct characters and ends at index j

    res = max(maxFind(j)) where  j = 0 to n-1

    maxFind(j) = (maxFind(j-1)+1) => If s[j] is not persent in maxFind(j-1)
    maxFind(j) = (j-prev[s[j]]) => If s[j] is present in maxFind(j-1)
    where prev[s[j]] is the previous index of s[j] in maxFind(j-1)

    Time Complexity: O(n)
*/

int LongestSubstring(string s){
    int n = s.length(),res=0;
    vector<int> prev(256,-1);
    int  i =0;
    for(int j =0 ;j<n;j++){
        i = max(i, prev[s[j]]+1);
        int maxEnd = j-i+1;
        res = max(res, maxEnd);
        prev[s[j]] = j;
    }
    return res;
}