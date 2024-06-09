// Recursion basic 
// n=7 return 1 2 3 4 5 6 7
// base case =smallest valid input always..
// function (n-1) tak chale ga

#include<bits/stdc++.h>
using namespace std;
int print(int n){
    if(n==1){
        cout<<1<<endl;
         return 1;
    }
    print(n - 1);
    cout<< n<<" ";    
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    print(n);
    return 0;
}