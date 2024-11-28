#include <stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 5
struct Employee {
    char name[50];
    char dob[20];
    int emp_id;
    char department[50];
    float salary;
};
void addingEmployee(struct Employee employees[], int *count) {
    if (*count >= MAX_EMPLOYEES) {
        printf("Cannot add more employees. Maximum limit reached.\n");
        return;
    }
    struct Employee newEmployee;
    printf("Enter employee name: ");
    getchar(); 
    fgets(newEmployee.name, sizeof(newEmployee.name), stdin);
    newEmployee.name[strcspn(newEmployee.name, "\n")] = '\0'; 
    printf("Enter Date of Birth (dd/mm/yyyy): ");
    fgets(newEmployee.dob, sizeof(newEmployee.dob), stdin);
    newEmployee.dob[strcspn(newEmployee.dob, "\n")] = '\0'; 
    printf("Enter Employee ID: ");
    scanf("%d", &newEmployee.emp_id);
    printf("Enter Department: ");
    getchar(); 
    fgets(newEmployee.department, sizeof(newEmployee.department), stdin);
    newEmployee.department[strcspn(newEmployee.department, "\n")] = '\0';
    printf("Enter Salary: ");
    scanf("%f", &newEmployee.salary);
    employees[*count] = newEmployee;
    (*count)++;
    printf("Employee added successfully.\n");
}
void deletingEmployee(struct Employee employees[], int *count) {
    int emp_id, found = 0;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &emp_id);
    for (int i = 0; i < *count; i++) {
        if (employees[i].emp_id == emp_id) {
            for (int j = i; j < *count - 1; j++) {
                employees[j] = employees[j + 1];
            }
            (*count)--;
            printf("Employee with ID %d deleted successfully.\n", emp_id);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Employee with ID %d not found.\n", emp_id);
    }
}
void displayingEmployees(struct Employee employees[], int count) {
    if (count == 0) {
        printf("No employees to display.\n");
        return;
    }
    printf("\nEmployee List:\n");
    printf("Name\t\tDate of Birth\tEmployee ID\tDepartment\tSalary\n");
    for (int i=0; i<count; i++) {
        printf("%s\t%s\t%d\t\t%s\t%.2f\n", employees[i].name, employees[i].dob,
               employees[i].emp_id, employees[i].department, employees[i].salary);
    }
}
int main(){
    struct Employee employees[MAX_EMPLOYEES];
    int count=0;
    int choice;
    while (1) {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Delete Employee\n");
        printf("3. Display Employees\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addingEmployee(employees, &count);
                break;
            case 2:
                deletingEmployee(employees, &count);
                break;
            case 3:
                displayingEmployees(employees, count);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. try again.\n");
        }
    }
    return 0;
}
