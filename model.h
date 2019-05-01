//
// Created by Xufeng Weng on 2019-04-16.
//

#ifndef DB_MODEL_H
#define DB_MODEL_H

#define MAXNAME  64

struct Employee {
    int six_digit_ID;
    char first_name[MAXNAME];
    char last_name[MAXNAME];
    int salary;
};

typedef struct Employee Employee;

#define DB_CAPACITY 1024

extern Employee employees[DB_CAPACITY];
extern int number_of_records;

//Print the Database
void print_db();

//Lookup employee by ID
void lookup_by_id(int id);

//Lookup employee by last name
void lookup_by_last_name(const char* last_name);

//Add an Employee
void auto_add_empty(int id, const char* first_name,
        const char* last_name, int salary);

void add_empty(const char* first_name,
          const char* last_name, int salary);

#endif //DB_MODEL_H
