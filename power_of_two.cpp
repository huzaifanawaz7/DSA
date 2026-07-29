#include<iostream>
using namespace std;
bool check_number_is (int n){
    bool check=false;
      if(n>0 && (n&(n-1))==0){
        cout<<"this number can be converted into the power of two"<<endl;
        check=true;
      }
      return check;
}
void which_power(int n){
   int count=0;
   while(n>1){
    n=n/2;
    count++;
   }
   cout<<"the number is has two raise power"<<count<<endl;
}
int main(){
    int n;
cout<<"enter the number you want to check the power of two"<<endl;
cin>>n;
bool rec=check_number_is(n);
if(rec){
    which_power(n);
}else{
    cout<<"this number cant be converted into the power of two"<<endl;
}
}