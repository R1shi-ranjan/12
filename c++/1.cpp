#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p ={1,3};
    cout << p.first <<endl;
    vector<int> v;
    v.emplace_back(64);
    v.emplace_back(54);
    v.emplace_back(44);
    v.emplace_back(34);
    v.emplace_back(24);
    v.emplace_back(14);
    cout << v[4] <<endl ; 
    vector<int>::iterator it = v.begin();
    it++;
    cout<< *(it) <<endl;

    for (auto it=v.begin();it!=v.end();it++){
        cout << *(it) << " " << endl;
    }

    for (int it:v){
        cout << it << " ";
    }
    map<int,int>mpp;
    mpp.insert({1,2});
    for(auto rt:mpp){
        cout << rt.first ;
    }
}