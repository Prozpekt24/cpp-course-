/*#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector <int> v)
{
    int start = 0;
    int end = v.size ()-1;
    while (start<=end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}
void printing(vector<int> v){
    for (int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){

 vector<int> v;
 v.push_back(24);
 v.push_back(13);
 v.push_back(15);
 v.push_back(18);
 v.push_back(1);

vector<int> ans = reverse(v);

printing(ans);



return 0;
}*/

// MERGING 2 SORTED ARRAY 
#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i =0;
    int j =0;
    int k =0;
    while (i<n && j<m) {
        if (arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
   while (i<n){
        arr3[k]=arr1[i];
        k++;
        i++;

    }
  while (j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
        
    }
}
    void printArray(int a[],int n)
    {
        for (int i =0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }




int main (){ 
int arr1[5]={1,3,5,7,9};
int arr2[4]={2,4,6,8};

int arr3[9]={0};
merge(arr1,5,arr2,4,arr3);
printArray(arr3,9);



    
    return 0;
}
