#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
v.push_back(23);
v.push_back(3);
v.push_back(34);
v.push_back(33);
v.push_back(32);
v.push_back(311);
cout<<"size"<<v.size();
cout<<"capacity"<<v.capacity();
}