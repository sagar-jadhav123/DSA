// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     multiset<string> s;
//     s.insert("Rohit");
//     s.insert("Sagar");
//     s.insert("Rohit");
//     s.insert("Ajay");
//     for(auto DK: s){
//         cout<<DK<<endl;
//     }
//     auto it=s.find("Rohit");
//     if(it!=s.end()){
//         s.erase(it);
//     }
//     cout<<"After:"<<endl;
//     for(auto DK: s){
//         cout<<DK<<endl;
//     }
//     s.erase("Rohit");
//     cout<<"Again-2:"<<endl;
//     for(auto DK: s){
//         cout<<DK<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int x,y;
      cin>>x>>y;
      multiset<long long> bags;
      for (int i = 0; i < x; i++)
      {
         long long cd_count;
         cin>>cd_count;
         bags.insert(cd_count);
      }
      long long total_candy=0;
      for (int i = 0; i < y; ++i)
      {
         auto last_it=(--bags.end());
         long long cd_count=*last_it;
         total_candy+=cd_count;
         bags.erase(last_it);
         bags.insert(cd_count/2);
      }
      
   cout<<"Sum is:"<<total_candy<<endl;
   }
}
