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
/*#include <bits/stdc++.h>
using namespace std;
void checkBit(int arr_A[],int arr_B[],int n){
    for(int i=0;i<n;i++){
        if(arr_A[i]!=arr_B[i] && i>=1){
           arr_A[i] = arr_A[i-1] | arr_A[i] | arr_A[i+1];
           cout<<arr_A[i]<<" ";
           if(arr_A[i]==arr_B[i]){
            continue;
           }
        }
        
    }
    // return 1;
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
	    checkBit(arr_A,arr_B,n);
	}
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
/*int main(){
    char st[] = "ABCD";
    for (int i = 0; st[i] !='\0'; i++)
    {
        cout<< i[st] <<" ";
    }
    return 0;
}*/
/*int main(){
    float arr[5] = {12.5,10.0,13.5,90.5,0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    cout<<ptr2<<" "<<*(ptr1 + 3) <<endl;
    cout<< ptr2 - ptr1;
    return 0;
}*/
/*void changeSign(int *p){
    cout<<*p<<endl;
    cout<<p<<endl;
    *p = (*p) * -1;
    cout<<p<<endl;
}
int main(){
    int a=10;
    cout<<&a<<endl;
    changeSign(&a);
    cout<< a <<endl;
}*/
/*void fun(int a[]){
    cout<< a[0] <<" ";
}
int main(){
    int a[] = {1,2,3,4};
    fun(a + 1);
    cout<< a[0];
}*/
/*void square(int *p){
    int a=10;
    p = &a;
    cout<<&a<<endl;
    *p = (*p) * (*p);
}
int main(){
    int a = 10;
    square(&a);
    cout<< a <<" "<< &a << endl;
}*/
// Doubt
/*void swap (char *x, char *y){
    char *t = x;
    x = y;
    y = t;
    cout<<t <<" "<< x <<y <<endl;
}
int main(){
    char *x = "ninjasquiz";
    char *y = "codingninjas";
    char *t;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y;
    t = x;
    x=y;
    y=t;
    cout<<" "<<x<<" "<<y;
    return 0;
}
*/
/*void swap(char *p,char *q){
    char *t =p;
    p = q;
    q = t;
    cout<<p <<" "<<q<<endl;
}
int main(){
    char* ch = "ab";
    char* ch2 = "cd";
    cout<<ch << " "<< ch2<<endl; 
    swap(ch,ch2);
    cout<<ch << " "<< ch2<<endl; 
    
}*/
/*void Q(int z){
    z += z;
    cout<< z<<" ";
}
void P(int *y){
    int x = *y + 2;
    Q(x);
    *y = x -1;
    cout<< x <<" ";
}
int main(){
    int x=5;
    P(&x);
    cout<<x;
    return 0;
}*/
// Accha Question
int main(){
    int a = 10;
    int *p = &a;
    int **q = &p;
    int b = 20;
    *q = &b;
    (*p)++;
    cout<< a << " " <<b <<endl;
}