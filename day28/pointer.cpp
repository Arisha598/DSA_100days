#include<iostream>
using namespace std;
int main(){
    int a=5;

    cout <<" the address of x is : " <<  &a << endl;
    cout << "the value of x is : " << a << endl;

//pointer creation 
    int b=12;
    int*ptr=&b;
    //acess the value of ptr pointing to
    cout << *ptr << endl;


    // size of pointer
    int d=13;
    int *p=&d;
    cout << sizeof(p) << endl;

    char ch='b';
    char *c=&ch;
    cout << sizeof(c) << endl;
}