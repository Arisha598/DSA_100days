// #include<iostream>
// using namespace std;
// int main(){
//     enter name
//     char ch[100];
//     cout<<"enter your name"<<endl;
//     cin>>ch;
//     cout<<"my name is "<< ch <<endl;

//     taing input
//     char ch[100];
//     cin>>ch;
//     for(int i=0;i<7;i++){
//         cout<<"index"<< i <<"value:"  << ch[i] << endl;

//     }

//     using getline function
//     char ch[100];
//     cin.getline(ch , 50);
//     cout<< "my name is "<< ch <<endl;

//     find length of string
//     #include<iostream>
//     #include<string.h>
//       using namespace std;
//       int getlength(char ch[]){
//         int length=0;
//         int i=0;
//         while(ch[i] != '\0'){
//             length++;
//             i++;
//         }
//         return length;
//     }


//      int main(){
//     char ch[100];
//     cin >> ch ;
//     int result=getlength(ch);
//     cout<< "the length of string is : " << result <<endl;
//     return 0;
// }


// reverse the string
// #include<iostream>
// #include<string.h>
// using namespace std;
//    int getlength(char name[]){
//         int length=0;
//         int i=0;
//         while(name[i] != '\0'){
//             length++;
//             i++;
//         }
//         return length;
//     }

// void reversearray( char name[]){
//     int i=0;
//     int n=strlen(name);
//     int j = n - 1;
//     while(i<=j){
//         swap(name[i],name[j]);
//         i++;
//         j--;
//     }
// }

// int main(){
//      char name[100];
//      cin >> name;
//      cout<<"the reverse string is: " << reversearray(name)<< endl;


// }


//replace all spaces
#include<iostream>
#include<string.h>
using namespace std;
int replace(char name[]){
    int i=0;
    int n=strlen(name);
    for(int i=0 ;i<n;i++){
        if(name[i] == ' '){
            name[i]='@';
          
        }
    }
}
int main(){
    char name[100];
    cin.getline(name , 100);
    cout << " the sentence is :" << replace(name) <<endl;

}
    