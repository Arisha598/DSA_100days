#include<iostream>
#include<string>
using namespace std;
int main(){
    string str =" my first message is  hello";
    string word="arisha";
    str.replace(0,2,word);
    cout << str << endl;
}