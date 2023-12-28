//CALL BY VALUE 
#include<iostream>
using namespace std;
//int sum(int a,int b){
//int c=a+b;
//return c;
//}
void swap(int *a,int* b)
{
    int temp=*a;  //temp a b    
    *a=*b;       // 4  4 5
    temp =*b; // 4  5  5
}                // 4  5  4
int main () {
    int x=4;
    int y=5;
    cout<<"the value of x is "<<x<<endl;
    cout<<" the value of y is "<<y<<endl;
  swap(x,y);
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}
