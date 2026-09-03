#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
// vector<int>v;
// v.push_back(23);
// v.push_back(3);
// v.push_back(34);
// v.push_back(33);
// v.push_back(32);
// v.push_back(311);
// cout<<"size"<<v.size();
// cout<<"capacity"<<v.capacity();
stack<string>s;
s.push("ali");
s.push("lal");
s.push("kashif");
s.push("kalu");
cout<<"the top element is"<<s.top();
s.pop();
cout<<"the top element is"<<s.top();
cout<<"the size of the stack"<<s.size()<<endl;
}