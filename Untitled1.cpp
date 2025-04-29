#include<iostream>
#include<cstring>
using namespace std;
main(){
	
	char p[10];
	char d[0];
	
	cout<<"Enter ten character: "<<endl;
	for(int i=10; i>=0; i--){
		cin>>p[i];
	}
	
	char o[10];
strcpy ( o , strrev p);
	
	

	
	
	
		for(int i=0; i<10; i++){
		cout<<o[i];
	}
	
	
	
	
}
