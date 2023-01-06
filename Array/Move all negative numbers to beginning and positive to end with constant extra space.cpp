#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void fileio(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main(){
fileio();
ll n;
cin>>n;
vector<ll>a;
vector<ll>b;
for (ll i = 0; i < n; ++i){
    ll x;
    cin>>x;
    if (x<0){
        a.push_back(x);
    }
    else{
        b.push_back(x);
    }
}
for (int i = 0; i < b.size(); ++i){
    a.push_back(b[i]);
}
for (int i = 0; i < n; ++i){
    cout<<a[i]<<" ";
}
cout<<endl;
}
