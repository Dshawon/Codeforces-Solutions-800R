
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; 
    cin>>s;
    sort(s.begin(), s.end());
    int l = s.length();
    int cnt=1;
    for(int i=1; i<l; i++)
        if(s[i]!=s[i-1])
            cnt++;
    if(cnt&1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
}
