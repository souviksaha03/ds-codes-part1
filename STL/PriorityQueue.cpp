#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int ,vector<int>, greater<int>> mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(5);
    int m = maxi.size();
    for(int i=0;i<m;i++){
        cout<<maxi.top();
        maxi.pop();
    }

      mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(5);
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<maxi.top();
        mini.pop();
    }
    cout<<mini.empty();
}