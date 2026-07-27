#include<iostream>
using namespace std;
int converttodecimal(int bnum){
    int power=1;
    int ans=0;
 while(bnum>0){
   int rem=bnum%10;  //it will give the last number to be processedv
   ans+=power*rem;
   bnum=bnum/10;  //it will eliminate the last number which is processed 
   power*=2;
 }
 return ans;

}
int main(){
  int num;
cout<<"enter a number you want to convert to the decimal"<<endl;
cin>>num;
int a=converttodecimal(num);
cout<<"the binary number is "<<a;
}