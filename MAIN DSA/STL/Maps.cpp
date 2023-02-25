#include<bits/stdc++.h>
using namespace std;
void printMap(map<int,string> &m){
    cout<<"Size:"<<m.size()<<endl;
    for(auto &value :m){
        cout<<value.first<<" "<<value.second<<endl;
    }
}
int main(){
    map<int,string> m;
    m[1]="Sagar";
    m[2]="Prayag";//T.C=O(log(n))
    m[3]="Gopal";
    m[5]="Avdesh";
    // we also declare in maps like below
    m.insert({4,"Ashish"});
    // m["Sagar"]="rohit"//s.size()*log(n)
    auto it=m.find(3);
    if(it!=m.end())
    m.erase(4);//O(log(n))
    // m.clear();
    // if(it==m.end()){
    //     cout<<"No value"<<endl;
    // }else{
    //     cout<<(it->first)<<" "<<(it->second)<<endl;
    // }
    printMap(m);
    // for Printing
    // map<int,string> :: iterator it;
    // for(it=m.begin(); it!=m.end(); it++){
    //     cout<<(it->first)<<" "<<(it->second)<<endl;
    // }
    // we also print like below
    //  for(auto &value: m){
    //     cout<<value.first<<" "<<value.second<<endl;
    // }
    // cout<<"Again"<<endl;
   
    return 0;

}