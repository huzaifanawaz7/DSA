#include<iostream>
using namespace std;

int findfirstoccurence(int arr[],int n,int k){
     int s=0; 
     int e=n-1;
     int mid=s+(e-s)/2;
     int ans=-1;
 while(s<=e){
    if (k==arr[mid]){
            ans=mid;
            e=mid-1;
    }
     else if(arr[mid]<k){
        s=mid+1;
     }    
     else  if(arr[mid]>k){
        e=mid-1;
     }
      mid = s + (e - s) / 2;   // <-- Missing

    
 }
  return ans;
}
int findlastoccurence(int arr[],int n,int k){
     int s=0; 
     int e=n-1;
     int mid=s+(e-s)/2;
     int ans=-1;
 while(s<=e){
    if (k==arr[mid]){
            ans=mid;
            s=mid+1;
    }
     else if(arr[mid]<k){
        s=mid+1;
     }    
     else  if(arr[mid]>k){
        e=mid-1;
     }
      mid = s + (e - s) / 2;   
    
 }
  return ans;
}
int main(){
    int size=8;
    int key=3;
int arr[size]={1,2,3,3,3,6,7,3};
int i=findfirstoccurence(arr,size,key);
int j=findlastoccurence(arr,size,key);
cout<<"the first occurance of 3  "<<i<<endl;
cout<<"the last occurance of 3  "<<j<<endl;


}