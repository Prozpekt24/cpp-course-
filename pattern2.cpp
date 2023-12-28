#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int row = 1;
while (row <= n)
{
    int col = 1;
    
     char  star ='A'+row+col-2;
    while (col <= row)
    {
     
        cout <<star<<" ";
       star++;
        col++;     
        
    }
    cout<<endl;
    row++;
    
}
return 0;
}