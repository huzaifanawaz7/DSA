#include<iostream>
using namespace std;

int conversion(int num){
    int power=1;
    int ans=0;
    while(num>0){
       int rem=num%2;
        num=num/2;
        ans+=rem*power; //the role of power is to overcome the headache of the reverse number after the lcm ........
        power=power*10;
       
    }
     return ans;
}

int main(){
    int decnum;
    cout<<"enter a number you want to convert"<<endl;
    cin>>decnum;
    int a=conversion(decnum);
    cout<<a<<endl;
}