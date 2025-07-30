#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    cout<<dq.front()<<dq.back()<<"\n";
    dq.pop_back();
    dq.pop_front();
    dq.push_front(100);
    dq.push_front(200);
    while(!dq.empty()){
        cout<<dq.front()<<"\n";
        dq.pop_front();
    }
}