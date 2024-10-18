// Assignment on sports shop

/*
To include features like:
customer id,
name
tel. no
type--- domestic, commercial,
units bought
*/ 
#include <stdio.h>
#include <stdlib.h> // used to assess random function 
#include <string.h>
#include <time.h>
char name;
int phone[10];
int re;
int i;
int section;
int badminton;
int rackets;
int badminton_shoes;
int grips;
int cricket;
int bat;
int ball;
int stumps;
int football;
int footballs;
int net;
int jersy;
int total;
int final_price;


// Function for customer id
void name_customer(){
    printf("Please enter your name\n");
    scanf("%s", &name);    
}
/*
discount for old,


*/
// function for phone number
void phone_number(){
    printf("Please enter your phone number");
    scanf("%d", &phone);

}

// function for customer id
void customer_id(){
    //birth date
    phone_number();
    int birth_date;
    printf("Please enter your birth date\n");
    printf("DD/MM/YY\n");
    scanf("%d", &birth_date);
    
    printf("Your customer id is---%d %d\n",phone,  birth_date );

    
    
}
void current_date(){
    

    time_t t;   // not a primitive datatype
    time(&t);

    printf("\n %s", ctime(&t));
    

}
// function for bill generation 


void bill(){

    /*
    #include <stdio.h>
int section;
int badminton;
int rackets;
int badminton_shoes;
int grips;
int cricket;
int bat;
int ball;
int stumps;
int football;
int footballs;
int net;
int jersy;
int total;
// function that generates bill
/*
for generating bill we require products, price, amount
*/

    


    printf("Please select the section of sports utilities you want to go for\n");
    printf("1) Badminton\n2) Cricket\n3) Football");
    scanf("%d", &section);
    if(section==1){
        printf("Welcome to the section of Badminton\n");
        printf("We have 1)rackets,\n 2)badminton shoes,\n 3)grips\n ");
        printf("Please enter the number for the product that you want to buy\n");
        scanf("%d",&badminton);
        badmintons:
        if(badminton==1){
            printf("It will cost you 2000 rupees\n");
            printf("How many rackets you are looking for\n");
            scanf("%d", &rackets);
            total = rackets*2000;
        }
        else if(badminton==2){
            printf("It will cost you 1500 rupees\n");
            printf("How many shoes you want to buy\n");
            scanf("%d", &badminton_shoes);
            total = badminton_shoes*1500;
        }
        else if(badminton==3){
            printf("It will cost you 70 rupees\n");
            printf("How many grips do you want to buy\n");
            scanf("%d",&grips);
            total = 70*grips;
        }
        else{
            printf("It was an invalid input\n");
            goto badmintons;
        }
        printf("Your bill is----%d\n",total);
    }
     if(section==2){
        printf("Welcome to the section of Cricket\n");
        printf("We have 1)bat,\n 2)ball,\n 3)stumps\n ");
        printf("Please enter the number for the product that you want to buy\n");
        scanf("%d",cricket);
        cricket:
        if(cricket==1){
            printf("It will cost you 2000 rupees\n");
            printf("How many bats you are looking for\n");
            scanf("%d", &bat);
            total = bat*2000;
        }
        else if(cricket==2){
            printf("It will cost you 1500 rupees\n");
            printf("How many shoes you want to buy\n");
            scanf("%d", &ball);
            total = ball*1500;
        }
        else if(cricket==3){
            printf("It will cost you 70 rupees\n");
            printf("How many grips do you want to buy\n");
            scanf("%d",&stumps);
            total = 700*stumps;
        }
        else{
            printf("It was an invalid input");
            goto cricket;
        }
         printf("Your bill is----%d\n",total);
    
      
    }
    // Code for another section
     if(section==3){
        printf("Welcome to the section of football\n");
        printf("We have 1)footballs,\n 2)net,\n 3)jersy\n ");
        printf("Please enter the number for the product that you want to buy\n");
        scanf("%d",&football);
        footballs:
        if(football==1){
            printf("It will cost you 2000 rupees");
            printf("How many footballs you are looking for\n");
            scanf("%d", &footballs);
            total = football*2000;
        }
        else if(football==2){
            printf("It will cost you 1500 rupees\n");
            printf("How many net you want to buy\n");
            scanf("%d", &net);
            total = net*1500;
        }
        else if(football==3){
            printf("It will cost you 400 rupees\n");
            printf("How many jersy do you want to buy\n");
            scanf("%d",&jersy);
            total = 400*jersy;
        }
        else{
            printf("It was an invalid input\n");
            goto footballs;
        }
        printf("Your bill is----%d\n",total);
        
    }
}
// function for customers
void new_customer(){
    int new;
    printf("are you visiting for first in the shop\n");
    printf("If yes please enter 1,\n");
    printf("If no please enter 0\n");
    scanf("%d", &new);

    switch (new)
    {
    case 0:
        
        
        
        for(i=0;i<1;i++){
            int value = rand() % (2+1);
             printf("You have %d",value);
              printf("points\n");
        printf("Do you want to reedem it now\n");
        printf("If yes type 5\n");
        scanf("%d", &re);
        if(re==5){
            printf("You have a discount of--%d rupees\n",value*100);
            printf("\n");
            
            final_price= total-value*100;
            if(total>=400){
            printf("%d",final_price);
            printf("Thank you for visiting!");}
            else{
                    printf("For discount you total price must be above 400");
                    printf("Your total bill is----%d",total);
            }
        }

        }
        
       
       
        break;
    case 1:
        
        break;    
    default:
        printf("Please enter valid input");
        break;
    }

}





// function to display the bill 
void display(){

    printf("                SPEEDZ SPORTS UTILITIES            \n");
    
    
    
    


    



}

int main(){
    
    
    name_customer();
    
    customer_id();    
    current_date();
    bill();
    display();
    new_customer();

return 0;   
}


    

