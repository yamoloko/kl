#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;
int main(){
string tyu;
char ch[100];
cout<<"Enter a character: "<<endl;
cin>>tyu;

ofstream fout("temp.txt");
if (!fout) {
    cout<< "Error opening file." << endl;
     return 0;
}
fout << tyu ;
cout<<tyu;
fout.close();

ifstream fin("temp.txt");

if (!fin) {
    cerr << "Error opening file." << endl;
    return 1;
}
fin >> ch;
cout<<ch<<endl;
// string content((istreambuf_iterator<char>(fin)) , (istreambuf_iterator<char>())); //only used in ifstream 
fin.close();

int cha = strlen(ch);//check length of string
cout<<cha<<endl;

//first way
for(int i=0; i<cha; i++){
    if(ch[i] != ch[cha-1-i]){
        cout<<"The string is not a palindrome."<<endl;
        break;
    }
    else{
        cout<<"The string is a palindrome."<<endl;
        break;
    }
    }

//second way    
// bool isPal = true;
// for(int i=0; i<cha; i++){
//     if(ch[i] != ch[cha-1-i]){//check the first half and the second half of the string
//         isPal = false;
//         break;
//     }
// }

// if(isPal){
//     cout<<"The string is a palindrome."<<endl;
// }
// else{
//     cout<<"The string is not a palindrome."<<endl;
// }
// cout<<cha<<endl;

return 0;
    }