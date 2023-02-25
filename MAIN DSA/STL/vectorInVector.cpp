#include<bits/stdc++.h>

using namespace std;
void vectorPrint(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    { 
        cout<<"Y"<<endl;
      cout<<v[i]<<" ";
    }
    
}
int main(){
    vector<vector<int>> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int N;
        cin>>N;
        vector<int> temp;
        for (int j = 0; j < N; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
        
    }
    for (int i = 0; i < v.size(); i++)
    {
       vectorPrint(v[i]);
    }
    
    return 0;
    
}