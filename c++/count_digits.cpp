#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int c=0;
    while(n>0){
        int l=n%10;
        c+=1;
        n=n/10;
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    int res=count(n);
    cout<<res;
}