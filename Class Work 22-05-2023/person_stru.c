#include <stdio.h>
struct Person{
    char name[100];
    int age;
    float height;
};

void user_input(struct student a[], int n){
    for (int i = 0; i< n; i++){
        printf("Enter Person %d Name:",i+1);
        scanf("%s",a[i].name);
        printf("Enter Person %d Age:",i+1);
        scanf("%d",&a[i].age);
        printf("Enter Person %d Height:",i+1);
        scanf("%f",&a[i].height);
        printf("\n");
    }
}

void display_records(struct student a[], int n){
    for (int i = 0; i< n; i++){
        printf("Person %d Name: %s\n",i+1,a[i].name);
        printf("Person %d Age: %d\n",i+1,a[i].age);
        printf("Person %d Height: %f\n",i+1,a[i].height);
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter no of Persons:");
    scanf("%d",&n);
    struct student s[n];
    user_input(s,n);
    display_records(s,n);
    return 0;
}