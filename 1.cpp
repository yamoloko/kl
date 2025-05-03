#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int  main() {
string fileext , filename ;
char lin[100];
int a = 0;
cout << "Enter the name of file (without extension): " << endl;
cin >> filename;
fileext = filename + ".txt";

ifstream fil(fileext);
 
if(!fil){
    cout << "File not found!" << endl;
    return 1;
}
 
//first method to use char[]
while(fil.getline(lin , 30)){
    cout << lin << endl ;
    string lineStr(lin);// Convert char array to string
    // Check each character in the line for vowels If lineStr = "Hello", the loop runs 5 times: c = 'H' c = 'e' c = 'l' c = 'l' c = 'o'
    for (char c : lineStr) {//used to check each character in the string
        //second way to read character 
        // for(int i=0; i<str.length(); i++){
        //     char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            a++; // Increment the vowel count
        }
    }
}



 fil.close();

 

cout << a;

 return 0;
}