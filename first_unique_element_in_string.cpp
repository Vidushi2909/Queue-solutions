#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

int  first_unique_char(string s){
    unordered_map<char,int> m;
    queue<int> q;

for(int i=0;i<s.size();i++){
    //to push elements in queue
    if(m.find(s[i])==m.end()){
        q.push(i);
    }
    m[s[i]]++;
}
    //to pop repeating elements from queue
    while(q.size()>0 && m[s[q.front()]] > 1){
        q.pop();
    }
    
    if(q.empty()){
        return false;
    }
    else{
        return q.front();
    }

}

int main(){
    string s;
    cout<<"enter a string"<<"\n";
    cin>>s;
    cout<<s[first_unique_char(s)]<<"\n";
}