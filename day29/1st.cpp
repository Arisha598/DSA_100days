// array in pointer
#include<iostream>
using namespace std ;
int main(){
    int arr[6]={12,34,4,7,8,9};

    cout << arr << endl;
    cout << arr[0] << endl;
    cout << &arr[0] << endl;
    cout <<  &arr << endl;

    int *p=arr;
    cout << p << endl;
    cout << &p << endl;

    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr+3) << endl;
}