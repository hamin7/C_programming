//
//  main.c
//  Armstrong_Number&Sorting&Decimal_to_Binary.
//
//  Created by Hamin Lee on 2017. 4. 23.
//  Copyright © 2017년 Hamin Lee. All rights reserved.
//

#include <stdio.h>

int Armstrong (int a) ;
int SortingRange (int first) ;
int Sorting (int first, int second, int third) ;
int Binary (int decimal) ;
int main (void)
{
    int num, input, first, second, third, decimal ;
    char yesorno ;
    printf("************************ \n");
    printf("1. Armstrong number identification \n");
    printf("2. Sorting (Ascending) \n");
    printf("3. Decimal to Binary \n");
    printf("4. Exit \n");
    printf("******************** \n");
    printf("Select menu \n");
    scanf("%d", &num);
    
    switch(num)
    {
        case 1:
            printf("Select menu: 1 \n");
            printf("Enter a positive integer: \n");
            scanf("%d", &a);
                while(a != 0)
                {
                    lastdigit = a%10;
                    sum = sum + lastdigit*lastdigit*lastdigit;
                    a = a/10;
                }
                return sum;
            if (sum == a)
                printf("%d is an Armstrong number \n", a);
            printf("Do you want to return to main menu? (y/n) \n");
    }
}
