//Memory efficient Data Storage Using Union
//Bhargab Rudra Kalita
//Roll No-32
//Assignment 3
//5-11-2024
#include <stdio.h>

union Data {
    char grade;
    int stu_id;
    float parcentage;
};

int main() {
    union Data data;

    // Assign a character value
    data.grade = 'A';
    printf("Grade of the student: %c\n", data.grade);

    // Assign an integer value
    data.stu_id = 42;
    printf("ID of the student: %d\n", data.stu_id);

    // Assign a floating-point value
    data.parcentage = 3.14;
    printf("Parcentage of the Student: %f\n", data.parcentage);

    return 0;
}