#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)cin>>a[i];
sort(a.begin(),a.end());
int i=0,j=n-1;
while(i<j){
if(a[i+1]-a[i]<=1)i++;
else break;
}
if(i==j-1&&a[j]-a[i]<=1)cout<<"YES\n";
else cout<<"NO\n";
}
return 0;
}
