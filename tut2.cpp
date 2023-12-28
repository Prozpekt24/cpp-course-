# include <iostream>
 #include <iomanip>
 //-------------->Use for setw
using namespace std ;
int main() {
int a = 10,b=24,h=55;
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;
cout <<"the value of b is "<<h<<endl;

cout<<"the value of a is "<<setw(5)<<a<<endl;
cout<<"the value of b is "<<setw(10)<<b<<endl;
cout <<"the value of b is "<<setw(20)<<h<<endl;

//-----------<<<OPERATOR PERCIDENCE>>>-------------------
//int a=2,b=5;
//int c= (((a-b)+b)*b);
//cout<<"the value of c is "<<c<<endl;

    return 0;
}