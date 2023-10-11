#include<iostream>
#include<vector> 
using namespace std;

 int ispossible(int arr, int n, int m, int mid){
int studentcount=1;
int pagesum=0;
for(int i=0;i<n;i++){
    if(pagesum+arr[i] <=mid){

    }
    else{
        studentcount++;
        if(studentcount >m){
            return false;
        }
       pagesum=arr[i];
    }
}
return true;
}
int bookallocation(vector<int>arr,int n, int m){
    int s=0;
    int ans=-1;
    int sum=0;
    for(int i=0;i<n;i++){
        int e=sum+arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}