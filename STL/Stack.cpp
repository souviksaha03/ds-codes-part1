#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("souvik");
    s.push("saha");
    cout<<s.top();
    cout<<"size"<<s.size();
    cout<<s.empty();
    //if we want to swap two stak we yse .swap() function
}