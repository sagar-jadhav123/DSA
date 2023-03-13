#include<bits/stdc++.h>
using namespace std;
void rowWiseSum(int arr[][3],int row,int col){
    int sum=0;
    cout<<"Sum is :"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          sum+=arr[i][j];
        }
        cout<<sum<<" ";
        sum=0;
    }

}
int main(){
    
    int arr[4][3];
    cout<<"Enter Input: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
              cin>>arr[i][j];
        }
    }
    cout<<"Print: "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
              cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rowWiseSum(arr,4,3);
    return 0;
    
}