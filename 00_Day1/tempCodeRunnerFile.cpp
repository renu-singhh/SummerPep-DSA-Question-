#include<bits/stdc++.h>
// using namespace std;
// int maximumcount(vector<int> &nums){
//     int n=nums.size();
//     int negative=0;
//     int postive=0;
//     int ans=0;
//     for(int i=0;i<n;i++){
//         if(nums[i]<0) negative++;
//         if(nums[i]==0) continue;
//         else postive++;
//         ans=max(postive,negative);

//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> nums(n);
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     cout<<maximumcount(nums);
//     return 0;
// }