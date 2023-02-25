#include<bits/stdc++.h>
using namespace std;
int main(){
    // stack<int> s;
    // s.push(4);
    // s.push(2);
    // s.push(7);
    // s.push(1);
    // s.push(20);
    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }
    stack<string> s;
    s.push("Sagar");
    s.push("Rohit");
    s.push("Rahul");
    s.push("Nitin");
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    
}