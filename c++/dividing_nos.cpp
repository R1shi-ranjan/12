#include<bits/stdc++.h>
using namespace std;

int div(int n){
    for (int i =1;i<=n;i++){
        if (n%i==0){
            cout<<i<<" ";
        }
    }                
}
int div1(int n){
    vector<int> v;
    for (int i =1; i*i<=(45n);i++){
        if (n%i==0){
            v.emplace_back(i);
            if (n/i!=i){
                v.emplace_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto it : v){
        cout<<it<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    div1(n);
    return 0;
}