#include<bits/stdc++.h>
using namespace std;
// Array STL
/*int main(){
    array<int,4> a={1,5,7,8};
    int size=a.size();
    for (int i = 0; i < size; i++)
    {
       cout<<a[i]<<endl;
    }
    cout<<"Array:"<<a.at(2)<<endl;  //O(1)
    cout<<"Empty or not"<<a.empty()<<endl; //O(1)
    cout<<"Front:"<<a.front()<<endl; //O(1)
    cout<<"Back:"<<a.back()<<endl;  //O(1)
    

}*/
//Vector STL
/*int main(){
      vector<int> v;
      cout<<"Capacity:"<<v.capacity()<<endl;
      cout<<"Size:"<<v.size()<<endl;
      v.push_back(1);
      v.push_back(2);
      cout<<"Capacity:"<<v.capacity()<<endl;
      cout<<"Size:"<<v.size()<<endl;
      v.push_back(13);
      v.push_back(17);
      v.push_back(19);
      cout<<"Capacity:"<<v.capacity()<<endl;
      cout<<"Size:"<<v.size()<<endl;
      cout<<"Element in vector:"<<endl;
      for(auto i:v){
        cout<<i<<endl;
      }
      v.pop_back();
      cout<<"Afetr Pop"<<endl;
      for(auto i:v){
        cout<<i<<endl;
      }
      cout<<"Front Element:"<<v.front()<<endl;
      cout<<"Back Element:"<<v.back()<<endl;
      cout<<"Index:"<<v.at(3)<<endl;

      


}*/
// Deque STL
/*int main(){
    deque<int> d;
    d.push_back(2);
    d.push_front(5);
    d.push_back(7);
    for(auto i:d){
        cout<<i<<endl;
    }
    d.pop_front();
    cout<<"After pop fron front"<<endl;
    for(auto i:d){
        cout<<i<<endl;
    }
    d.push_back(5);
    d.pop_back();
    cout<<"After pop from back "<<endl;
    for(auto i:d){
        cout<<i<<endl;
    }
}*/
// List STL
/*int main(){
    list<int> l;
    l.push_back(2);
    l.push_back(25);
    l.push_back(26);
    l.push_back(22);
    l.push_front(3);
    for(auto i:l){
        cout<<i<<endl;
    }
}*/
// Stack STL
/*int main(){
    stack<string> s;
    s.push("Sagar");
    s.push("Ashish");
    s.push("Prayag");
    s.push("Gopal");
    s.push("Avdesh");
    cout<<"Top Element :"<<s.top()<<endl;
    s.pop();
    cout<<"Top Element :"<<s.top()<<endl;


}*/
// Queue STL
/*int main(){
    queue<string> q;
    q.push("Sagar");
    q.push("Ashish");
    q.push("Prayag");
    q.push("Gopal");
    q.push("Avdesh");
    cout<<"First Come: "<<q.front()<<endl;
    
}*/
// Priority Queue
// int main(){
    // priority_queue<int> maxi;
    // maxi.push(4);
    // maxi.push(3);
    // maxi.push(32);
    // maxi.push(41);
    // maxi.push(24);
    // int size=maxi.size();
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<maxi.top()<<endl;
    //     maxi.pop();
    // }
    /*priority_queue<int,vector<int>,greater<int>> mini;
    mini.push(4);
    mini.push(3);
    mini.push(32);
    mini.push(41);
    mini.push(24);
    int size=mini.size();
    for (int i = 0; i < size; i++)
    {
        cout<<mini.top()<<endl;
        mini.pop();
    }*/

    
// }
// Set STL
/*int main(){
    set<int> s;
    cout<<"IN SET :"<<endl;
    s.insert(4);
    s.insert(4);
    s.insert(6);
    s.insert(1);
    s.insert(2);
    s.insert(12);
    for(auto i:s){
        cout<<i<<endl;
    }
    multiset<int> ms;
    cout<<"In Multiset :"<<endl;
    ms.insert(4);
    ms.insert(4);
    ms.insert(6);
    ms.insert(1);
    ms.insert(2);
    ms.insert(12);
    for(auto i:ms){
        cout<<i<<endl;
    }
    set<int> :: iterator it=s.begin();
    it++;
    s.erase(it);
    cout<<"Is Present:"<<s.count(5)<<endl;
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }
    

}*/
// Maps STL
/*int main(){
    map<int,string> m;
    m[1]="Sagar";
    m[2]="Gopal";
    m[4]="Prayag";
    m.insert({5,"Avdesh"});
    m.insert({7,"Ashish"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.erase(4);
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=m.find(5);
    cout<<"After find function:"<<endl;
    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    
}*/
// Algorithm
// int main(){
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(4);
//     v.push_back(6);
//     v.push_back(9);
//     v.push_back(10);
//     cout<<"Binary Search: "<<binary_search(v.begin(),v.end(),9)<<endl;
//     cout<<"Upper Bound :"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
//     cout<<"Lower Bound :"<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
//     sort(v.begin(),v.end());
//     cout<<"First"<<endl;
//     for(auto i:v){
//         cout<<i<<endl;
//     }
//     reverse(v.begin(),v.end());
//     cout<<"Second"<<endl;
//     for(auto i:v){
//         cout<<i<<endl;
//     }
//     rotate(v.begin(),v.begin()+1,v.end());
//     cout<<"Third"<<endl;
//     for(auto i:v){
//         cout<<i<<endl;
//     }



// }
