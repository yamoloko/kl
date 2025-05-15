#include <iostream>
#include<cstdio>
using namespace std;
 int fun(int (*arri)[5], int size){
    int tar = 1;
for(int i=0; i<size; i++){
    tar *= (*arri)[i];
}
return tar;
}

int main() {

int si = 5;
int arr[5];
cout<<"Enter the elements of the array"<<endl;
for(int i=0; i<si; i++){
    cin>>arr[i];
}
 
int (*poin)[5]= &arr;
cout<<fun(poin,si)<<endl;

printf("The size of the array is: %d\n", si);
printf("They told me coding was fun. They lied. It's just Ctrl+C, Ctrl+V and tears.\n");
printf("Why do programmers prefer dark mode? Because light attracts bugs!\n");
printf("Why do Java developers wear glasses? Because they don't see sharp!\n");

 


    return 0;
} 

