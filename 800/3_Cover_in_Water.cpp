#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.')c++;
            else{
                if(c>=3){
                    break;
                }
                else{
                    ans+=c;
                    c=0;
                }
            }
        }
        if(c>=3){
            cout<<2<<endl;
        }
        else cout<<ans+c<<endl;
    }
    return 0;
}
