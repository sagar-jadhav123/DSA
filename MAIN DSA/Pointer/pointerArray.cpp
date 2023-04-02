#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    cout<<"Adress of 1st location:"<<arr<<endl;
    cout<<"Adress of 1st location:"<<&arr[0]<<endl;
    cout<<"Value of first location:"<<arr[0]<<endl;
    cout<<"1st:"<<*arr<<endl;
    cout<<"2nd:"<<*arr+1<<endl;
    cout<<"3rd:"<<*(arr+1)<<endl;
    cout<<"4th:"<<*(arr+2)<<endl;
    int i=3;
    cout<<i[arr]<<endl;
    // size
    int temp[10]={1,2};
    cout<<"Size:"<<endl;
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(&temp)<<endl;
    cout<<sizeof(*temp)<<endl;

    int a[10]={1,2,3};
    // Error if:
    // a=a+1;
    int *ptr=&a[0];
    cout<<"Before"<<ptr<<endl;
    ptr=ptr+1;
    cout<<"After"<<ptr<<endl;


}