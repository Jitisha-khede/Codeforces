#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<5;i++){
            if(s[i]=='A') ca++;
            else if (s[i]=='B') cb++;
        } 
        if(ca>cb) cout<<"A"<<endl;  
        else cout<<'B'<<endl;
    }
    return 0;
}
