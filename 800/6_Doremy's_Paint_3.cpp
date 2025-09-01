#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()>2) cout<<"NO"<<endl;
        else if(mp.size()==1) cout<<"YES"<<endl;
        else {
            int c1 = 0, c2 = 0;
            bool flag = 0;
            for(auto it: mp){
                if(flag==0){
                    c1 = it.second;
                    flag =1;
                }
                else{
                    c2 = it.second;
                    break;
                }
            }
            if((c1>c2+1 && c1>c2) || (c2>c1+1 && c1<c2)) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }

    return 0;
}