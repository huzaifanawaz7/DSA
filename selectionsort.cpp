#include<iostream>
using namespace std;
int main(){
int arr[5]={1,3,4,6,74};
for (int i=0 ;i < 5;i++){
 int min_index=i;

    for( int j=i+1;j<5;j++){
    if (arr[min_index]>arr[j]){
        swap(arr[min_index],arr[j]);
    }
}
}
cout<<"the sorted array is "<<endl;
for (int k=0;k<5;k++){
    cout<<arr[k]<<" ";
}


}