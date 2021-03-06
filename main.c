//
// Created by Xufeng Weng on 2019-04-16.
//


#include <stdio.h>
#include "readfile.h"
#include "model.h"

int menu() {
    printf("Employee DB Menu:\n");
    printf("----------------------------------\n");
    printf("  (1) Print the Database\n");
    printf("  (2) Lookup by ID\n");
    printf("  (3) Lookup by Last Name\n");
    printf("  (4) Add an Employee\n");
    printf("  (5) Quit\n");
    printf("----------------------------------\n");
    int option;
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &option);
        if (option < 1 || option > 5) {
            printf("Hey, %d is not between 1 and 5, try again...\n", option);
        } else {
            break;
        }
    }
    printf("\n");
    return option;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("USAGE: ./workersDB file");
        return 0;
    }

    int ret = open_file(argv[1]);
    if (ret != 0) {
        printf("Open %s error\n", argv[1]);
        return 0;
    }
    char first_name[MAXNAME], last_name[MAXNAME];
    int salary, id;
    while (1) {
        ret = read_int(&id);
        if (ret == -1) {
            break;
        }
        read_string(first_name);
        read_string(last_name);
        read_int(&salary);
        auto_add_empty(id, first_name, last_name, salary);
    }
    close_file();

    int option;
    while ((option = menu()) != 5) {
        if (option == 1) {
            print_db();
        } else if (option == 2) {
            printf("Enter a 6 digit employee id: ");
            scanf("%d", &id);
            printf("\n");
            lookup_by_id(id);
            printf("\n");
        } else if (option == 3) {
            printf("Enter Employee's last name (no extra spaces): ");
            scanf("%s", last_name);
            printf("\n");
            lookup_by_last_name(last_name);
            printf("\n");
        } else if (option == 4) {
            printf("Enter the first name of the employee: ");
            scanf("%s", first_name);
            printf("Enter the last name of the employee: ");
            scanf("%s", last_name);
            while (1) {
                printf("Enter employee's salary (30000 to 150000): ");
                scanf("%d", &salary);
                if (salary < 30000 || salary > 150000) {
                    printf("Hey, %d is not between 30000 and 150000, try again...\n", salary);
                }
                break;
            }
            printf("do you want to add the following employee to the DB?\n");
            printf("        %s %s, salary: %d\n", first_name, last_name, salary);
            printf("Enter 1 for yes, 0 for no: ");
            scanf("%d", &option);
            if (option == 1) {
                add_empty(first_name, last_name, salary);
            }
        }
    }
    printf("goodbye!\n");
    return 0;
}
