#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;             
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> b=a;
        sort(b.begin(),b.end());            
        if(b==a || k>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;  
    }
    return 0;
}
