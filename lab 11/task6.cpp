#include<stdio.h>
#include<string.h>
struct Invoice{
	int qtty;
	char part_num[40];
    char description[100];
    float price_per_item;
};
float calculateInvoiceAmount(struct Invoice invoice){
    if (invoice.qtty<0){
        invoice.qtty=0;
    }
    if (invoice.price_per_item<0){
        invoice.price_per_item=0;
    }
    return invoice.qtty*invoice.price_per_item;
}

int main(){
    struct Invoice myInvoice;
    printf("Enter part number: ");
    fgets(myInvoice.part_num, 50, stdin);
    myInvoice.part_num[strcspn(myInvoice.part_num,"\n")]='\0'; 
    printf("Enter part description: ");
    fgets(myInvoice.description, 100, stdin);
    myInvoice.description[strcspn(myInvoice.description,"\n")]='\0'; 
    printf("Enter quantity: ");
    scanf("%d",&myInvoice.qtty);
    printf("Enter price per item: ");
    scanf("%f",&myInvoice.price_per_item);
    float invoiceAmount=calculateInvoiceAmount(myInvoice);
    printf("\nInvoice Details:\n");
    printf("Part Number: %s\n",myInvoice.part_num);
    printf("Part Description: %s\n",myInvoice.description);
    printf("Quantity: %d\n",myInvoice.qtty);
    printf("Price per Item: $%.2f\n",myInvoice.price_per_item);
    printf("Total Invoice Amount: $%.2f\n",invoiceAmount);
    return 0;
}
