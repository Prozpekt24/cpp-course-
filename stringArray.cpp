//PRINTING , REVERSE AND LENGTH OF STRING ARRAY
/*#include<iostream>
using namespace std;
void  reverse(char name[],int n){
    int start =0;
    int end = n-1;
    while (start<end){
        swap(name[start++],name[end--]);
       

    }
}
int printing(char ar[]){
    int count = 0;
    for (int i=0;ar[i] !=0;i++){
        count ++;
    }
    return count;
}


int main () {
    char name[10];
    cout<<"Enter : ";
    cin>>name;
    cout<<"Name is "<<name<<endl;
    int len = printing(name);
  cout<<"Length :"<<len<<endl;
  cout<<"Reverse of Name : ";
  reverse(name,len);
  cout<<name<<endl;
 
  
 
    return 0;
}*/
/*#include<iostream>
using namespace std;
char getMaxocc(string s){
    int arr[26] = {0};
    for (int i =0;i<s.size();i++){
        char ch = s[i];

        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1,ans =0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi=arr[i];
        }
    }
    return 'a'+ans;
}
int main () {
    string str;
    cin>>str;
cout<<getMaxocc(str)<<endl;
    return 0;
}*/
#include <iostream>
using namespace std;

int main () {
  char name[256];

  cout << "What's your name? ";
  cin>>name;
  cout << "Hello " << name << ".\n";

  return 0;
}