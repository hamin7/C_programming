//
//  main.c
//  Calculate_number1
//
//  Created by Hamin Lee on 2017. 4. 11..
//  Copyright © 2017년 Hamin Lee. All rights reserved.
//

#include<stdio.h>

int main (void)
{
    int num1, input, count, temp1, temp2;
    count=0;
    printf("Input any integer number : ");
    scanf("%d", &input);
    if(input>0){
        for(num1=1 ; num1 < input ; num1++){
            temp1=num1;
            while(1){
                temp1=temp1/10;
                temp2=temp1%10;
                if(temp2==1)
                    count++;
                if(temp1<10)
                    break;
                
            }
            temp2=num1%10;
            if(temp2==1)
                count++;
        }
    }
    
    printf("the number of 1 is %d\n",count);
    return 0;
}
