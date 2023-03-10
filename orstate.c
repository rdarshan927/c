#include<stdio.h>

int main(){

    int z, x, c;
    printf("Enter value for z : ");
    scanf("%d", &z);
    printf("Enter value for x : ");
    scanf("%d", &x);
    printf("Enter value for c : ");
    scanf("%d", &c);
    if (c>x || c>z){
        printf("PASS\n");
        }
        else {
        printf("FAIL\n");}

    printf("Enter value for z : ");
    scanf("%d", &z);
    printf("Enter value for x : ");
    scanf("%d", &x);
    printf("Enter value for c : ");
    scanf("%d", &c);
    if (c>x || c>z){
        printf("PASS\n");
        }
        else {
    printf("FAIL\n");
        }

    return 0;
}
