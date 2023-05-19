#include <stdio.h>
struct book{
    char title[100];
    char author[100];
    int price;
    int pages;
};

void user_input(struct student a[], int n){
    for (int i = 0; i< n; i++){
        printf("Enter Book %d Title:",i+1);
        scanf("%s",a[i].title);
        printf("Enter Book %d Author:",i+1);
        scanf("%s",a[i].author);
        printf("Enter Book %d Price:",i+1);
        scanf("%d",&a[i].price);
        printf("Enter Book %d Pages:",i+1);
        scanf("%d",&a[i].pages);
        printf("\n");
    }
}

void display_records(struct student a[], int n){
    for (int i = 0; i< n; i++){
        printf("Book %d Title: %s",i+1,a[i].title);
        printf("Book %d Author: %s",i+1,a[i].author);
        printf("Book %d Price: %d",i+1,a[i].price);
        printf("Book %d Pages: %d",i+1,a[i].pages);
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter no of Students:");
    scanf("%d",&n);
    struct book b[n];
    user_input(b,n);
    display_records(b,n);
    return 0;
}