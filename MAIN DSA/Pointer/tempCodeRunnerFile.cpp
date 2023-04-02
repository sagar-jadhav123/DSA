/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[100];
        int count=0;
        int mini = 101;
        for(int i=0;i<n;i++){
           cin>>arr[i];
           mini = min(mini,arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]>mini) count++;
        }
        cout<<count<<endl;
    }
	return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
bool checkBit(int arr_A[],int arr_B[],int n){
    for(int i=0;i<n;i++){
        if(arr_A[i]!=arr_B[i] && i>=1){
           arr_A[i] = arr_A[i-1] | arr_A[i] | arr_A[i+1];
           if(arr_A[i]==arr_B[i]){
            continue;
           }else return 0;
        }
        
    }
    return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr_A[100000],arr_B[100000];
	    for(int i=0;i<n;i++){
	        cin>>arr_A[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>arr_B[i];
	    }
	    cout<<"Check: "<<checkBit(arr_A,arr_B,n)<<endl;
	}
	return 0;
}
