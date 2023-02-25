#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair<int,int>p;
    // // p={1,3};
    // p=make_pair(1,3);
    // pair<int,string> p1;
    // p1={5,"Sagar"};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;
    // cout<<p1.first<<endl;
    // cout<<p1.second<<endl;
    // int a[]={1,2,3};
    // int b[]={4,5,7};
    // pair<int,int>p_array[3];
    // p_array[0]={1,4};
    // p_array[1]={2,5};
    // p_array[2]={3,7}; 
    // for(int i=0;i<3;i++){
    //   cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }
    pair<int,int>p;
    cin>>p.first;
    cin>>p.second;
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int>p1[3];
    for(int i=0;i<3;i++){
        cin>>p1[i].first;
        cin>>p1[i].second;
    }
     for(int i=0;i<3;i++){
        cout<<p1[i].first<<""<<p1[i].second<<endl;
        
    }
}