#include<bits/stdc++.h>
using namespace std;
int rev(int n){
    int sum=0;
    while(n>0){
        int l=n%10;
        n=n/10;
        sum=sum + l*l*l;
    }
    return sum;
 
}

int main(){
    int n;
    cin>>n;
    int res=rev(n);
    cout<<res;
    if(res==n){
        cout<< "yes";
    }
    else{
        cout<< "no";
    }

    
}