// https :  codeforces.com/problemset/problem/6/C
#include<bits/stdc++.h>
        using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int AliceSum=0,Bobsum=0,j1=0,j2=n-1;
    int Alicecount=0,BobCount=0;
    while(j1<=j2){
        if(AliceSum<=Bobsum){
            AliceSum+=ans[j1];
            Alicecount++;
            j1++;
        }
        else{
            BobCount++;
            Bobsum+=ans[j2];
            j2--;
        }
    }
    cout<<Alicecount<<" "<<BobCount<<endl;
}
int main(){
    solve();
}