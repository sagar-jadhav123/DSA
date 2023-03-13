//Leetcode Problem
//Spiral Matrix Problem
#include<bits/stdc++.h>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>>& matrix){
    vector<int> v;
    int row=matrix.size();
    int col=matrix[0].size();
    //Index Initialization
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;
    int total=row*col;
    int count=0;
    while(count<total){
        for(int i=startingCol;count<total && i<=endingCol;i++){
            v.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;
        for(int i=startingRow;count<total && i<=endingRow;i++){
            v.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;
        for(int i=endingCol;count<total && i>=startingCol;i--){
            v.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        for(int i=endingRow;count<total && i>=startingRow;i--){
            v.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
        
    }
    return v;
}
int main(){
    vector<vector<int> > v= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> V = spiralMatrix(v);
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
    
}