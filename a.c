#include<stdio.h>
int main()
{
    int a,b;
    printf("Welcome to Tims cafe\n");
    printf(" For coffee machine please enter 2 and for lights and ac please enter 3\n");
    scanf("%d",&a);
    scanf("%d",&b);

    if(a==2) {
        if(b==0){
            printf("the machine is off\n");
        }
        else if(b==1){
            printf("the machine is on\n");
        }
    }
    else if(a==3){
            if(b==0){
                printf("lights and ac are off\n");
            }
            else if(b==1){
                printf("the lights and ac are on\n");
                 }
    }
    
    
    else{
        printf("Error:Invalid input! Please enter 2 or 3\n");
    }
    return 0;
    }