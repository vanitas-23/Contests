#include <bits/stdc++.h>
#define ll long long
using namespace std;
int md=1e9+7;
 

int main() {
int n,h,k;
cin>>n>>h>>k;
vector<int>arr(n);
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<n;i++){
    if(h+arr[i]>=k){
        cout<<i+1;
        return 0;
    }
}

return 0;
   }
