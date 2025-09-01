#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int c = 0;
        bool flag =0;
        while(x.size()<=s.size()*2){
            if(x.find(s)!=string::npos) {
                break;
            }
            x+=x;
            c++;
            flag = 1;
        }
        if(x.size()>s.size() && flag == 0 && x.find(s)==string::npos){
            c++;
            x+=x;
        }
        if(x.find(s)!=string::npos) {
            cout<<c<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}