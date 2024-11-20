#include <stdio.h>
#include <string.h>
struct cars {
    char make[30];
    char model[30];
    int year;
    float mileage;
    float price;
};
void addCars(struct cars Car[], int *count) {
    printf("Enter car details:\n");
    printf("Enter make: ");
    scanf("%s", Car[*count].make); 
    printf("Enter model: ");
    scanf("%s", Car[*count].model);
    printf("Enter year: ");
    scanf("%d", &Car[*count].year);
    printf("Enter price: ");
    scanf("%f", &Car[*count].price);  
    printf("Enter mileage: ");
    scanf("%f", &Car[*count].mileage);  
    (*count)++;
}
void availableCarDisplay(struct cars Car[], int count) {
    if (count == 0) {
        printf("No cars available.\n");
        return;
    }
    printf("Available cars:\n");
    for (int i = 0; i < count; i++) {
        printf("\nCar %d:\n", i + 1);
        printf("Make: %s\n", Car[i].make);
        printf("Model: %s\n", Car[i].model);
        printf("Year: %d\n", Car[i].year);
        printf("Price: %.3f\n", Car[i].price);
        printf("Mileage: %.3f\n", Car[i].mileage);
    }
}
void carSearch(struct cars Car[], int count) {
    char searchFor[30];
    int found = 0;

    printf("Enter make or model of the car to search: ");
    scanf("%s", searchFor);

    for (int i = 0; i < count; i++) {
        if (strstr(Car[i].make, searchFor) != NULL || strstr(Car[i].model, searchFor) != NULL) {
            if (!found) {
                printf("\nSearch results:\n");
            }
            printf("\nMake: %s\n", Car[i].make);
            printf("Model: %s\n", Car[i].model);
            printf("Year: %d\n", Car[i].year);
            printf("Price: %.3f\n", Car[i].price);
            printf("Mileage: %.3f\n", Car[i].mileage);
            found = 1;
        }
    }

    if (!found) {
        printf("No car found for this search.\n");
    }
}

int main() {
    struct cars Car[50];
    int count = 0; 
    int choice;

    while (1) {
        printf("Welcome to the Dealership Menu:\n");
        printf("1. Add a car\n");
        printf("2. Search a car\n");
        printf("3. Display available cars\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCars(Car, &count);
                break;
            case 2:
                carSearch(Car, count);
                break;
            case 3:
                availableCarDisplay(Car, count);
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
