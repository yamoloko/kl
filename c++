#include<iostream>
#include<fstream>
#include<string>

using namespace std;

main(){
// string text = "I am Shahroz\n";
// string text1 = "Shahroz is a great programmer";

// ofstream newfile1("newfile.txt");
// newfile1 << text;
// newfile1 << text1;
// newfile1.close();

// ifstream newfile("newfile.txt");
// string line;
// newfile>>line;
// // while(getline(newfile,line)){
// //     cout<<line<<endl;
// // }
// getline(newfile , line);
// getline(newfile , line);
// cout<<line<<endl;




// ofstream newfile("newfile.txt");
// cout<<"Enter your name";
// string name;
// cin>>name;

// newfile<<name;

// newfile.close();

ifstream newfile1("newfile.txt");
string line;
newfile1 >> line;
// cout<<"Your name is: "<<line<<endl;
while(newfile1.eof()==0){
    getline(newfile1 , line);
    cout<<line<<endl;
}

newfile1.close();

}
