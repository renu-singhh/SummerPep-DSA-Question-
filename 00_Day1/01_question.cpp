// Maximum count of positive integer and negative integet
// Input: nums = [-2,-1,-1,1,2,3]
// Output : 3


// Brute force-------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int maximumcount(vector<int> &nums){
    int n=nums.size();
    int negative=0;
    int postive=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(nums[i]<0) negative++;
        if(nums[i]==0) continue;
        else postive++;
        ans=max(postive,negative);

    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<maximumcount(nums);
    return 0;
}

// optimal ----------------------------------------------------------------------
// [ -3, -2, -1, 0, 0, 1, 2 ]
// mid=0;
// 0<

#include <bits/stdc++.h>
using namespace std;
int maximumcount(vector<int> &nums)
{
    int n=nums.size();
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]<0){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
        int length=left;
        while(left<n && nums[length]==0){
            length++;
        }
        int total=n-length;
        int newlength=left;
        return max(total,newlength);
    }


}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << maximumcount(nums);
    return 0;
}