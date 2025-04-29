#include<iostream>
#include<fstream>
using namespace std;
main(){
		ofstream newfile ("newcom.txt");
	 	newfile<<"My name is Shahroz IJaz \n i am 9 years old";
	newfile.close();
string ch;
int a =0 ;
ifstream nw("newcom.txt");
	nw>>ch;
	
	while( getline ( nw , ch)) {
  cout <<ch<< endl;
  a+= ch.length();
}
	
	
	while(getline(nw,ch)){
a++;
}
	nw.close();
	cout<<a;
}
