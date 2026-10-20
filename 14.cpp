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
int ans=INT_MAX;
bool sorted=true;
for(int i=0;i<n-1;i++){
if(a[i]>a[i+1])sorted=false;
int diff=a[i+1]-a[i];
ans=min(ans,diff/2+1);
}
if(!sorted)cout<<0<<'\n';
else cout<<ans<<'\n';
}
return 0;
}