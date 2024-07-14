//push pop insertion deletion can be done from both front and back side
//dynamic in nature and random access is possible

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    for(int i: d){
        cout<<i<<" ";
    }
    d.pop_back();
    for(int i: d){
        cout<<i<<" ";
    }
    cout<<d.at(1);
    cout<<d.front()<<d.back();
    cout<<d.empty();
    d.erase(d.begin(),d.begin()+1);

}