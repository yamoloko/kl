#include<iostream>
#include<cstring>
using namespace std;
int com(const char* ch ,const char* c){
    return strcmp(ch,c);
}
void swap(const char* l[], int size){
for(int i=0;i<size-1; i++){
    for(int j=0; j<size-1-i; j++){
        if(com(l[j],l[j+1])>0){
         const char* temp = l[j];
            l[j]=l[j+1];
            l[j+1]=temp;
        }
    }
}
}

void fun(const char* r[],int s){
    for(int i=0; i<s; i++){
        cout<<r[i]<<endl;
    }
}
int main(){


const char* str[]={"shahroz" , "ijaz" , "shahzad" , "gujjar" , "puma"};
int si = sizeof(str) / sizeof(str[0]);
cout<<"Un-Sorted array: "<<endl;
fun(str,si);

swap(str,si);

cout<<"Sorted array: "<<endl;
fun(str,si);

return 0;
}