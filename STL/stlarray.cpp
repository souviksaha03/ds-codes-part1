#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int,4> a ={1,2,3,4};
    //stl array is a  type of static array
    int size = a.size();
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
    cout<<"second element"<<a.at(2)<<endl;
     cout<<"empty or not"<<a.empty()<<endl;
      cout<<"first element"<<a.front()<<endl;
       cout<<"last element"<<a.back()<<endl;
}
