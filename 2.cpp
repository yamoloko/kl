#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int  main() {
char value[100][50];
int a =0;
ifstream sha("file.txt");
if(!sha){
    cout<<"File not found!"<<endl;
    return 1;
}
while(sha.getline(value[a],100)){
    a++;
}
sha.close();
ofstream sha1("file1.txt");
for(int i=a-1; i>=0; i--){
    sha1<<value[i]<<endl;
    cout << value[i] << endl; 
}
sha1.close();



return 0;
}