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

int n;
cin>>n;
vector<int> v(n,0);
for (int i = 0; i < n; ++i){
    cin>>v[i];
}
int i=0,j=n-1;
while(i<j){
    swap(v[i],v[j]);
    i++;
    j--;
}

for (int i = 0; i < n; ++i){
    cout<<v[i]<<" ";
}
cout<<endl;

}


// I/O:
// 5
// 1 2 3 4 5