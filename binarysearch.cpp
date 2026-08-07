#include<iostream>
using namespace std;
int n=5;
int arr[5]={1,2,3,4,5};
// i want to find the position of the element in the array 
int t=3;
int s=0;
int e=n-1;
int mid=-1;
int ans=0;
int lastfindindex(){
while(s<=e)
{
    //find the occurrence of the right most 
    mid=s+(e-s)/2;
    if (arr[mid]==t){
      ans=mid;
      s=mid+1;

    }
    if (arr[mid]<t){
     s=mid+1;
    }
    if(arr[mid]>t){
            e=mid-1;
    }

}
return ans;
}
int main(){
int i=lastfindindex();
cout<<i<<endl;
}



