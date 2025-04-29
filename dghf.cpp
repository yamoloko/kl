#include<iostream>
#include<fstream>
using namespace std;
    main(){
    	string ap , po;
    	ifstream nep("first.txt");
    	nep>>ap;
    	nep.close();
    		ifstream np("first2.txt");
    	np>>po;
    	np.close();
    	
    	
    	
   ofstream nw("n.txt");
   nw<<ap;
   nw<<po;
   nw.close();
    }
    
