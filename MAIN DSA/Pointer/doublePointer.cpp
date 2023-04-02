#include<bits/stdc++.h>
using namespace std;
void update(int **p){
    // Kuch change hoga
    // p=p+1; No Change
    //Kuch change hoga
    // *p=*p+1; Yes Change Happen
    // Kuch Change Hoga
    **p=**p+1; 
}
int main(){
    int i=5;
    int* p =&i;
    int** p2=&p;
    cout<<"Before:-"<<endl;
    cout<<"1st:"<<p<<endl;
    cout<<"2nd:"<<*p<<endl;
    cout<<"-"<<&p<<endl;
    cout<<"3rd:"<<p2<<endl;
    cout<<"4th:"<<*p2<<endl;
    cout<<"5th:"<<**p2<<endl;
    update(p2);
    cout<<"After:-"<<endl;
    cout<<"1st:"<<p<<endl;
    cout<<"2nd:"<<*p<<endl;
    cout<<"-"<<&p<<endl;
    cout<<"3rd:"<<p2<<endl;
    cout<<"4th:"<<*p2<<endl;
    cout<<"5th:"<<**p2<<endl;

    return 0;
}