#include <stdio.h>
#include <stdlib.h>
#include"Calc_pnc.h"
#include"Calc_geo.h"
int main()
{
    int ch, n, r, choice;
    printf("Choose the Functionality you want\n1: Permutation and Combination\n2: Geometry\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("Enter n: ");
                scanf("%d", &n);
                printf("Enter r (value should be less than n): ");
                scanf("%d", &r);
                printf("Choose operation :\n1: Permutation\n2: Combination\n");
                scanf("%d",&choice);
                if(choice==1)
                {
                    printf("Permutation = %ld\n", permutation(n,r));
                }
                else if(choice==2)
                {
                    printf("Combination = %ld\n", combination(n,r));
                }
                else
                {
                    printf("Wrong Operation chosen");
                    exit(0);
                }
                break;

        case 2: printf("Choose Shape:\n1: Rectangle\n2: Square\n3: Circle \n");
                scanf("%d",&choice);
                if(choice==1)
                {
                    Rectangle();
                }
                else if(choice==2)
                {
                    Square();
                }
                else if(choice==3)
                {
                    Circle();
                }
                else
                {
                    printf("Wrong Operation chosen");
                    exit(0);
                }
                break;
            default: exit(0);
        }
    return 0;
}
