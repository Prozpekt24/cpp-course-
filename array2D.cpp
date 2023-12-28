#include<iostream>
#include<limits.h>
using namespace std;
bool isPresent(int arr[][3],int key,int row1,int col2){
  for(int row =0;row<row1;row++){
    for(int col =0;col<col2;col++){
        if(arr[row][col] == key){
            return 1;
        }
    }
  }
  return 0;
}
void printSum(int arr[][4],int row,int col){


   for(int i =0;i<col;i++){
    int sum =0;
        for(int j =0;j<row;j++){
           sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
}
largest(int arr[][3],int row,int col){
     int maxi = INT_MIN;
     int index= -1;
    for(int row=0;row<3;row++){
        int sum =0;
        for(int col=0;col<3;col++){
             sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            index = row;
        }
      
        
    }
      cout<<"sum of row is "<<maxi<<endl;
        return index;
}
int main () {
     //for input from user
     /*int arr[3][3] ;

     for(int col =1;col<3;col++){
        for(int row =1;row<3;row++){
            cin>>arr[col][row];
        }
    }
      for(int col=1;col<3;col++){
        for(int row=1;row<3;row++){
            cout<<arr[col][row]<<" ";
        }
        cout<<endl;
    }*/

    //for pushing the number on position where you want
   /* int arr[3][4] ={{1,33,333,3333},{2,44,22,4444},{3,55,24,5555}};

    for(int col=0;col<3;col++){
        for(int row=0;row<4;row++){
            cout<<arr[col][row]<<" ";
        }
        cout<<endl;
    }*/
    /*int arr[3][3];
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;



    }
    int key ;
    cin>>key;

    if(isPresent(arr,key,3,3)){
        cout<<"present"<<endl;
    }
    else {
        cout<<" not present "<<endl;
    }*/

    //row-wise sum of elements
    /*cout<<"Enter the elements : "<<endl;

    int arr[3][4] ;
    for(int i =0;i<3;i++){
        for(int j =0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Prninting the elements : "<<endl;
    for(int i =0;i<3;i++){
    
        for(int j =0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 
 printSum(arr,3,4);*/

// largest sum row sum
int arr[3][3] ;
for(int row = 0;row<3;row++){
    for(int col = 0;col<3;col++){
        cin>>arr[row][col];
    }
}
for(int row = 0; row<3;row++){
    for(int col = 0;col<3;col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}
int ans = largest(arr,3,3);
cout<<" index at "<<ans<<endl;
    return 0;
}
   