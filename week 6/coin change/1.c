#include <stdio.h>
int main ()
{
     int num_coin, coin_list[100], use_these[100], i, taka;

     printf("Enter number of total coin : ");
     scanf("%d", &num_coin);

     printf("\nEnter the coin in descending order: ");

     for(i=0; i< num_coin; i++)
     {
        scanf("%d", &coin_list[i]);

     }

     printf("\nEnter the amount : ");
     scanf("%d", &taka);

     for(i=0; i < num_coin; i++)
     {
         use_these[i] = taka / coin_list[i];
         taka %= coin_list[i];
     }

     printf("\nSolution: \n");

     for(i=0; i < num_coin; i++)
     {
        printf("%d coin %d times\n ", coin_list[i], use_these[i]);
     }
}
