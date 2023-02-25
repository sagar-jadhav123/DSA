#include<bits/stdc++.h>
using namespace std;
void stringVar(vector<string> v){
    cout<<"size is:"<<endl;
    // v.push_back(9);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    // v.push_back(9);
}
int main(){
    // vector<int> v(5,4);
    // int n;
    // cout<<"Size"<<" ";
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);//O(1)
    //     vectorVar(v);
    // }
    // v.push_back(7);
    // v.push_back(3);
    // vector<int> v2=v; //O(n)
    // v2.push_back(8);
    // vectorVar(v2);
    // vectorVar(v);
    // vectorVar(v);
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    stringVar(v);
    return 0;
    
    
    
    
}