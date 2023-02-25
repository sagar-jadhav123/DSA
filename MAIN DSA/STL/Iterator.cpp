#include<bits/stdc++.h>
using namespace std;
// int main(){
//     vector<int> v={1,3,5,7,8};
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     vector<int> ::iterator it;
//     for (it = v.begin(); it !=v.end(); it++)
//     {
//         cout<<*(it)<<" ";
//     }
    
// }
// int main(){
//     vector<pair<int,int>> v={{1,3},{5,8},{2,6}};
//     vector<pair<int,int>> :: iterator it;
//     for(it=v.begin(); it !=v.end(); it++){
//          cout<<(*it).first<<" "<<(*it).second<<endl;
//     }
//     // We Write below like
//     for(it=v.begin(); it !=v.end(); it++){
//          cout<<(it->first)<<" "<<(it->second)<<endl;
//     }
//     // (*it).first==it->first
// }
int main(){
    vector<int> v={1,3,4,5,7,8,6};
    for(auto value : v){
        cout<<value<<" ";
    }cout<<endl;
    vector<pair<int,int>> v_p={{2,3},{3,6},{7,9}};
    for(auto value:v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
}