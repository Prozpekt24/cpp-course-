//------------<POINTER>---------//
#include<iostream>
using namespace std;

int main () {
    int a = 2;  
    int *b=&a;
  int**c=&b;
  //  cout<<"the addres of a is"<<&a<<endl;// or <<&a;
 // int **c=&b;
   cout <<"address of b is "<<*c;// or c if we put **c the it show the value stored in a   
return 0;
}