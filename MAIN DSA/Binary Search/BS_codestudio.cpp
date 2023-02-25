//First and last position of an Element in Sorted Array
/*#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
           ans = mid;
           e=mid-1;
        }else if(arr[mid]<key){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    if(arr[mid]!=key){
        return -1;
    }
}
int lastOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
           ans = mid;
           s=mid+1;
        }else if(arr[mid]<key){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    if(arr[mid]!=key){
        return -1;
    }
}
int main(){
    int arr[8]={0,0,1,1,2,2,2,2};   
    int First=firstOcc(arr,8,1);
    int Last=lastOcc(arr,8,1);
    cout<<"First index is : "<<First<<endl;
    cout<<"Last index is : "<<Last<<endl;
    return 0;
}*/
// Search and Rotated Sorted Array
/*#include<iostream>
using namespace std;
int findPivot(int arr[],int n){
    int s=0,e=n-1;
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
int findKey(int arr[],int s,int n,int key){
         int start=s,end=n-1;
         int mid=start+(end-start)/2;
         while(start<=end){
            if(arr[mid]==key){
                return mid;
            }else if(arr[mid]>key){
                end=mid-1;
            }else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
         }
         return -1;
}

int main(){
    int arr[6]={7,8,9,1,2,3};
    int key=2;
    int pivot=findPivot(arr,6);
    if(key>=arr[pivot] && key<=arr[5]){
      int Key=findKey(arr,pivot,6,key);
      cout<<"Index of key is:"<<Key<<endl;  
    }else{
        int Key1=findKey(arr,0,pivot,key);
        cout<<"Index of key is:"<<Key1<<endl;

    }


}*/
// Book Allocation Problem
#include<iostream>
using namespace std;
bool isPossibleSol(int arr[],int n,int m,int mid){
     int studentCount=1;
     int pageSum=0;
     for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];

        }
     }
     return true;
}
int toFindMid(int arr[],int n,int m){
    int s=0,sum=0;
    for(int i=0;i<n;i++){
       sum=sum+arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossibleSol(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
    int arr[4]={10,20,30,40};
    int result=toFindMid(arr,4,2);
    cout<<"Minimum value is :"<<result<<endl;
    return 0;
}