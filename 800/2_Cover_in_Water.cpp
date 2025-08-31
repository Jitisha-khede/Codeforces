#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int temp = x-a[n-1];
        a.push_back(x+temp);
        int ans = a[0];
        for(int i=0;i<n;i++){
            int val= a[i+1]-a[i];
            ans = max(val,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}
