#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct student {
    char name[20];
    char gender[7];
    int age;
    struct student* previous;
    struct student* next;
} student;

#endif