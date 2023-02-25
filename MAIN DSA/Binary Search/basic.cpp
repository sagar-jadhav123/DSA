// Basic binary search in odd and even array
/*#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
      int s=0,e=n-1;
      int mid=s+(e-s)/2;
      while(s<=e){
         if(arr[mid]==key){
            return mid;
         }else if(arr[mid]<key){
            s=mid+1;
         }else{
            e=mid-1;
         }
         mid=s+(e-s)/2;
      }
      if(arr[mid]!=key){
        return -1;
      }
}
int main(){
    int even[6]={2,5,7,9,12,16};
    int odd[5]={3,7,8,10,14};
    int key=7;
    int index=binarySearch(even,6,16);
    int index2=binarySearch(odd,5,2);
    cout<<"Index of key is :"<<index<<endl;
    cout<<"Index of key is :"<<index2<<endl;
    return 0;
}*/
// Program to find pivot Element
/*#include<iostream>
using namespace std;
int pivotElement(int arr[],int n){
   int s=0,e=n-1;
   int ans=-1;
   int mid=s+(e-s)/2;
   while(s<e){
      if(arr[mid]>=arr[0]){
         s=mid+1;
      }else{
         e=mid;
      }
      mid=s+(e-s)/2;
   }
   return s;
}
int main(){
   int arr[5]={7,9,1,2,3};
   int index=pivotElement(arr,5);
   cout<<"Index of pivot element:"<<index<<endl;
}*/
// Selection Sort
/*
#include<iostream>
using namespace std;
void sortArray(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j< n; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
          swap(arr[minIndex],arr[i]);   
        
    }
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
    
}
int main(){
   int arr[5]={6,2,8,4,8};
   sortArray(arr,5);
   return 0;
}
*/
// Bubble Sort
/*#include<iostream>
using namespace std;
void sortBubble(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j<n-i ; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
}
int main(){
    int arr[5]={6,2,8,4,10};
    sortBubble(arr,5);
    return 0;
}*/
// Selection Sort
/*#include<iostream>
using namespace std;
void sortSelection(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j = i-1;
        
        for (; j >=0 ; j--)
        {
          if(temp<arr[j]){
            arr[j+1]=arr[j];
          }else{
            break;
          }  
        }
        
        arr[j+1]=temp;
        
        
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[7]={10,1,7,4,8,2,11};
    sortSelection(arr,7);
    return 0;
}*/
