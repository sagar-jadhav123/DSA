#include<bits/stdc++.h>
using namespace std;
int main(){
     unordered_set<string> s;
     s.insert("Sagar");//O(1)
     s.insert("ajay");
     s.insert("rahul");
     s.insert("Sagar");
     for(auto value: s){
        cout<<value<<endl;
     }
    auto it=s.find("Sagar");
    if(it!=s.end()){
        s.erase(it);
    }
    for(auto value: s){
        cout<<value<<endl;
     }
}