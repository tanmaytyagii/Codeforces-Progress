#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count =0;
        int answer = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='*'){
                count ++;
            }
            else{
                answer=max(answer,(count+1)/2);
                count =0;
                
            }
        }
        answer = max(answer, (count + 1) / 2);
        cout<<answer<<endl;
    }
    return 0;
}