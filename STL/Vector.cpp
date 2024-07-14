#include<iostream>
#include<vector>
//dynamic array
using namespace std;
int main(){
vector<int> v;
cout<<v.capacity();//capacity
v.push_back(1);
v.push_back(2);

cout<<v.capacity();//capacity
v.push_back(3);
cout<<v.capacity();//capacity
cout<<v.at(2);
cout<<v.front();
cout<<v.back();
cout<<endl;
for(int i:v){
    cout<<i<<" ";
}
v.pop_back();
cout<<endl;
for(int i:v){
    cout<<i<<" ";
}

v.clear();
cout<<endl<<v.size()<<" "<<v.capacity();

vector<int> a(5,1);// first one is size of vector and second one is initialize all the element with that number
vector<int> l(a); //a vector ta l e chole aslo
for(int i:l){
    cout<<i<<"\t";
}

}