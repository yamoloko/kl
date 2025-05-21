#include<iostream>
using namespace std;
int get(){
    int a ;
    cout<<"Enter the size if array:"<<endl;
    cin>>a;
    return a;
}
main(){

int arr[] = {1,2,3,4,5};
int size = get();
int *ptr = arr;
int temp = 0;

for(int i=0; i<size; i++){
temp += *ptr;
ptr++;
}

cout<<temp;

}