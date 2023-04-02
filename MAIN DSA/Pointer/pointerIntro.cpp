/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int *ptr=&a;
    cout<<"Value of a:"<<a<<endl;
    cout<<"address of a:"<<&a<<endl;
    cout<<"Again address of a:"<<ptr<<endl;
    cout<<"Value of a through pointer:"<<*ptr<<endl;
    // declaration of pointer
    int i=3;
    int *xy;
     xy=&i;

     *xy++;
     *xy=3;
    cout<<*xy<<" "<<xy<<" "<<i<<" "<<&i<<endl;

}*/
/*#include <iostream>
 using namespace std; 
 int main() 
 { int firstvalue = 5, secondvalue = 15;
   char thirdvalue = 'a';
   int *p1, * p2;
   char * p3;
   p1 = &firstvalue; 
   p2= &secondvalue;
   p3=&thirdvalue;
   *p1=10;
    *p2=*p1;
    p1=p2;
    *p1=20;
    *p3='b';
    cout << "firstvalue is " << firstvalue << endl;
    cout<<"firstValue Is:"<<*p1<<endl;
    cout<<"SecondValue Is:"<<*p2<<endl;
    cout << "secondvalue is " << secondvalue << endl; 
    cout << "Thirdvalue is " << *p3 << endl; 
    cout << "thirdvalue is " << thirdvalue << endl; 
    return 0; 
    }*/
    //2.Quiestion
    /*#include<bits/stdc++.h>
    using namespace std;
    int main(){
      int a[]={4,5,3,4};
      int *p=(a+1);
      *a=*a+2;
      cout<<a<<endl;
      char b[]="xyz";
      cout<<b[0]<<endl;
      char *c=&b[0];
      cout<<c<<endl;
    }*/
    // 3.Question
   /* #include<bits/stdc++.h>
    using namespace std;
    int main(){
       char arr[20]=" ";
       int i;
       for ( i = 0; i < 10; i++)
       {
         *(arr+i)=65+i;
         cout<<arr<<endl;
       }
       *(arr+i)='\0';
        cout<<arr;
        return 0;
       
    }*/
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
      char ch[]="sagar";
      char *p=&ch[0];
      cout<<ch<<endl;
      cout<<&ch<<endl;
      cout<<*p<<endl;
      cout<<p<<endl;

    }
