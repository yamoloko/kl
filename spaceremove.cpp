#include <iostream>
#include <string>

using namespace std;

main(){
string name;
cout<<"Enter your name"<<endl;
getline(cin , name);
string newname;


for(char c : name){
    if(c != ' ' ){
newname += c;
    }}

    cout<<"Your name without space is: "<<newname<<endl;

}