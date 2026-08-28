// in the bubble sort we are finding the first largest number at first round and the second largest number at the second round
// and this is how we find all the array sorted by finding all the largest number 
// in short we are placing all the largest numbers into their own places and then as a result we got our sorted array 
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={2,4,5,6,27};
    for (int i=0 ;i<n ;i++){
        // for round 0 to n-1
        for (int j=0 ;j<n-i-1;j++){
                if (arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
        }

    }
    for ( int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}