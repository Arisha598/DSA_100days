#include<iostream> 
#include<string>
using namespace std; 
int main(){
string str;
cin >> str;

cout << "length  is : " << str.length() << endl;
cout << " is empty :" << str.empty() << endl;
str.push_back('1');
cout << str << endl;
cout << str.substr(0,3) << endl;  

 // cmapre of two string
string a="arisha";
string b="chotu";
if(a.compare(b)==0){
    cout << "the string is exactly same " << endl;
}
else{
    cout << " not same " << endl;
}

}