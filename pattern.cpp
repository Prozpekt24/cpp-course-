#include<iostream>
using namespace std;

int main () {
   // int n;
   // cin>>n;
   // int i = 1;
   // while ( i <=n){
   //     int j = 1;
   //     while(j<=n){
   //         cout<<" * ";
   //         cout<<endl;
   //         j++;
   //     }
   //     i++;
   // }
 // int n;
 // cin>>n;
 // int i = 1;
 // while (i<=n)
 // {
 //   int j = 1;
 //   while ( j<=n){
 //       cout <<j;
 //       j++;
 //   }
 //   cout<<endl;
 //   i++;
 // }
 /*int n;
 cin>>n;
 int i=1;
 while ( i<=n){
   int j=1;
   while ( j<=n){
    cout<<n-j+1;
    j++;
   }
   cout<<endl;
   i++;
 }*/
 /*int n;
 int count=1;
 cin>>n;
 int i = 1;
 while ( i<=n){
    int j=1;
    while ( j<=n){
     cout<<count;
     count++;
     j++;
    }
cout<<endl;
    i++;
 }
 
 */
/*int n;
 cin>>n;
 int i=1;
 while ( i<=n){
   int j=1;
   while ( j<=i){
    cout<<"*";
    j++;
   }
   cout<<endl;
   i++;
 }*/
// int n;
// cin>>n;
// int row = 1;
// while ( row<=n)
// {
//    int col=1;
//    while ( col<=row){
//        cout<<" * ";
//        col++;
//    }
//    cout<<endl;
//    row++;
// }

  /*  int n;
    cin>>n;
    int row = 1;
    while (row<= n ){
      int col = 1;
      while ( col<=n){
        cout<<row;
        col++;
      }
      cout<<endl;
     row++;
    }

*/
/*int n;
cin>>n;
int count =1;
int row=1;
while( row<= n){
  int col= 1;
  while ( col<=row){
    cout<<count;
    count++;
    col++;

  }
  cout<<endl;
  row++;
}*/
/*int n;
cin>>n;
int row =1;
while ( row<=n){
  int col=1;
  
  while ( col <= row)
  
   {
     cout<<row+col-1;

     col++;

  }
  cout<<endl;
  row++;
}*/
/*int n;
cin>>n;
int row =1;
while ( row<=n){
  int col = 1;
  while (col<=row ){
    cout<<row-col+1;
    col++;
  }
  cout<<endl;
  row++;
}*/
/*int n;
cin>>n;
int row =1;
while ( row<=n){
  int col =1;
  char ch = 'A';

  while ( col<= n){
    cout<<ch;
   ch++;
    col++;


  }
  cout<<endl;
  row++;
}*/
/*
int n;
cin>>n;
int row = 1;
while ( row<=n){
  int col=1;
  while ( col<=n){
    cout<<n-col+1;
    col++;
  }
  cout<<endl;
  row++;
  */

/*int  n;
cin>>n;
int row = 1;
int count = 1;
while (row<=n){
  int col = 1;
  
   
  while (col<=n ){   // For printing 123
   cout<<count;      //              456
   count++;          //              789
    
    col++;
  }
  
  cout<<endl;
  
 row++;
}*/
/*
int n;
cin>>n;
int row = 1;
int count =n* n;// for printing revese number 9 8 7
                //                            6 5 4    
while ( row<=n){//                            3 2 1                   
  
  int col = 1;
  while ( col <= n){
    cout<<count<<" ";
   count=count -1;
    col++;
  }
  cout<<endl;
  row++; 
  }

  */

/*
int n;
cin>>n;
int row = 1;
while ( row<=n){
  int col = 1;
  while ( col <= row ){ // printing 
  cout<< " * ";         // *
  col ++;               // * *
}                       // * * *
cout<<endl;             // * * *
row++;
}
*/
/*
int n;
cin>>n;
int row = 1;
while ( row <=n ){
  int col =1;
  while ( col <= row){
   cout<<row;// printing 
   col++;    //   1
  }          //   2 2 
  cout<<endl;//   3 3 3 
  row++;
}*/
/*
int n;
cin>>n;
int row = 1;
int count = 1;
while ( row <= n){
  int col =1;
  while ( col <= row){ // printing 
    cout<<count ;      // 1
    count ++;          // 2 3
    col ++;            // 4 5 6 
  }

 cout<<endl;
 row++;

}*/
/*
int n;
cin>>n;
int row = 1;
//int count = 1;
while ( row <=n){
 // count = row;
  int col = 1;
  while (col <= row ){
    // cout<<count ;
   // count ++;
   cout <<row + col - 1; // printing 
    col ++;              // 1
  }                      // 2 3
  cout<<endl;            // 3 4 5
  row++;
}*/
/*
int n;
cin>>n;
int row =1 ;
while ( row <= n){
  int col = 1;
  while ( col<= row ){    //   1
    cout<<row - col +1;   //   2  1
    col++;                //   3  2  1
                          //   4  3  2 1
  }
  cout<<endl;
  row++;
}*//*
int n;
cin>>n;
int row = 1;

while ( row<=n){
  char ch = 'A'+row-1; // A A A
  int col =1;          // B B B
  while ( col <= n){   // C C C
    
    cout <<ch;
   //ch ++;
    col ++;
  }
  cout << endl;
  row ++;
}*//*
int n;
cin>>n;
int row = 1;

while ( row<=n){
                       // A B C
  int col =1;          // A B C
  while ( col <= n){   // A B C
     char ch = 'A'+col-1;
    cout <<ch;
   //ch ++;
    col ++; 
  }
  cout << endl;
  row ++;
}
*//*
 int n;
 cin>>n;
 int row = 1;
 char ch = 'A';
 while ( row <= n){ // A B C
  int col=1;        // D E F
  while ( col <= n){// G H I
    cout<<ch;
    ch++;
    col++;

  }
  cout<<endl;
  row++;
 }*/ /*
 int n;
 cin >>n;
 int row = 1;
 while (row <=n){
 
  int col = 1;
  while (col <= n){
    char ch = 'A'+row + col - 2; //  A B C
    cout<<ch;                   //   B C D
    ch++;                      //    C D E 
    col++;                    
  }
  cout<<endl;
  row++;
 }*//*
 int n;
 cin >>n;
 int row = 1;
 while (row <=n){
 
  int col = 1;
  while (col <= n){
                                 //  A B C
    cout<<char(65+row +col-2);  //   B C D
                               //    C D E 
    col++;                    
  }
  cout<<endl;
  row++;
 }*//*
 int n;
 cin >>n;
 int row = 1;
 
 while (row <=n){
 
  int col = 1;
  while (col <=row){
    char ch = 'A'+row-1;
    cout<<ch;                //  A 
    //ch++;                  //  B B
      col++;                //   C C C                       
 }
  cout<<endl;
  row++;
 }*//*
 int n;                       // A
 cin >>n;                    //  B C
 int row = 1;               //   D E F
 char ch = 'A';            //    G H I J
 while ( row <=n){
  int col = 1;
  while (col <= row){
    cout<<ch<<" ";
    ch++;
    col++;

  }
  cout<<endl;
  row++;
 }*//*
 int n;                          // A
 cin>>n;                        //  B  C 
 int row = 1;                  //   C  D  E
  while ( row <=n){           //    D  E  F  G
     int col = 1;
     while ( col <= row ){
      char ch = 'A'+row+col - 2;
      cout<<ch ;
      ch++;
      col++;
     }
     cout<<endl;
     row ++;
 }
*/ 
/*
int n;
cin>>n;

int row = 1;
while (row <= n){

  int col = 1;
  while  ( col <= row ){         // D
  char ch = 'A'+row - col+n-1;  //  C D
    cout<<ch;                  //   B C D
    ch++;                     //    A B C D
    col++;

  }
  cout <<endl;
  row ++;

}
*/
/*
int n;
cin>>n;
int row = 1;
while (row <=n){  
  int col = 1;                // ****
  while (col<=n-row+1){      //  ***
    cout<<"*";              //   **
    col++;                 //    *

  }
  cout<<endl;
  row++;
  }
  */
 /*
 int n;
 cin>>n;
 int row=1;
 while (row <=n){
  int col =1 , space = 1;
  while (space < row ){    // * * * * 
    cout <<" ";           //    * * *
    space ++;            //       * *
                        //          *
  } 
  while ( col <= n-row+1){
    cout << "*";
    col++;

  }
  cout<<endl;
  row++;
 }

*/
/*
int n;
cin>>n;
int row = 1;

while (row <= n){
  int col =1, space = 1;
  while  ( space < row ){
    cout <<" ";
    space ++;                    //  1 1 1 1
                                //     3 3 3
  }                            //        2 2
  while ( col <= n-row  + 1){ //           1
    cout<<row;
    
    col ++;
  }
  cout<<endl;
  row++;
}
*/ /*
int n;
cin>>n;
int row= 1;
int var = 1;
while ( row <= n){
  int col = 1,space = 1;
  while (space <=n-row){
    cout<< " ";
    space ++;

  }
  while (col <= row ){
    cout<<var;
    var++;
    col++;

  }
  cout<<endl;
  row++;
}
*/ /*
int n;
cin>>n;
int row = 1;
while (row <= n){
  int space = n - row ;
  while (space){
    cout<< " ";
    space = space -1;
  }
  int col = 1;
  while (col <= row ){
    cout<<col;
    col++;
  }
  int start = 2;
  while(start<=row){
    cout<<col -start;
    start ++;
  }
  cout<<endl;
  row++;
}

*/

