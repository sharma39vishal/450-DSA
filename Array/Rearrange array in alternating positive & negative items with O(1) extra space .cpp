#include <bits/stdc++.h>
using namespace std;

void fileio(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main(){
fileio();
vector<int> v={ -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
int i=1,j=0,n=v.size();
while(i<n&&j<n){
    while(i<n&&v[i]>0){
        i+=2;
    }
    while(j<n&&v[j]<0){
        j+=2;
    }
    if(i>=n||j>=n){
        break;
    }
    swap(v[i],v[j]);
}

for (int i = 0; i < n; ++i){
    cout<<v[i]<<" ";
}
cout<<endl;
}
