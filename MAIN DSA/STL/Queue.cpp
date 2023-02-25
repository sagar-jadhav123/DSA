#include<bits/stdc++.h>
using namespace std;
// int main(){
//     queue<int> s;
//     s.push(4);
//     s.push(2);
//     s.push(7);
//     s.push(1);
//     s.push(20);
//     while(!s.empty()){
//         cout<<s.front()<<endl;
//         s.pop();
//     }
//     // queue<string> s;
//     // s.push("Sagar");
//     // s.push("Rohit");
//     // s.push("Rahul");
//     // s.push("Nitin");
//     // while(!s.empty()){
//     //     cout<<s.front()<<endl;
//     //     s.pop();
//     // }
    
// }
unordered_map<char,int> symbols={{'{',-1},{'[',-2},{'(',-3},{'}',1},{']',2},{')',3}} ;
string isBalanced(string s) {
    stack<char> st;
    for(auto bracket:s){
        if(symbols[bracket]<0){
            st.push(bracket);
        }else{
            if(st.empty()){
                return "NO";
            }
            char top=st.top();
            st.pop();
            if(symbols[top]+symbols[bracket]!=0){
                return "NO";
            }
        }
    } 
    if(st.empty()){
        return "YES";
    }
    return "NO";
}
int main(){
    int n;
    cin>>n;
    while(n--){
      string s;
      cin>>s;
      cout<<isBalanced(s)<<endl;
    }
}