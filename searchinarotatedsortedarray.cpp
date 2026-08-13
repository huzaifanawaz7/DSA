#include<iostream>
using namespace std;
int findpivot(int arr[],int siz){
    int s=0;
    int e=siz-1;
    int mid = s + (e - s) / 2;
    while(s<e){
if(arr[mid]>=arr[0]){
    s=mid+1;
}else{
    e=mid;
}
 mid = s + (e - s) / 2;

}
return arr[e];
}
int binaryatsecond(int arr[],int s,int e,int tar){
           int start=s;
           int end=e;
           int mid=start+(end-start)/2;
           while(start<=end){
            if(arr[mid]==tar){
                return mid;
            }if(tar >arr[mid]){
                start=mid+1;
            }else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
           }
           return -1;
}
int findtarget(int tar,int arr[],int siz){
      int pivot=findpivot(arr,siz);
      if( tar >=pivot && tar<=arr[siz-1]){
                return binaryatsecond(arr,pivot,siz,tar);   
      }else{
        // the bd will be applied on the first line
                return binaryatsecond(arr,pivot,siz,tar);   
      }
}

int main(){
    int size=6;
    int arr[size]={1,2,4,56,6,8};
    int tar=56;
// findpivot(arr,size);
int num=findtarget( tar,arr, size);
if (num==-1){
    cout<<"the number is not found"<<endl;
}else{
    cout<<"the number is found"<<num<<endl;
}

}