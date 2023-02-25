// Peak Index in a Mountain Array
/*#include<iostream>
using namespace std;
int peakElement(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid]<arr[mid-1]){
            e=mid;
        }else if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[3]={0,1,0};
    int index=peakElement(arr,3);
    cout<<"Peak ELement Index is: "<<index<<endl;
}*/
// Square root through binary search
/*#include<iostream>
using namespace std;
int squareRoot(int n){
     int s=0,e=n-1;
     int ans=-1;
     int mid=s+(e-s)/2;
     while(s<=e){
        if(mid*mid==n){
          return mid;
        }else if(mid*mid>n){
            e=mid-1;
        }else{
         ans=mid;
         s=mid+1;
        }
        mid=s+(e-s)/2;
     }
     return ans;
}
int main(){
    int n;
    cin>>n;
    int result=squareRoot(n);
    cout<<result<<endl;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int squareRoot(int n){
     int s=0,e=n;
     int ans=-1;
     int mid=s+(e-s)/2;
     while(s<=e){
        if(mid*mid==n){
          return mid;
        }else if(mid*mid>n){
            e=mid-1;
        }else{
         ans=mid;
         s=mid+1;
        }
        mid=s+(e-s)/2;
     }
     return ans;
}
double morePrecision(int n,int precision,int result)
{
  double factor=1;
  double ans=result;
  for(int i=0;i<precision;i++){
    factor=factor/10;
    for (double j = ans; j*j < n; j=j+factor)
    {
        ans=j;
    }
    
  }
  return ans;
}
int main(){
    int n;
    cin>>n;
    int result=squareRoot(n);
    cout<<"Answer is: "<<morePrecision(n,3,result)<<endl;
    return 0;
}*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int A,B,X;
	    cin>>A>>B>>X;
	    int temp=abs(A-B);
	    if(A==B){
	        cout<<"Yes"<<endl;
	    }else if(temp==X){
	       cout<<"YES"<<endl;
	    }else
	    cout<<"No"<<endl;
	}
	return 0;
}