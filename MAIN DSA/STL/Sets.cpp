//Ordered Sets
/*#include<bits/stdc++.h>
using namespace std;
void printSet(set<string> s){
    for(auto value: s)
    {
        cout<<value<<endl;
    }
}
int main(){
    set<string> s;
    s.insert("sagar");
    s.insert("gopal");
    s.insert("prayag");
    s.insert("ashish");//log(n)
    s.insert("avdesh");
    auto it=s.find("sagar");//log(n)
    if(it!=s.end()){
        s.erase(it);
    }
    printSet(s);
    

}*/
//Question on Ordered Set
/*Given N string ,print unique string in lexografical ordered
N<=10^5
|S|<=10^5*/
#include<bits/stdc++.h>
using namespace std;
void printSet(set<string> s){
    for(auto value : s){
        cout<<value<<endl;
    }
}
int main(){
    set<string> s;
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        string S;
        cin>>S;
        s.insert(S);
    }
    printSet(s);
    

}