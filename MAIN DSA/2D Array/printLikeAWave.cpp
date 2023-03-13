// Code Studio Problem
#include<bits/stdc++.h>
using namespace std;
vector<int> wavePrint(vector<vector<int> > arr,int nRows,int mCols){
    vector<int> v;
    for(int i=0;i<mCols;i++){
        
            if(i&1){
                 for(int j=nRows-1;j>=0;j--){
                   v.push_back(arr[j][i]);
                 }
            }else{
                for(int j=0;j<nRows;j++){
                    v.push_back(arr[j][i]);
                }  
            }
        
    }
    return v;
}
int main(){
    vector<vector<int> > v={{1,2,4,5},{3,6,8,10},{11,12,13,15},{16,14,9,7}};
    vector<int> V = wavePrint(v,4,4);
    cout<<"Size of vector :"<<V.size()<<endl;
    for (int i = 0; i < V.size(); i++)
    {
        cout<<V[i]<<" ";
    }
    
    return 0;
    
    
}