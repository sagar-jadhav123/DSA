// Palindrome string 
/*#include<bits/stdc++.h>
using namespace std;
char toLower(char ch){
        if(ch>='a' && ch<='z'){
            return ch;
        }else{
            return (ch-'A'+'a');
        }
}
bool checkPalindrome(string s)
{
    int j=0;
    string str;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'|| s[i]>='0' && s[i]<='9'){
            str.push_back(s[i]);
            j++;
        }
    }
    int start=0;
    int end=str.size()-1;
    while(start<=end){
        if(toLower(str[start])!=toLower(str[end])){
            return false;
        }else{
            start++;
            end--;
        }
    }
   return true;
        
}
int main(){
    string s;
    cin>>s;
    cout<<"Palindrome or Not:"<<s<<endl;
    return 0;
}*/
// Practice Leetcode
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string str="";
   for (int i = 0; i<s.length(); i++)
   {
      if(s[i]!=' '){
       str.push_back(s[i]);
      }else{
        reverse(str.begin(),str.end());
        // str.push_back(' ');
        cout<<str<<" ";
        str.erase();
        continue;
        // cout<<"String after empty:"<<str<<endl;
      }
   }
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}*/
// Replaces Space(Code Studio)
/*#include<bits/stdc++.h>
using namespace std;
string replaceSpaces(string &str){
    string temp="";
	for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            temp.push_back(str[i]);
        }else{
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
    }
    return temp;
}
int main(){
     string s;
     getline(cin,s);
     cout<<"New String is :"<<replaceSpaces(s)<<endl;

}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
     string s = "daabcbaabcbc";
     string part = "abc";
     int x=-1,y=-1,z=0;
     for (int  i = 0; i < s.size(); i++)
     {
         if(s[i]==part[z]){
            x=i;
         for (int j = i+1; j < s.size(); j++)
         {
            z++;
            if(s[j]==part[z] && z<part.size()){
                y=j;
            }else{
                break;
            }
         }
         }
         if((y-x+1)==part.size()){
            for(int i=x;i<=y;i++){
                s[i]='1'; 
            }
         }
         z=0;
     }
     cout<<"X and Y"<<x<<y<<endl;
     cout<<"String is :"<<s<<endl;

}