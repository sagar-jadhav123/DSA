/*Given N string,print unique strings in lexographical order with their 
frequency.
N<=10^5;
|S|<=100;
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto st:m){
        cout<<st.first<<' '<<st.second<<endl;
    }
}