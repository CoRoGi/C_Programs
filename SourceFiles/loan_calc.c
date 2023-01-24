#include <stdio.h>

int main(void) 
{
    float loan, interest, payment, balance; 

    int months;

    int payments_made = 1;

    printf("Enter amount of loan: ");

    scanf("%f", &loan);

    printf("Enter interest rate: ");

    scanf("%f", &interest);
    
    printf("Enter monthly payment: ");

    scanf("%f", &payment);

    printf("Enter number of months payment will be made: ");

    scanf("%d", &months);

    balance = ( loan );

    interest = ( interest / 100.0f ) / 12.0f ;
   
    while ( months > 0 && balance > 0) { 

        balance = balance + ( balance * interest ) ;

        balance = ( balance - payment ) ;

        printf("Balance after %d month: %.2f \n", payments_made, balance);

        months-- ;
    
        payments_made++ ;

    }

    return 0;

}
