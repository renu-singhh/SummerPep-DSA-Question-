#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &nums){
    int n=nums.size();
    if(nums[0]==nums[n-1]){
        cout<<"NO"<<endl;
        return ;
    }
    cout<<"YES"<<endl;
    cout<<"RB";
    for(int i = 2;i<n;i++){
        cout<<"R";
    }
    
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        print(nums);
        
    }
    return 0;
}