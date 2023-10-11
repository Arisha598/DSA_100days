//pivot element in binary search
#include<iostream>
#include<vector>
using namespace std;
int findpivot(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]<=e && arr[mid]>arr[mid+1])
            return mid;
        if(arr[mid-1]>=s && arr[mid-1]>arr[mid])
        return mid-1;
        
        if(arr[s]>arr[mid])
        e=mid-1;
        else
        s=mid+1;
        mid=s+(e-s)/2;

    }

    return -1;

}
int main(){
    vector<int>arr{9,10,2,4,6,8};
    int ans=findpivot(arr);
    if(ans ==-1){
        cout<<"not found"<<endl;

    }
    else{
 cout<<"ans is at index "<<ans<<endl;
 cout<<"value of ans is"<<arr[ans]<<endl;
    }
   return 0;
}


//leetcode
class Solution {
public:
int findpivot(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]<=e && arr[mid]>arr[mid+1])
            return mid;
        if(arr[mid-1]>=s && arr[mid-1]>arr[mid])
        return mid-1;
        
        if(arr[s]>arr[mid])
        e=mid-1;
        else
        s=mid+1;
        mid=s+(e-s)/2;

    }

    return -1;

}
int binarysearch(vector<int>arr , int s , int e);

    int mid=s+(e-s)/2;
    while(s<=e){
        if( arr[mid]>target)
            return mid;
        if( arr[mid]>target)
        e=mid-1;
        else
        s=mid+1;
        mid=s+(e-s)/2;
    }
    return -1;
}
        
    int search(vector<int>& nums, int target) {  
        int pivotindex= findpivot(nums);
        int ans=0;
        if(target>=nums[0] && target <= nums[pivotelement]){
             ans = binarysearch(nums , 0 , pivot)

        }
        else{
             ans = binarysearch(nums , pivotindex+1 , nums.size()-1);
            
        }
        return ans;

        
    }
};