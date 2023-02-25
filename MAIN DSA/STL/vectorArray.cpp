#include<bits/stdc++.h>
using namespace std;
void vectorArray(vector<int> v){
    cout<<"Array is:"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v[n];
    for(int i=0;i<n;i++){
        int N;
        cin>>N;
        for(int j=0;j<N;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<n;i++){
        vectorArray(v[i]);
    }
    return 0;
}