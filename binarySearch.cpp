/*#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key ){
    int start =0;
    int end = size-1;
    int mid =start + (end-start)/2;
    while (start<=end){
        if (arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
       mid= start + (end-start)/2;

    }
     return -1;
}
int main () {
    int evenArray[6]={2,4,6,8,10,12};
   int index = binarySearch(evenArray,6,8);
    cout<<" index of 8 is :"<<index;
    
    return 0;
}*/
/*#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){ 
  int start =0;
  int end=n-1;
  int ans = -1;
  int mid = start+(end - start)/2;
  while (start<=end){
    if (key==arr[mid]){
        ans = mid ;
        end = mid -1 ;
    }
    else if (key>arr[mid]){
       start = mid + 1;
    }
 end = mid - 1;
  }
return ans ;
}
int lastOcc(int arr[],int n,int key){ 
  int start =0;
  int end=n-1;
  int ans = -1;
  int mid = start+(end - start)/2;
  while (start<=end){
    if (key==arr[mid]){
        ans = mid ;
        end = mid +1 ;
    }
    else if (key>arr[mid]){
       start = mid + 1;
    }
end = mid -1 ;
  }
return ans ;
}
int main () {
    int arr[5]= { 2,3,3,4,8};
 
    cout<<" first occaranse of 3 at index  "<<firstOcc(arr,5,3)<<endl;
     cout<<" last occaranse of 3 at index  "<<lastOcc(arr,5,3)<<endl;
   
}*/
/*#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid = start+(end - start)/2;
    while (start < end){
       if (arr[mid]>=arr[0]){
       start = mid + 1;
       
       }
       else {
          end = mid ;
       }
        mid = start+(end - start)/2;
    }
    return start;
} 

int main () {
    int arr[5]={3 ,4, 5, 1, 2 };
    cout<<" the pivot  "<<getpivot(arr,5);
    return 0;
}
*/
// FINDING SQUARE ROOT USING BINARY SEARCH
/*#include<iostream>  
using namespace std;
int squareNum(int n){
    int start =0;
    int end = n;
   double mid   = start+(end- start)/2;
    int  ans = -1;
    while (start <= end ){
        int square = mid * mid ;
        if (square == n){
            return mid ;
        }
        if (square < n ){
            ans = mid;
           start =  mid + 1;
        }
        else {
          end = mid - 1;
        }
        mid = start+(end- start)/2;
    }
    return ans ;
}
double sq (int n , int precision , int temp){
    double fact = 1;
    double  ans = temp;
    for (int i = 0; i<precision ;i++){
       fact = fact/10;
       for (double  j = ans ; j*j<n;j=j+fact){
             ans = j;
       }
    }
    return ans ;
}
int main () {
    int x ;
    cout<<" Enter the number : "<<endl;
    cin>>x;
  int temp = squareNum(x);
      cout<<"ans : "<<sq(x,3,temp);
    return 0;
}
*/
