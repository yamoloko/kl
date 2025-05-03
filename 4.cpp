#include <iostream>
#include <fstream>
#include <string>  // Needed for getline
using namespace std;
//In C++, a struct (short for "structure") is a user-defined data type that groups together related variables of different data types. 
//It's a way to create a composite data type that represents a single entity with multiple attributes.
// The Student struct defines a blueprint for creating objects that represent students.
// Each Student object will have two pieces of data associated with it:
// without struct, it becomes an error-prone (e.g., accidentally modifying names[3] without updating grades[3]). The struct keeps related data synchronized and manage both the arrays seperately.
struct Student {
    string name;
    int grade;
};
int main() {
    Student students[50]; // Array to hold up to 50 students
    int count = 0;       // Count of students we've read
    
    // Open the file
    ifstream file("temp.txt");
    if (!file.is_open()) {
        cout << "Couldn't open students.txt file!" << endl;
        return 1;
    }
    
    // Read student data
    string line; 
    while (count < 50 && getline(file, line)) {
 //size_t represent the size of odject on the memory
// Find the last_space to hold the index of space
        size_t last_space = line.rfind(' ');
        //string::npos (a special constant meaning "not found").
        if (last_space != string::npos) {
          // Extract name (everything before last space)
          //substr() function to extract a substring from the string.(0-->last_space)
            students[count].name = line.substr(0, last_space);
            
            // Extract grade (everything after last space)
            //substr() function to extract a substring from the string.(last_space+1-->end of string)
            //stoi() function to convert a string to an integer.
            students[count].grade = stoi(line.substr(last_space + 1));
            
            count++;
        }
        
    }
    file.close();
    
    // Simple sorting (bubble sort)
    for (int i = 0; i < count-1; i++) {
        for (int j = 0; j < count-i-1; j++) {
            if (students[j].name > students[j+1].name) {
                // Swap students
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    
    // Display results
    cout << "Sorted Student List:" << endl;
    cout << "-------------------" << endl;
    for (int i = 0; i < count; i++) {
        cout << students[i].name << " - " << students[i].grade << endl;
    }
    
    return 0;
}