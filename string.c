#include <stdio.h>  
#include<string.h>
int main()  
{  
   
   int point=0;
   char ans1[20];  
   char ocean[20]={"pacific"};  
   int value;
   char colour[20]={"redblue"};
   printf("Name primary 2 colours\n");
char b[20];
char r[20];

printf("Enter first colour\n");
scanf("%s",&r);
printf("enter second colour\n");
scanf("%s",&b);
strcat(r,b);

    printf("two colours are (in concatenated format): %s\n",r);
       value=strcmp(r,colour);  
   if(value==0){
   printf("congratulations your answere is correct\n");  
   point=point+1;
   }
   else  {
   printf("oops! there is mistake\n");  
   
   }


char str[100];
printf("Enter rainbow colours(abreviation)\n");
scanf("%s",&str);
int len = strlen(str);
    printf("total number of colours in rainbow %d\n", len);
     
   if(len==7){
   printf("congratulations your answere is correct\n");  
   point=point+1;
   }
   else {
   printf("oops! there is mistake\n");  
   
    }  

   printf("what is the name of  biggest ocean on earth:\n ");  
   scanf("%s",&ans1);  
 
   // comparing both the strings using strcmp function  
   value=strcmp(ans1,ocean);  
   if(value==0){
   printf("congratulations your answere is correct\n");  
   point=point+1;
   }
   else  {
   printf("oops! there is mistake\n");  
   
   }

    char ans2[20];  
   char capital[20]={"delhi"};  
   printf("what is the name of capital of india : \n");  
   scanf("%s",&ans2);  
 
   // comparing both the strings using strcmp function  
   value=strcmp(ans2,capital);  
   if(value==0){
   printf("congratulations your answere is correct\n");  
   point=point+1;
   }
   else {
   printf("oops! there is mistake\n");  
   
    }  


    char ans3[20];  
   char zero[20]={"aaryabhatta"};  
   printf("what is the name of person who invented zero : \n");  
   scanf("%s",&ans3);  
 
   // comparing both the strings using strcmp function  
   value=strcmp(ans3,zero);  
  if(value==0){
   printf("congratulations your answere is correct\n");  
   point=point+1;
   }
   else  {
   printf("oops! there is mistake\n");  
   
    }
    printf("your total score is %d",point);


 char str1[20], str2[20];
    printf("Enter the colour: ");
    scanf("%s", str1);
    printf("\nString 1 = %s", str1);
    strcpy(str2, str1);
    printf("\nYour answer is = %s", str2);
    puts(str2);
return 0;
}
