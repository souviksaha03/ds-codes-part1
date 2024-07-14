//stores unique element
//use bst,sorted order(ordered set)
//no modification
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(1);
    s.insert(0);
     s.insert(6);

     for(int i:s){
        cout<<i<<" ";
     }
     cout<<endl;
     s.erase(s.begin());
     for(int i:s){
        cout<<i<<" ";
     }
     set <int>::iterator it = s.begin();
     it++;

     s.erase(it);

     cout<<"whether 90 is present or not"<<s.count(90);


     set<int>:: iterator itr = s.find(5);

     cout<<"5 is resent or not"<< *it;
}