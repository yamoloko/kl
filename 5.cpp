#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;

struct names{
    string name;
    float price;
}; 
int main(){
    names ch[1000000];
    int count = 0 ;
ifstream kl("temp.txt");
string line;
while(count < 100 && getline(kl , line)){
    size_t find = line.rfind((','));
        if(find != string::npos){ 
         ch[count].name = line.substr(0,find);
         ch[count].price = stof(line.substr(find+1));
         count ++;

    //when we dont use the struct
    //  name[count] = line.substr(0, find);
    //  prices[count] = stof(line.substr(find + 1));
 
        } }
kl.close();
 
for(int i=0;  i<count; i++){
    for(int j=0; j<count-i-i; j++){
        if(ch[j].name > ch[j+1].name){
            names temp =ch[j];
            ch[j] = ch[j+1];
            ch[j+1] = temp;
        }
    }
}
 


ofstream in("temp.txt"); 
for(int i=0; i<count; i++){
    in << ch[i].name << "," << ch[i].price << endl;
    cout << ch[i].name << " - " << ch[i].price << endl;
}

    return 0;
}