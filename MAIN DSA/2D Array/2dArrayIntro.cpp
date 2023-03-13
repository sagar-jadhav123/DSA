#include<bits/stdc++.h>
using namespace std;
bool isPresent(int arr[][4],int target,int row,int col){
     for (int i = 0; i < row; i++)
     {
        for(int j=0;j<col;j++){
            if(arr[i][j] == target) return 1;
        }
     }
     return 0;
     
}
int main(){
    int arr[3][4];
    // Input
    cout<<"Enter Input:"<<endl;
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    // Print row wise
    cout<<"Print row wise:"<<endl;
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // print col wise
   /* cout<<"Print column wise:"<<endl;
    for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }*/
    int target;
    cout<<"Enter Element that you want to search in Array:"<<endl;
    cin>>target;
    if(isPresent(arr,target,3,4)) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;
}