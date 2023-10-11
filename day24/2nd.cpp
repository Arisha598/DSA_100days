#include<iostream>
#include<string.h>
using namespace std;
void convertintoupper(char word[]){
    int n=strlen(word);
    for(int i=0;i<n;i++){
        word[i]=word[i]-'a'+'A';
    }
}
int main(){
    char word[100]="arishachaudhary";
    convertintoupper(word);
    cout << word << endl;

}