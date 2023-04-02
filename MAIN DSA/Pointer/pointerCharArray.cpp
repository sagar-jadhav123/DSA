#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";
    // print address
    cout<<arr<<endl;
    // print entire string 
    cout<<ch<<endl;//Implementation of cout is different in case of char array
    char *c=&ch[0];
    // Print entire string 
    cout<<c<<endl;

    char temp='z';
    char *p=&temp;
    cout<<p<<endl;
}