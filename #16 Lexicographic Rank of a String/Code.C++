/*
    Lexicographic Rank of a String
    Given a string, find its rank among all its permutations sorted lexicographically. 
    For example, rank of “abc” is 1, rank of “acb” is 2, and rank of “cba” is 6.

    Input : str[] = "acb"
    Output : Rank = 2

    Input : str[] = "BAC"
    Output : Rank = 3
*/
#include<bits/stdc++.h>
using namespace std;

// Naive SOlution
/*
    Generate all permutation in lexograpgical order and find the rank of given string
    Time Complexity: O(n*n!)

*/

// Efficient Solution
/*
    Count Lexographical smaller strings + 1
    Time Complexity: O(char + n + char + n)
*/

int fact(int n){
    return (n<=1)?1 : n*fact(n-1);
}

int findRank(string s){
    int res = 1;
    int n = s.length();
    int mul = fact(n);
    int count[256] = {0};
    for(int i=0;i<n;i++){
        count[s[i]]++;
    }
    for(int i=1;i<256;i++){
        count[i] += count[i-1];
    }

    for(int i=0;i<n-1;i++){
        mul = mul/(n-i);
        res = res + count[s[i]-1]*mul;
        for(int j = s[i];j<256;j++){
            count[j]--;
        }
    }
    return res;
}