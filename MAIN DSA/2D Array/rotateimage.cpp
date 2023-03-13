// Rotate Image LeetCode Problem
#include<bits/stdc++.h>
using namespace std;
void rotateImage(vector<vector<int> > &matrix){
    int row=matrix.size()-1;
    int col=matrix[0].size()-1;
    vector<vector<int> > V;
   for(int i=row;i>=0;i--){
    vector<int> vec;
    for(int j=0;j<=col;j++){   
      vec.push_back(matrix[i][j]); 
    }
    V.push_back(vec);
   }
   for(int i=0;i<=col;i++){
    for(int j=0;j<=row;j++){
        cout<<V[j][i]<<" ";
    }
    cout<<endl;
   }

}
int main(){
    vector<vector<int> > v={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    rotateImage(v);
    
}