//palindrome string

#include<iostream>
#include<string.h>
using namespace std;
bool checkpalindrome(char word[]){
    int i=0;
    int n=strlen(word);
    int j=n-1;
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
    char word[100]="noon";
    cout<<" the sentence is :"<<checkpalindrome(word)<<endl;

}