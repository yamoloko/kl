#include<iostream>
#include<cstring>
using namespace std;
void  fun(char arr[],char* si){
char* start = arr;
char* end = si;

while(*end != '\0'){
    end++;
}
end--;
while(start<end){
    char temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
}


}
main(){
char arra[] = {"Shahroz ijaz!"};
char* ptr = arra;

cout<<"Original string--->  "<<arra<<endl;

fun(arra,ptr);

cout<<"Reversed String--->  "<<arra<<endl;

}