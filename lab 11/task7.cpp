#include<stdio.h>
#include<string.h>
#define MAX_DEPARTMENTS 5
#define MAX_COURSES 10

struct Course {
    int course_id;            
    char course_name[50];
    char instructor_name[50];
    int credits;
};
struct Department {
    char department_name[50];
    struct Course courses[MAX_COURSES];
    int course_count;
};


void addDepartment(struct Department departments[], int *department_count){
    if (*department_count>=MAX_DEPARTMENTS){
        printf("Maximum number of departments reached.\n");
        return;
    }
    printf("Enter department name: ");
    fgets(departments[*department_count].department_name, 50, stdin);
    departments[*department_count].department_name[strcspn(departments[*department_count].department_name, "\n")]='\0';
    departments[*department_count].course_count=0;
    (*department_count)++;
    printf("Department added successfully.\n");
}
void addCourse(struct Department *department) {
    if (department->course_count>=MAX_COURSES) {
        printf("Maximum number of courses for this department reached.\n");
        return;
    }
    struct Course *course = &department->courses[department->course_count];
    printf("Enter course ID (integer): ");
    scanf("%d", &course->course_id);
    getchar();
    printf("Enter course name: ");
    fgets(course->course_name, 50, stdin);
    course->course_name[strcspn(course->course_name, "\n")]='\0'; 
    printf("Enter instructor name: ");
    fgets(course->instructor_name, 50, stdin);
    course->instructor_name[strcspn(course->instructor_name, "\n")]='\0';
    printf("Enter course credits: ");
    scanf("%d", &course->credits);
    getchar(); 
    department->course_count++;
    printf("Course added successfully.\n");
}
void displayDetails(struct Department departments[], int department_count){
    if (department_count==0){
        printf("No departments to display.\n");
        return;
    }
    for (int i=0; i<department_count; i++) {
        printf("\nDepartment: %s\n", departments[i].department_name);
        printf("Courses:\n");
        for (int j=0; j<departments[i].course_count; j++) {
            struct Course course=departments[i].courses[j];
            printf("Course ID: %d, Name: %s, Instructor: %s, Credits: %d\n",
                   course.course_id, course.course_name, course.instructor_name, course.credits);
        }
    }
}
void TotalCredits(struct Department departments[], int department_count){
    if (department_count==0) {
        printf("No departments to calculate credits for.\n");
        return;
    }
    for (int i=0; i<department_count; i++) {
        int total_credits=0;
        for (int j=0; j<departments[i].course_count; j++) {
            total_credits+=departments[i].courses[j].credits;
        }
        printf("Total Credits for Department '%s': %d\n",
               departments[i].department_name, total_credits);
    }
}
int main(){
    struct Department departments[MAX_DEPARTMENTS];
    int department_count=0;
    int choice;

    do{
        printf("\nUniversity Course Enrollment System\n");
        printf("1. Add Department\n");
        printf("2. Add Course to Department\n");
        printf("3. Display Department and Course Details\n");
        printf("4. Calculate Total Credits for Each Department\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice){
            case 1:
                addDepartment(departments, &department_count);
                break;
            case 2:
                if (department_count==0){
                    printf("No departments available. Please add a department first.\n");
                } 
				else{
                    printf("Enter department index (0 to %d): ", department_count-1);
                    int index;
                    scanf("%d", &index);
                    getchar();
                    if (index>=0 && index<department_count){
                        addCourse(&departments[index]);
                    } 
					else{
                        printf("Invalid department index.\n");
                    }
                }
                break;
            case 3:
                displayDetails(departments, department_count);
                break;
            case 4:
                TotalCredits(departments, department_count);
                break;
            case 5:
                printf("Exiting.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice!=5);
    return 0;
}
