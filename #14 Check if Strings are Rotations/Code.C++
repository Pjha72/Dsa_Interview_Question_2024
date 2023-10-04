/*
    Input : 
        s1 : "ABCD"
        s2 : "CDAB"
    Output : 
        Yes
*/
#include<bits/stdc++.h>
using namespace std;

// O(n) , O(n)
bool RotationString(string s1, string s2){
    int n = s1.length();
    int m = s2.length();

    if(n!=m){
        return false;
    }

    string temp = s1 + s1;
    return (temp.find(s1) != string::npos);
}