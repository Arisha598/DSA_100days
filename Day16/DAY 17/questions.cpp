// //Firsrt Occurence
#include<iostream>
#include<vector>
using namespace std;
int firstoccurence(vector<int>V , int size , int target){
    int start=0;
    int end=V.size()-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(V[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(V[mid]>target){
            end=mid-1;
        }
        else if(V[mid]<target){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;

}
int main() {
    vector<int>V{1,2,3,4,4,4,5};
    int size=7;
    int target=4;
    int result=firstoccurence(V , size , target);
    cout<<"ans is"<<result<<endl;
}


//Last Occurence
#include<iostream>
#include<vector>
using namespace std;
int lastoccurence(vector<int>v , int size , int target){
    int start=0;
    int end=v.size()-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(v[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(v[mid]>target){
            end=mid-1;
        }
        else if(v[mid]<target){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main() {
    vector<int>v{1,2,5,5,5,6};
    int size=6;
    int target=5;
    int result=lastoccurence(v , size , target);
    cout<<"ans is :"<<"  "<<result<<endl;
}
