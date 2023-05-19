#include <stdio.h>
struct student{
    char name[100];
    long regno;
    int mark;
};

void user_input(struct student a[], int n){
    for (int i = 0; i< n; i++){
        printf("Enter Student %d Name:",i+1);
        scanf("%s",a[i].name);
        printf("Enter Student %d Register Number:",i+1);
        scanf("%ld",&a[i].regno);
        printf("Enter Student %d Mark:",i+1);
        scanf("%d",&a[i].mark);
        printf("\n");
    }
}

void display_records(struct student a[], int n){
    for (int i = 0; i< n; i++){
        printf("Student %d Name: %s\n",i+1,a[i].name);
        printf("Student %d Register Number: %ld\n",i+1,a[i].regno);
        printf("Student %d Mark: %d\n",i+1,a[i].mark);
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter no of Students:");
    scanf("%d",&n);
    struct student s[n];
    user_input(s,n);
    display_records(s,n);
    return 0;
}