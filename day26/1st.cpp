#include<iostream>
#include<string.h>
using namespace std;
bool checkanagram(char word[] , char words[]){
    int i=0;
    int n1=strlen(word);
    int n2=strlen(word);
    int j1=n1-1;
    while(i<=j){
        if(word[i]!=word[j]){
            return false;
        }
        else{
            i++;
            j--;
        } 
    }
     return true;

}
int main(){
    char word[100]="anagram";
    char words[100]="nagaram";
    cout<<" the sentence is :"<<checkanagram(word , words)<<endl;

}