// ENE212-0094/2021 - A Code to take in students information while allowing editing 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[2][50];
    int admissionNumber;
    char courses[4][50];
};

void addStudent(struct Student students[], int *count);
void viewList(struct Student students[], int count);
void editList(struct Student students[], int count);

int main() {
    struct Student students[100];
    int choice, count = 0;

    while (1) {
        printf("\nMenu:\n1. Add student\n2. View list\n3. Edit list\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                viewList(students, count);
                break;
            case 3:
                editList(students, count);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

void addStudent(struct Student students[], int *count) {
    if (*count >= 100) {
        printf("List is full!\n");
        return;
    }

    printf("Enter student names (2 names separated by space): ");
    scanf("%s %s", students[*count].name[0], students[*count].name[1]);
    printf("Enter admission number: ");
    scanf("%d", &students[*count].admissionNumber);
    printf("Enter courses (4 courses separated by space): ");
    for (int i = 0; i < 4; i++) scanf("%s", students[*count].courses[i]);
    (*count)++;
}

void viewList(struct Student students[], int count) {
    if (count == 0) {
        printf("List is empty!\n");
        return;
    }

    printf("Student List:\n");
    for (int i = 0; i < count; i++) {
        printf("Student %d:\nNames: %s %s\nAdmission Number: %d\nCourses: ", 
               i + 1, students[i].name[0], students[i].name[1], students[i].admissionNumber);
        for (int j = 0; j < 4; j++) printf("%s ", students[i].courses[j]);
        printf("\n");
    }
}

void editList(struct Student students[], int count) {
    if (count == 0) {
        printf("List is empty!\n");
        return;
    }

    int index;
    printf("Enter index of student to edit (1 to %d): ", count);
    scanf("%d", &index);
    index--;

    if (index < 0 || index >= count) {
        printf("Invalid index!\n");
        return;
    }

    printf("Enter new student names (2 names separated by space): ");
    scanf("%s %s", students[index].name[0], students[index].name[1]);
    printf("Enter new admission number: ");
    scanf("%d", &students[index].admissionNumber);
    printf("Enter new courses (4 courses separated by space): ");
    for (int i = 0; i < 4; i++) scanf("%s", students[index].courses[i]);
}
    