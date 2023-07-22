#include<bits/stdc++.h>
using namespace std;
int rev(int n){
    int c=0;
    while(n>0){
        int l=n%10;
        n=n/10;
        c=c*10+l;
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    int res=rev(n);
    cout<<res;
    }
    
}