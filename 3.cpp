#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;
//& to get the original value not copy
void count(ifstream &file , int &vowel , int &consonant , int &digit , int &special){
    char ch;
    vowel=consonant=digit=special=0;
    while(file.get(ch)){
        if(isalpha(ch)){
            if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowel++;
            }
            else{
                consonant++;
            }
        }
        else if(isdigit(ch)){
            digit++;
        }
        else if (!isspace(ch)){
            special++;
        }
    }
}
main(){
ifstream fil("ppp.txt");
int vowels , consonants , digit , special;
count(fil,vowels,consonants,digit,special);

cout<<"No of vowels: "<<vowels<<endl;
cout<<"No of consonants: "<<consonants<<endl;
cout<<"No of digits: "<<digit<<endl;
cout<<"Special characters: "<<special<<endl;

fil.close();
}