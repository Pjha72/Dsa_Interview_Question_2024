#include<bits/stdc++.h>
using namespace std;

// Naive solution : O(n^2)
int LeftmostNonRepeating(string str, int n){

    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=0;j<n;j++){
            if(i!=j && str[i]==str[j])
            {
                flag = true;
                break;
            }
        }
        if(flag==false) return i;
    }
    return -1;
}

// Efficient solution : O(n), O(1)
int LeftmostNonRepeating(string str, int n){
    int count[256] = {0};
    for(int i=0;i<n;i++){
        count[str[i]]++;
    }
    for(int i=0;i<n;i++){
        if(count[str[i]]==1) return i;
    }
    return -1;
}


int main(){
    string str = "geeksforgeeks";
    int n = str.length();

    cout<<LeftmostNonRepeating(str,n);
}