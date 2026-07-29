#include<iostream>
using namespace std;
int main(){
int array[5]={1,2,3,45,21};
int start=0;
int end=5-1;
while(start<=end){
    swap(array[start],array[end]);
    start++;
    end--;
}
for(int i=0;i<5;i++){
    cout<<array[i]<<" ";
}
}