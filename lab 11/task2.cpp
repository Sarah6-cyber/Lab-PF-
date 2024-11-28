#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *file;
    char filename[100];
    char line[256];
    int lineNumber=1;
    printf("Enter the filename to open: ");
    scanf("%s", filename);
    file=fopen(filename, "r");
    if (file==NULL) {
        printf("Could not open file %s.\n", filename);
        return 1;
    }
    printf("Contents of the file %s:\n", filename);
    while (fgets(line, sizeof(line), file)!=NULL) {
        printf("%d: %s", lineNumber, line);
        lineNumber++;
    }
    fclose(file);
    return 0;
}
