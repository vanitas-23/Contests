#include <bits/stdc++.h>
#define ll long long
using namespace std;
int md=1e9+7;
 

int main() {
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr.begin(),arr.end());
for(int i=1;i<n;i++){
    if(arr[i]-1!=arr[i-1])
    {
        cout<<arr[i-1]+1;
        return 0;
    }
}

return 0;
   }
