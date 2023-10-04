#include<bits/stdc++.h>
using namespace std;

// Naive solution : O(n) , O(n)
bool pailndrome(string str, int n){
    string rev = str;
    reverse(rev.begin(), rev.end());
    return (rev==str);
}

// Efficient solution : O(n), O(1)
bool palindrome(string str, int n){
    int s = 0, e = n-1;
    while(s<e){
        if(str[s]!=str[e]){
            return false;
        }
        s++,e--;
    }
    return true;
}

int main(){
    string str = "abba";
    int n = str.length();

    palindrome(str,n);
}