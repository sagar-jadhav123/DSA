#include<bits/stdc++.h>
using namespace std;
int largestRowSum(int arr[][3],int row,int col){
    int sum=0;
    int maxi=-1;
    int ans;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          sum+=arr[i][j];
        }
       if(sum>maxi){
        maxi=sum;
        ans=i;
       }
       sum=0;
    }
    return ans+1;

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
    cout<<"Largest Row is:"<<largestRowSum(arr,4,3)<<endl;;
    return 0;
    
}