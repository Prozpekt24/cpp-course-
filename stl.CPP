//array in STL
/*#include<iostream>


#include<array>
using namespace std;

int main () {
   
    array<int,4> a = {1,10,3,22};
    int size = a.size();
    cout<<size<<endl;
    for (int i =0;i<size;i++){
         cout<<a[i]<<" ";

    }
    cout<<endl;
    cout<<a.at(0)<<endl;
cout<<a.empty()<<endl;
cout<<a.front()<<endl;
cout<<a.back()<<endl;
    return 0;
}*/
// VECTOR 
/*#include<iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> v;
 //   cout<<v.capacity()<<endl;


    v.push_back(1);
    cout<<v.capacity()<<endl;
    
    v.push_back(10);
    cout<<v.capacity()<<endl;
    
     v.push_back(12);
    cout<<v.capacity()<<endl;

     v.push_back(24);
    cout<<v.capacity()<<endl;

   v.push_back(10);
   cout<<v.capacity()<<endl;

   v.push_back(2);
   cout<<v.capacity()<<endl;

   v.push_back(4);
   cout<<v.capacity()<<endl;

   v.push_back(5);
   cout<<v.capacity()<<endl;
   cout<<endl;
    cout<<v.size()<<endl;
   cout<<" befor pop back "<<endl;
   for (int i:v){
    cout<<i<<" ";
   }cout<<endl;
   cout<<" after  pop back "<<endl;
  v.pop_back();
  for (int i:v){
    cout<<i<<" ";
   }cout<<endl;

 cout<<v.size()<<endl;

   v.clear();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;


    // fixed size vector 
    vector<int> a(5,3);
    for (int i:a){
        cout<<i<<" ";
    }
    return 0;
}*/
/*#include<iostream>
#include<deque>
using namespace std;

int main () {
    deque<int> d;
   d. push_back(2);
   d. push_front(1);
    for (int i:d){
        cout<<i<<" ";
    }cout<<endl;
  //  d.pop_front();
    cout<<endl;
     for (int i:d){
        cout<<i<<" ";
    }cout<<endl;
cout<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<d.size()<<endl;
     for (int i:d){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}*/
// LIST
/*#include<iostream>
#include<list>
using namespace std;

int main () {
    list<int> l;
    l.push_back(2);
    l.push_front(1);
    for(int i : l){
    cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin());
    for(int i : l){
    cout<<i<<" ";
    }cout<<endl;
    return 0;
}*/
// STACK
/*
#include<iostream>
#include<stack>
using namespace std;

int main () {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    //   cout<<s.top();
    s.pop();
    cout<<s.top();
    return 0;
}*/

// QUEUE
/* #include<iostream>
 #include<queue>
 using namespace std;
 int main(){
 queue<string>q;
  q.push("harsh");
  q.push("nitin");
  q.push("rider");
  cout<<q.size ()<<endl;
 cout<<q.front()<<endl;
 q.pop();
 cout<<q.size()<<endl;
cout<<q.front();
q.pop();
cout<<endl;
cout<<q.front()<<endl;
cout<<q.back()<<endl;
cout<<q.size()<<endl;



    return 0;
 }*///SET
 /*#include<iostream>
 #include<queue>
 using namespace std;
 
 int main () {
    priority_queue<int> maxi;
    priority_queue<int ,vector<int> , greater<int>>mini;

    maxi.push(3);
    maxi.push(2);
    maxi.push(1);
    maxi.push(24);
   int n = maxi.size();
   for (int i= 0;i<n;i++){
    cout<<maxi.top()<<" ";
    maxi.pop();

   }cout<<endl;


mini.push(3);
mini.push(2);
mini.push(1);
mini.push(24);
int m = mini.size();
for (int i =0;i<m;i++){
    cout<<mini.top()<<" ";
    mini.pop();

}
    return 0;
 }*/
 /*#include<iostream>
 #include<set>

 using namespace std;
 
 int main () {
    set<int> s;
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(0);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    for(int i:s){
        cout<<i<<" ";

    }cout<<endl;
  //  cout<<s.size()<<endl;
    
 set<int>::iterator it= s.begin();
   it++;
     //it++;
     //it++;
     //it++;

  s.erase(it);
    for(auto i:s){
        cout<<i<<" ";

    }cout<<endl;

  //  set<int> ::iterator itr = s.find();
    //cout<<*it<<endl;

    set<int> :: iterator itr = s.find(2);
    for(auto it = itr ; it!=s.end();it++){
        cout<<*it<<" ";
    }
    return 0;
 }*/


//MAP
/*#include<iostream>
#include <map>
using namespace std;

int main () {
    map<int,string> m;
    m[22] ="kane";
    m[24]="harsh";
    m[1]=" dash ";
    for (auto i:m){
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }cout<<endl;
    m.erase(1);
     for (auto i:m){
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }cout<<endl;

    return 0;
}*/
  
  //ALGORITHM

/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main () {
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(18);
    v.push_back(22);


    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;

cout<<binary_search(v.begin(),v.end(),22);
cout<<endl;
int a = 22;
int b =24;
 cout<<max(a,b)<<endl;
  cout<<min(a,b)<<endl;
 
swap(a,b);

cout<<endl;

string h = "HARSH";
reverse(h.begin(),h.end());
cout<<h<<endl;


rotate(v.begin(),v.begin()+1,v.end());
for (int i : v){
    cout<<i<<" ";
}cout<<endl;

sort(v.begin(),v.end());
for (int i : v){
    cout<<i<<" ";
}cout<<endl;


    return 0;

}*/