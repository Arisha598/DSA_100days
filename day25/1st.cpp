//custom comparator use
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
bool cmp(char first , char second){
    return first > second;
}
bool compare(int a , int b){
    return a>b;
}
int main(){
    string s="babbar";
    sort(s.begin(),s.end() , cmp);
    cout << s << endl;

    vector<int>v{2,5,1,8,77};
    sort(v.begin(),v.end() ,compare);
    for(auto i:v){
        cout<< i << " ";
    }
}