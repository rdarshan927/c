#include<stdio.h>
int main(){

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int a = 0;
    while (a<num){
        printf("%d\n", a);
        a = a + 1;}

    return 0;
}
