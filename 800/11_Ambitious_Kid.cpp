#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long ans = INT_MAX;
        for(int i=0;i<n;i++){
            ans = min(ans,abs(a[i]));
        }
        cout<<ans<<endl;
  
    return 0;
}