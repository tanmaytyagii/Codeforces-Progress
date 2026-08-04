#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int count = 0;
        while(a!=b && a!=c && b!=c){
            int mx = max({a,b,c});
            int mn = min({a,b,c});
            if(a==mx) a--;
            else if(b==mx) b--;
            else c--;
            if(a==mn) a++;
            else if(b==mn) b++;
            else c++;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}