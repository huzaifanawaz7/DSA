#include<iostream>
#include<vector>
using namespace std;
bool isvalid(vector<int>arr,int n,int m,int maxallowedpages){
            int student=1;
            int pages=0;
            for (int i=0;i<n;i++){  //O(n)
                if (arr[i]>maxallowedpages){
                    return false;
                }
                if(pages+arr[i]<=maxallowedpages){
                    pages+=arr[i];
                }else{
                    student++;
                    pages=arr[i];
                }
            }
            return student>m ?false :true;
}
 int allocatebooks(vector<int>arr,int n,int m){
    if (m>n){
        return -1;
    }
    int sum=0;
    int ans=-1;
    for( int i=0; i<n;i++){  //O(n)
         sum+=arr[i];
    }
    int start=0 ,end=sum;
    while(start<=end){     //O(log N)  after adding the isvalid function validity O(log N*n)
        int mid=start+(end-start)/2; 
        if (isvalid(arr,n,m,mid)){
            ans=mid;
                end=mid-1;

        }else{
            start=mid+1;

        }


    }
         return ans;       
            }

int main(){
 vector<int>arr={2,3,3,4};
 int n=4;// books
 int m=2;// students
 cout<<"allocate books max  of minimum pages"<<allocatebooks(arr,n,m);


}