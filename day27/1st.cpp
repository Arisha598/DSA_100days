//valid anagram

#include<iostream>
using namespace std; 
    bool isanagram(string s, string t){
        int freqtable[256]={0};
        for(int i=0;i<s.size();i++){
            freqtable[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            freqtable[t[i]]--;
        }
    for(int i=0;i<256;i++){
        if(freqtable[i] !=0){
            return false;
        }
        else{
            return true;
        }
    }
    }
int main() {
 string s="anagram";
 string t="nanagram";
 int result=isanagram(s,t);
 cout<<"the results is: "<<result<<endl;
    }
    
    
   
