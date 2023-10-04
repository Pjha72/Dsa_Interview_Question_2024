#include<bits/stdc++.h>
using namespace std;

// Naive Approach : O(n) time and O(n) space
/*
1. Create a stack
2. Push words one by one to the stack
3. Pop words from the stack and append to the ans string
*/

// Efficient Approach : O(n) time and O(n) space
string ReverseWords(string s, int n){
    vector<string>v;
    string temp = "";
    for(int i=0;i<n;i++){
        if(s[i] == ' '){
            v.push_back(temp);
            temp = "";
        }
        else{
            temp +=s[i];
        }
    }
    v.push_back(temp);
    string ans = "";
    for(int i=v.size()-1;i>=0;i--){
        ans+=v[i];
        if(i!=0){
            ans+=" ";
        }
    }
    return ans;
}

// Efficient Approach : O(n) time and O(1) space
void reverse(char s[], int st, int e){
    while(st<e){
        swap(s[st],s[e]);
        st++;
        e--;
    }
}
void ReverseWprds(char s[], int n){
    int st = 0;
    for(int e = 0; e<n;e++){
        if(s[e] == ' '){
            reverse(s,st,e-1);
            st = e+1;
        }
    }
    // Reverse the last word
    reverse(s, st,n-1);
    // reverse the whole string
    reverse(s,0,n-1);
}

int main(){
    string s = "the sky is blue";
    int n = s.size();

    ReverseWords(s,n);
}