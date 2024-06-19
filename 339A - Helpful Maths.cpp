#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int n = s.size();
    for(int i=0; i<n-2; i+=2){
        for(int j=i+2; j<n; j+=2){
            if(s[i]>s[j]) swap(s[i], s[j]);
        }
    }
    cout<<s;
}

