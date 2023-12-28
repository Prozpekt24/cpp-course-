/*#include<iostream>
#include <math.h>
using namespace std;

int main () { //Decimal to Binary
  int n;
    cin>>n;


    float ans =0;

    int i = 0;
    while (n != 0){    // formula for reverse integer ans = digit * pow(10,i)+ans
      int bit =  n & 1;

      ans =(bit * pow(10,i))+ ans;

      n = n >> 1;
      i++;

    }
    cout << " answer "<<ans<<endl;
  return 0;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;

int main () {
   /* int n;
    cin>>n;
    int ans  =0;
    int i = 0;

    while (n!=0){
     int  bit = n&1;
      ans = (bit * pow(10,i))+ans;
       n =  n>>1;
       i++;




    }

 */
/*#include<iostream> // Binary to Decimal
#include<math.h>
using namespace std;

int main () {


int n ;
cin>>n;
int i = 0;
int ans = 0;
while(n!=0){
  int digit = n % 10;
  if (digit == 1){
    ans = ans + pow(2,i);

  }
 n = n/10;
 i++;
}
  cout<<ans<<endl;
  return 0;
}*/

/*#include <iostream>  // reverse integer 
#include<math.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int ans = 0;
  // int i = 0;

  while (n != 0)
  {
    int digit = n % 10;

    ans = ans * 10 + digit;
    // i++;
    n = n / 10;
  }

  cout << ans;
  return 0;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;

int main () {
 int n ;
 cin>>n;
 int m = n;
 int mask = 0;
 while (n!=0){
  mask = (mask<<1) | 1;
 m= m>>1;
}
 int ans = (~n) & mask;
 //return ans ;
 cout<<ans;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;

int main () {

    int n;
   cin>>n;      // for binary to decimal
   int ans =0;
   int i =0;
   while(n!=0){
    int digit  = n%10;
    if (digit == 1)

  {
      ans = ans + pow(2,i);

    }
      n = n/10;
      i++;
   }
  cout<<ans;
  return 0;
}*/
/*#include<iostream>  // for i/p = 5 , o/p = 2
using namespace std;  // 5 = 101 into 2 = 10    

int main () {
  int n ;
  cin>>n;
  int m = n;
  int mask = 0;
  while (n!=0){
     mask = (mask<<1)|1;
     m = m>>1;
  }
  int ans = ~n & mask;
  cout<<ans;
  return 0;
}*/
/*#include<iostream>
#include<math.h>
using namespace std;

int main () {
int n;
cin>>n;
float =0;
int i=0;
while (n!=0){
  int digit = n%2;
  ans = (digit*pow(10,i))+ans;
  i++;
 

}
cout<<ans;
  return 0;
}*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n ;
  cin>>n;
  int ans = 0;
  int i =1;
  while (n!=0){
    int digit = n%10;
    ans = digit*pow(10,i)+ans;
    i++;
    n/10;
    
  }
  cout<<ans;
}