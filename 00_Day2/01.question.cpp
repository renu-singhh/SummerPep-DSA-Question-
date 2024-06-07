// leetcode 69 Sqrt(x)
// Input : x = 8 Output : 2

#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x){
    int left=1;
    int right=x;
    while(left<=right){
        int mid=left+(right-left)/2;
        long long square=(long long)mid*mid;
        if(square==x) return mid;
        else if(square<=mid) left=mid+1;
        else right=mid-1;
    }
    return right;
}
int main(){
    int x;
    cout<<"Enter the number you want to find the square root"<<endl;
    cin>>x;
    cout<<mySqrt(x)<<endl;
    return 0;
}