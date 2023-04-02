#include<bits/stdc++.h>
using namespace std;
// 1.
/*int main(){
    int first =8;
    int second =18;
    int *ptr = &second;
    *ptr = 9;
    cout<< first << " " << second <<endl;

    return 0;

}*/
// 2.
/*int main(){
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<first<<endl;
    cout<<p<<" "<<q<<endl;
}*/
// 3.
/*int main(){
    int first = 8;
    int *p = &first;
    cout<<(*p)++<<" ";
    cout<<first<<endl; 
}*/
// 4.
/*int main(){ 
int *p =0;
int first = 110;
//  *p = first;// Wrong Segmentation Fault
  p=&first;   
cout<< *p <<endl;
return 0;
}*/
// 5
/*int main(){
    int first = 8;
    int second = 11;
    int* third = &second;
    first = *third;
    *third = * third + 2;
    cout<< first << " " << second <<endl;
    return 0; 
}*/
// 6
/* 
int main(){
    float f=12.5;
    float p=21.5;
    float* ptr= &f;
    (*ptr)++;
    *ptr = p;
    cout<< *ptr << " " << f << " " << p <<endl;
}
*/
// 7.
/*int main(){
    int arr[5];
    int *ptr;
    cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;
    return 0;
}*/
//  8.
/*int main(){
    int arr[]={11,21,13,14};
    cout<< *(arr) <<" "<<*(arr+1)<<endl;
    int a[6]={11,12,31};
    cout<<a<<" "<<&a<<endl;
    cout<<(a+1)<<endl;
    int *p=a;
    cout<<p[2]<<endl;
    int b[]={11,12,13,14,15};
    cout<<*(b)<<" "<<*(b+3)<<endl;;
    int *ptr=b;
    ptr=ptr+1;
    cout<<*ptr<<endl;
    return 0;
}*/
// 9
/*int main(){
    char ch ='a';
    char* ptr=&ch;
    ch++;
    cout<< *ptr <<endl;
    char arr[]="abcde";
    char *p = &arr[0];
    cout<< p <<endl;
    p++;
    cout<<"After:-"<<p<<endl;
    char str[]="babbar";
    char *pt=str;
    cout<<str[0]<<" "<<pt[0]<<endl;
}*/
// 10.
/*void update(int *p){
    *p=(*p) *2;
}
int main(){
    int i=10;
    update(&i);
    cout<< i <<endl;
}
*/
//  11.
/*int main(){
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout<<first<<" "<<second <<endl;
}*/
/*int main(){
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout<<first<<" "<<second<<endl; 
}*/
void increment(int **p){
    ++(**p);
}
int main(){
    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout<< num << endl;
}
 