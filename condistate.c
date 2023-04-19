#include<stdio.h>

int main(){

    int x;
    printf("Enter the value : ");
    scanf("%d", &x);

    if (x<70){
    printf("Order Confirmed\nThank YOU\n");}
        else {
        printf("Order Limit reached\nThank YOU\n");}

    printf("Enter the value : ");
    scanf("%d", &x);

    if (x<70){
    printf("Order Confirmed\nThank YOU\n");}
        else {
        printf("Order Limit reached\nThank YOU\n");}

    return 0;
}
