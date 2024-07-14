//used doubly linkedliat principle
//random element cannot be accessed
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(7);
    for(int i:l){
        cout<<i;
    }
    l.erase(l.begin());
    //other functions pop_back,size etc..
    list<int> n(5,100);
}