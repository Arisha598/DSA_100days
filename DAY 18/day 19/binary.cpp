//nearly sorted array

#include <iostream>
#include<vector>
using namespace std;
 int binarysearch(vector<int>arr,int target ){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target)
        return mid;
        if(arr[mid-1]==target)
        return mid-1;
        if(arr[mid+1]==target)
        return mid+1;
        if(arr[mid]>target){
            e=mid-2;
        }
        else{
            s=mid+2;
        }
        return -1;
    }
} 

int main() {
    vector<int>arr{10,3,40,20,50,80,70};
    int target=40;
    int size=7;
    int ans=binarysearch(arr, target);
    cout<<"index  of " <<target<<" is "<<ans<<endl;

}


//divide of two no
// #include<iostream>
// using namespace std;
// int solve( int dividend , int  divisor){
//     int s=0;
//     int e=dividend;
//     int ans =0;
//      int mid=s+(e-s)/2;
//      while(s<=e){
//         if(mid*divisor == dividend){
//         return mid;
//         }
//         if(mid*divisor > dividend){
//         e=mid-1;
//         }
//         else{
//             ans = mid;
//             s = mid+1;
//         }
//         mid=s+(e-s)/2;

//      }
//      return ans;
// }
// int main() {
//     int dividend=40;
//     int divisor=7;
//     int result=solve(dividend,divisor);
//     cout<< " the solution is " <<result<<endl;
//     return 0;
// }


//odd occurence of an element 
// #include<iostream>
// #include<vector>
// using namespace std;
//  int solve( vector<int>arr){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         {if(s == e)
//         return s;
//     }
//     }
// if(mid%2 == 0){
//     if(arr[mid]==arr[mid=1])
//     s=mid+2;
// }
// else{
//     e=mid;
// }
// }
//  else {
// if(arr[mid]==arr[mid-1]) {
// s=mid+1;
//  }
// }

//  else{
//     e=mid-1;
//  }
// int main() {
//     vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
//     int result=solve(arr);
//     cout<<" the solution is " << result <<endl;
// }
