/*#include<iostream>
using namespace std;
// array with fuction
void printArray(int arr[],int size ){
    cout<<"printing the array : ";

    for(int i = 0;i <size;i++){
        cout<<arr[i]<<" ";



    }
}*/
/*int main () {
      /*int first [10] ={1,2,3};
    int n = 10;
    for (int i = 0;i<n;i++){
        cout<<first[i]<<" ";
    }*/

 /*  int first [10] = {2,7,8,9,14,22,24};
   int n = 10;
   printArray(first,10);

     int second [5] = {1,2,3,4,5};
 n = 1;
   printArray(second,5);

    return 0;
}*/

/*#include<iostream>// Print the maximum and minimum value in given array
#include<limits.h>
using namespace std;
int getMax (int num[],int n){
    int max = INT_MIN;
    for(int i =0; i<n;i++){
        if(num[i]>max){
        max = num[i];
        }
    }
    return max;
}
int getMin (int num[],int n){
    int min= INT_MAX;
    for(int i = 0;i<n;i++){
        if(num[i]<min){
          min = num[i];
        }
    }
    return min;
}
int main () {
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"the maximum value is :"<<getMax(arr,size)<<endl;
     cout<<"the minimum value is :"<<getMin(arr,size)<<endl;


    return 0;

}*/
/*#include<iostream>
using namespace std; // Upadating element in array
void update(int num[],int n){
    for(int i =0;i<n;i++){
        cout<<num[i]<<" ";
      //   num[4]=22;
    }
}
int main (){
int arr [5]={ 1,5,6,7,0};

update(arr,5);



}*/
/*#include<iostream>
using namespace std;
bool search (int arr[],int size  , int key){
    for(int i =0;i<size ; i++){
        if (arr[i]==key){
       return 1;
        }
}
    return 0;
}
int main (){
    int arr[5]={2,5,6,7,24};
    int key;
    cout<<"enter the key  for search : "<<endl;
    cin>>key;
  bool found = search(arr,10,key);
  if (found ){
    cout<<"key is present "<<endl;
  }
   else {
    cout<<"not found "<<endl;


   }

}*/
/*#include<iostream>
using namespace std ;
void reverse (int arr[],int size){
   int start =0;
   int end = size - 1;
   while (start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
}
void printArr(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
   reverse(arr,5);
   printArr(arr,5);
}*/
/*#include<iostream>
using namespace std;
void printArr(int arr[],int size){  // swaping alternate elements
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swaping(int arr[],int size){

   for (int i =0;i<size ; i+=2){

       if (i+1<size){
        swap(arr[i],arr[i+1]);
       }
   }
}

int main (){
    int arr[8] = {24,43,4,5,6,3,8,55};

    swaping(arr,8);
    printArr(arr,8);

}*/
/*#include<iostream>
using namespace std; //UINQE ELEMENTS
int uniqe(int arr[],int size ){
    int ans =0;
    for (int i=0;i<size;i++)

    {
        ans =ans^arr[i];
    }
    return ans ;
}


int main () {
    cout<<" given elements : ";
    int arr[5]={2,2,4,5,4,};
    for(int i =0; i<5 ;i++){
   cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans = uniqe(arr,5);
    cout<<"uniqe element :"<<ans;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int duplicate(int arr[],int size){  //DUPLICATE ELEMENT ARRAYS
    int ans=0;
    for(int i =0; i<size; i++){
        ans = ans ^arr[i];
    }
    for(int i=0; i<size; i++){
     ans ^i;
    }
    return ans;
}
int main () {
    int arr[6]={3,5,5,3,4,};
  int sol=   duplicate(arr,6);
  cout<<sol;
    return 0;
}
*/
/*#include<iostream>

using namespace std;      // PRINTING THE SUM OF ARRAY USING FUNCTION
int printArray(int arr[],int size){

      int sum=0;


 for(int i =0;i<size;i++){
    sum = sum+arr[i];
  }
  return sum;
}
int main () {

  int size;
    cin>>size;
    int arr[100];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int ans =printArray(arr,size);
  cout<<" the sum of array element : "<<ans<<endl;
    return 0;
}
*/
// LINEAR SEARCH
/*#include<iostream>
using namespace std;
bool isPresent (int arr[],int size,int key){

    for (int i =0;i<size;i++){
        if(arr[i]==key){
          return 1;
        }
    }
    return 0;
}
int main () {
    int arr[5] = { 2, 4 ,5 ,8,1};
    int key ;
    cin>>key;
   //  int ans = isPresent(arr,5,key);
 //  cout<<ans;
 bool search = isPresent(arr,5,key);
 if (search){
    cout<<"key is present "<<endl;
 }
      else {
        cout<<"ubsent "<<endl;
      }
    return 0;
}*/
/*#include<iostream>   // PRINT REVERSE OF ARRAY
using namespace std;
void reverse (int arr[],int size ){
    int start = 0;
    int end = size -1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
    void   printArr (int arr[],int size ){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
}

int main () {
   int arr[5]={24 , 22, 55, 7,10};
     reverse(arr,5);
    printArr(arr,5);

    return 0;
}*/
/*#include <iostream> // SWAPING ARRAY WITH INPUT INDEX
using namespace std;
void swap(int arr[], int size, int first, int second)
{

    swap(arr[first], arr[second]);
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {24, 55, 22, 1, 9, 0};
    int first;
    cout << "enter first index :" << endl;
    cin >> first;
    int second;
    cout << " enter second index : " << endl;
    cin >> second;
    swap(arr, 6, first, second);
    printArr(arr, 6);
    return 0;
}*/
/*#include<iostream>
using namespace std;
int uniqe(int arr[],int size ){
    int ans =1;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
        
    }
    return ans ;

}

int main () {
    int arr[10]= { 2,4,4,2,2,7,2,4,4,4};
     for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
       
      
     }
   int a = uniqe(arr,10);
   cout<<" unique element : "<<endl;
   cout<<a;
    return 0;
}*/
/*#include<iostream>  // sorting 0 1
using namespace std;
  void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  void sorting(int arr[],int n){
    int left = 0 , right = n-1;
    
    while (left<right  ){
        while(arr[left]==0 && left<right){
            left++;
        }
        while (arr[right]==1 && left<right){
            right--;
        }
       if (arr[left]==1 && arr[right]==0  && left<right){ 
        swap(arr[left],arr[right]);
        left++;
        right--;
        }
 


    }
  }
int main () {
    int arr[8]={1,1,0,0,1,0,1,0};
   
    sorting(arr,8);
     printArray(arr,8);
    return 0;
}*/
/*#include<iostream>
using namespace std;
  void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
   }
 void sorting (int arr[],int n){
    int left =0;
    int mid =0;
  int right =n-1;
   while (mid<=right){
    if (arr[mid]==0){
        swap(arr[left],arr[mid]);
        left++;
        mid++;
    }
    else if (arr[mid]==1){
        mid++;
    }
    else {
        swap(arr[mid],arr[right]);
        right--;
        
    }
   }

 }
int main () {
    int arr[5] = { 1,2,2,0,0};
    sorting(arr,5);
    printArray(arr,5);

    return 0;
   
}*/
/*#include<iostream>
using namespace std;
int lastOcc(int arr[],int n,int key){ 
  int start =0;
  int end=n-1;
  int ans = -1;
  int mid = start+(end - start)/2;
  while (start<=end){
    if (key==arr[mid]){
        ans = mid ;
       start= mid +1 ;
    }
    else if (key>arr[mid]){
       start = mid + 1;

    }
else if (key<arr[mid]){
    end = mid - 1;
  }
  mid = start+(end - start)/2;
  }
return ans ;
}





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
else if (key<arr[mid]){
    end = mid - 1;
  }
  mid = start+(end - start)/2;
  }
return ans ;
}

int main () {
    int arr[5]= { 3,3,4,4,8};
 
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
    int arr[5]={7,8,9,10,5};
    cout<<" the pivot  "<<getpivot(arr,5);
    return 0;
}*/
// SELECTING SORTING
/*
#include<iostream>
using namespace std;

int main () {
int arr [5] = {1,99,2,98,100};
  for(  int i =0;i<5;i++){
   int   minIndex = i;
   for( int j = i +1; j<5;j++){
    if (arr[minIndex]>arr[j]){
        minIndex = j;
    }
   }
   swap(arr[minIndex],arr[i]);
   cout<<arr[i]<<" ";
  }
    return 0;
}*/
// BUBBLE SORTING
/*#include<iostream>
using namespace std;
int bubble (int arr[],int n ){

   for(int i =0;i<n;i++){
        int element = i;
        for (int j =i+1;j<n-i;j++){
            if (arr[element]>arr[j]){
        swap(arr[element],arr[j]);
            }
           cout<<arr[j]<<" ";
        }

    }
}
int main () {
    int n = 5;
    int arr[100] = { 10,1,11,9,14};
        cout<<bubble(arr,5);
    return 0;
}*/

/*#include<iostream>
#include <limits.h>
int main () {

       



    return  0;
}*/
/*#include<iostream>
using namespace std;
void sorting (int arr[],int n){
    int start =0 ;
    int end =n-1 ;
    while (start<end){
        if (start ==1 && end==0){
              swap(arr[start],arr[end]);
        }
     
    }
}
void printArr(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main () {
    int arr[5] = { 1,1,0,0,1};
    sorting (arr,5);
    return 0;
}*/
