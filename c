#include<iostream>
#include<fstream>
#include<string>

using namespace std;

main(){
//string text = "I am Shahroz\n";
//string text1 = "Shahroz is a great programmer";

//ofstream newfile1("newfile.txt");
//newfile1 << text;
//newfile1 << text1;
//newfile1.close();

 //ifstream newfile("newfile.txt");
 //string line;
 //newfile>>line;
 //while(getline(newfile,line)){
  //   cout<<line<<endl;
// }
 //getline(newfile , line);
 //getline(newfile , line);
 //cout<<line<<endl;




 //ofstream newfile1("newfile.txt");
 //cout<<"Enter your name";
 //string name;
 

//cin.ignore();
  //getline(cin, name, '\n');

 //newfile1<<name;

 //newfile1.close();

//ifstream newfile("newfile.txt");
//string line;
//newfile >> line;
// cout<<"Your name is: "<<line<<endl;
//while(newfile.eof()==0){
  //  getline(newfile , line);
    //cout<<line<<endl;
//}

  //newfile.close();

//  ofstream number("newfile");
//	int a ,b ,c;
//	cout<<"Enter first number: ";
//	cin>>a;
//	cin.ignore();
//	getline(cin , a, '\n');
//	cout<<"Enter second number";
//	cin>>b;
//	c = a+b;
//	number<<c;
	

ofstream number("newfile.txt");






	int a , b , c ;     int d , e , f ;	    string nam1 , nam2 , nam3 ;    string fat1 , fat2 , fat3 ; 
	cout<<"Serial number\t"<<"Roll no\t"<<"Student Name\t"<<"Father Name\t\n";
	cin>>a>>d>>nam1>>fat1;
	cin>>b>>e>>nam2>>fat2;
	cin>>c>>f>>nam3>>fat3;
	//cin.ignore();
	//getline(cin , a, '\n');

number<<"Serial\tRoll no\tStudent name\tFather name \n";
number<<a<<"\t"<<d<<"\t"<<nam1<<"\t"<<fat1<<endl;
number<<b<<"\t"<<e<<"\t"<<nam2<<"\t"<<fat2<<endl;
number<<c<<"\t"<<f<<"\t"<<nam3<<"\t"<<fat3<<endl;

number.close();

}
