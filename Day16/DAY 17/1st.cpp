
//Binary Search
#include<iostream>
using namespace std;
int binarySearch(int arr[] , int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
         else if(target < arr[mid]){
        end = mid - 1;
        }
        else{
            start = mid +1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main() {
    int arr[]={22,34, 56,89,99,101,102};
    int size=7;
    int target=22;
    
    int result = binarySearch(arr,size,target);

    if(result != -1){
        cout<<"Index of Key is "<<result<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
}



//STL INBUILD FUNCTION
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int>V{2,4,5,6,7,8};
    if (std: binary_search(v.begin(),V.end(),7)){
        cout<<"foubd"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

}
