#include<stdio.h>
#include<ctype.h> 
int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    char ch;
    printf("Enter the source filename: ");
    scanf("%s", sourceFileName);
    printf("Enter the destination filename: ");
    scanf("%s", destFileName);
    sourceFile=fopen(sourceFileName, "r");
    if (sourceFile==NULL){
        printf("Could not open source file %s\n", sourceFileName);
        return 1;
    }
    destFile=fopen(destFileName, "w");
    if (destFile==NULL){
        printf("Could not open or create destination file %s\n", destFileName);
        fclose(sourceFile);
        return 1;
    }
    while ((ch=fgetc(sourceFile))!=EOF){
        fputc(toupper(ch), destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    printf("File copied successfully with lowercase characters converted to uppercase.\n");
    return 0;
}
