#include<stdio.h>
#include<string.h>
struct packageOfTravel {
    char packageName[50];
    char destination[50];
    int duration;
    float cost;
    int availableSeats;
};
void displayPackages(struct packageOfTravel packages[], int size) {
    printf("\nAvailable Travel Packages:\n");
    printf("Name\t\tDestination\tDuration\tCost\tSeats\n");
    for (int i=0; i<size; i++) {
        if (packages[i].availableSeats>0) {
            printf("%s\t%s\t\t%d days\t\t$%.2f\t%d\n",
                   packages[i].packageName,
                   packages[i].destination,
                   packages[i].duration,
                   packages[i].cost,
                   packages[i].availableSeats);
        }
    }
}
void bookPackage(struct packageOfTravel packages[], int size) {
    char packageName[50];
    printf("\nEnter the name of the package you want to book: ");
    scanf(" %[^\n]", packageName);

    for (int i=0; i<size; i++) {
        if (strcmp(packages[i].packageName, packageName)==0) {
            if (packages[i].availableSeats>0) {
                packages[i].availableSeats--;
                printf("Booking successful for package: %s\n", packages[i].packageName);
                return;
            } 
			else{
                printf("Sorry, no seats available for this package.\n");
                return;
            }
        }
    }
    printf("Package not found.\n");
}

int main(){
    struct packageOfTravel packages[]={
        {"AdventureTrip", "Swat", 5, 499.99, 10},
        {"BeachHoliday", "Gwadar", 10, 300.55, 20},
        {"CityBreak", "Karachi", 7, 999.99, 30},
        {"SafariAdventure", "Kenya", 5, 250.99, 10}
    };
    int packageCount=sizeof(packages)/sizeof(packages[0]);
    int choice;
    do {
        printf("\nTravel Package System\n");
        printf("1. Display available packages\n");
        printf("2. Book a package\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayPackages(packages, packageCount);
                break;
            case 2:
                bookPackage(packages, packageCount);
                break;
            case 3:
                printf("Exiting the system. Have a nice day!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }while(choice!=3);
    return 0;
}
