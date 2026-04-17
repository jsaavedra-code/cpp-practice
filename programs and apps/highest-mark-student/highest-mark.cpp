// This program finds the student with the highest marks from an array of students and prints their name and marks.

#include <iostream>

struct Student{           // Define a structure to hold student information
    std::string name;
    int marks;
};

int main(){
    Student students[3] = {    // Initialize an array of students with their names and marks
        {"John", 85},
        {"Alice", 92},  // Alice has the highest marks
        {"Bob", 78}
    };

    int maxIndex = 0;  // Assume the first student has the highest marks initially

    for (int i = 1; i < 3; i++){    // Loop through the students starting from the second one
        if (students[i].marks > students[maxIndex].marks){    // Compare marks to find the highest
            maxIndex = i;   // Update maxIndex if the current student has higher marks
        }
    }

    std::cout << "Top student: " << students[maxIndex].name << std::endl;   // Print the name of the student with the highest marks
    std::cout << "Marks: " << students[maxIndex].marks << std::endl;  // Print the marks of the student with the highest marks

    return 0;
}