/*#include<iostream>

using namespace std;

int power(int num1, int num2)
{
    int ans =1;
    for(int i=1 ; i<=num2;i++){
        ans = ans *num1;
    }  
    return ans ;

} 
int main () {
   int a ,b;
   cin>>a>>b;
 
   int ans  = power(a,b);
   cout <<ans;
    return 0;
}***/
/*#include<iostream>
using namespace std;
  bool isEven(int a ){
    if (a%2==0)
    {
        return 1;
    }
    return 0;
  } 
int main () {
    int num;
    cin>>num;
   if (isEven(num)){
    cout<<"number is even"<<endl;


   }
   else {
    cout<<"the number is odd"<<endl;
   }
    return 0;
}/*
 #include<iostream>
 using namespace std;
 bool isprime(int n){
    for(int i=2;i<n;i++){
       if(n%i==0){
        return 0;

       }
      else {
        return 1;
    
    }
    }
 }
 int main () {
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"the number is prime  "<<endl;
    }
       
       else {
     cout<<"the number is not prime "<<endl;
   
   }
    return 0;
 }         */
 /*#include<iostream>
 using namespace std;
 int ap (int n ){
  int ans = (3*n+7);
  return ans;
 }
 int main () {
  int n;
  cin>>n;
  int ans =ap(n);
  cout<<ans<<endl;
  
  return 0;
 }*/
 /*#include<iostream>
 using namespace std;
 int bit(int a, int b){  //finding setbit
   int sol = a&b;
    
  
return sol;
 }
 int main () {
     int a,b;    
     cin>>a>>b;
     int ans=bit(a,b);
     cout<<ans;
  return 0;
 }*/
/* #include<iostream>
 using namespace std;
 int factorial(int n) { // for finding factorial nCr =  n!/(n-r)!-r!
  int fact = 1;
  for (int i = 1;i<=n;i++){
    fact = fact *i;
  }
  return fact;
 } 
 int ncr (int n,int r){
   int num=factorial(n);
   int demo = factorial (r)*factorial (n-r);
   return num/demo;
 }
 int main () {
  int a , b;
  cin>>a>>b;
  int answer =ncr(a,b);
  cout<<answer;

  return 0;
 }*/

 /*#include<iostream>
 using namespace std;
    int fibonacci(int a){
      int a =0;
      int b = 1;
      for (int i =0;i<=a;i++){
         int next = a+b;
         a = b;
         b = next;

      }
    }
 int main () {
  
  return 0;
 }*/
/*#include<iostream>
using namespace std;
int power (int a , int b){
  int ans =1;
  for(int i =1;i<=b;i++){
   ans = ans *a;
  
  }
    return ans ;
}
int main () {
 int num1,num2;
 cin>>num1>>num2;
int ans=  power(num1,num2);
 cout<<ans;
  return 0;
}*/

/*#include<iostream>
using namespace std;
bool isprime (int n){
  for(int i =2; i<n;i++){
    if(n%i==0){
      return 0;
    }
    
  }
  return 1;
}
int main () {
  int n;
  cin>>n;
  if(isprime(n)){
    cout<<"prime number  "<<endl;
  }
  else {
    cout<<"not prime number "<<endl;
  }

  return 0;
}*/
#include<iostream>
using namespace std;
int bit(int n,int r){
  int ans = n|r;
return ans ;
}

int main () {
  int a ,b;
cin>>a>>b;
int ans = bit(a,b);
cout<<ans;
  return 0;
}