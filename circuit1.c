// Program to calculate the ave marks and grade of the student

#include <stdio.h>
#include <ctype.h>
#include <string.h>




int main(){

    int mathematics, physics, chemistry, english, computer_science, prn, no_company;

    char name;


    int i = 0;

   

    printf("Please enter the number of companies that you want the help for\n");
    scanf("%d",&no_company);

     printf("Please enter the name of the company\n");
     scanf("%s", &name);
     name = toupper(name);


    printf("Following details are required in their percentage form\n\n");
    printf("1) Companies future target for proofit\n");
    printf("2) Companies last 5 year profit\n");
    printf("3) Companies Margin on product\n");
    printf("4) Companies return on equity\n");
    printf("5) Companies earning per share\n\n");
    printf("***All these details are available on the companies web-site***\n\n");

    for(i=0; i<no_company; i++)
    {
       

        printf("Please enter your companies share market number\n");
        scanf("%d", &prn);

        printf("Welcome to MMCOE Share Market Analysing System\n");

        printf("Please enter the Companies future target for proofit \n");
        scanf("%d", &mathematics);

        printf("Please enter the Companies last 5 year profit \n");
        scanf("%d", &physics);

        printf("Please enter the Companies Margin on product \n");
        scanf("%d", &chemistry);

        printf("Please enter the Companies return on equity\n");
        scanf("%d", &english);

        printf("Please enter the Companies earning per share \n");
        scanf("%d", &computer_science);
        /* code */

        int total_marks = mathematics + physics + chemistry + english + computer_science;
        int ave_marks = total_marks/5;
        int rating = ave_marks/10;

        printf("Your average profit is %d\n", ave_marks);

        if(ave_marks>=75){
            printf("Comapanies rating is %d\n", rating);
            printf("This company is good to go with\n");
            printf("Please hold the share after buying\n");
        }

        else if(ave_marks>=60){
            printf("Comapanies rating is %d\n", rating);
            printf("This Company is okay to go with\n");
            printf("Please keep checking the stock\n");
        }

        else if(ave_marks>=50){
            printf("Comapanies rating is %d\n", rating);
            printf("This stock posses some risk\n");
            printf("Please continously evaluate the stock readings if buyed\n");
        }
        else if(ave_marks>=40){
            printf("Comapanies rating is %d\n", rating);
            printf("We do not recommend this stock to be buyed at this stage\n");
            printf("Buy at your own risk\n");
        }
        else{
            printf("Comapanies rating is %d\n", rating);
            printf("So Sorry! This company cannot be buyed\n");
            printf("Please investv at your own risk\n");
            printf("This Company posses High Risk!\n");
        }

    printf("Thank you for using, MMCOE share market analyser");

        

    }
    

    






    return 0;
}

