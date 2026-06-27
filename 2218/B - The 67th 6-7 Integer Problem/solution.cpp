#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int> nums(7);
        for(int i = 0; i<7; i++){
          cin>>nums[i];  
        }
        sort(nums.begin(), nums.end());
        for(int i = 5; i>=0; i--){
            nums[i]=nums[i]*(-1);
            
        }
        int sum=0;
        for(int i=0; i<7; i++){
            sum = sum+nums[i];
        }
        cout<<sum<<endl;
        
    }
}