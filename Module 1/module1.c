1. Module 1 covers topics of basics of linux , what is a terminal , console , shell etc. Then the basic linux commands like creating file and directory
how to move from one directory to another , the intro about variables keywords etc , operators - logical , relational, orde rof evaluation etc.

2.
#include <stdio.h>
int main() {
    float dist;
    printf("Enter the distance in kilometers: ");
    scanf("%f",&dist);
    printf("Distance in meters is %f mtrs\n",dist*1000);
    printf("Distance in feet is %f ft\n",dist*3280.84);
    printf("Distance in inches is %f inch\n",dist*39370.1);
    printf("Distance in centimeters is %f cntimtrs\n",dist*10000);
    return 0;
}
3.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number:\n ");
    scanf("%d",&num);
    printf("Absolute value of %d",abs(num));
    if(num %2 == 0){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }
    
    if(num < 0){
        printf("%d is negative",num);
    }
    else{
        printf("%d is positive",num);
    }
    
    return 0;
}


4.
#include<stdio.h>
int main()
{
        int a ;
        printf("Enter any year:\n");
        scanf("%d",&a);
        if(a%4==0&&a%100!=0||a%400==0)
        {
            printf("Leap year");
        }
        else{
                printf("Not a Leap year");
        }
}

5.
#include<stdio.h>
int main()
{
    int num, pos = 0, neg = 0;
    char option ='y';
    int zero = 0;
    
    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            pos++;
        }
        else if (num < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }

        printf("Enter the numbers again(y/n)? ");
        scanf(" %c", &choice); 

    }while(option == 'y');


    printf("\nPositive Numbers :%d\nNegative Numbers :%d\nZero :%d", pos, neg, zero);
}

6.
#include <stdio.h>

int main()
{
    int i;
    i=0;
    while (i<=255)
    {
    printf("%c is %d \t",i,i);
    i++;
}
return 0;
}

7.
#include<stdio.h>    
#include<stdlib.h>  
int main()
 {  
 	int bin[100],num,i,j;  
	int octa[100] , oct=1;
	printf("Number: ");    
	scanf("%d",&num); 
	int x = num;
	int k = 1;	
	for(i=0;num>0;i++)    
	{    
   		bin[i]=num%2;    
   		num=num/2;    
	} 	
	printf("Binary Conversion: \n");    
	for(i=i-1;i>=0;i--)    
	{    
   		printf("%d",bin[i]);    
	} 

	for(j=0;x>0;j++)    
	{    
   		octa[i]=x%8;    
   		x=x/8;    
 }

	for(j=k-1;j>=0;j--)    
	{    
   		printf("\nOctal Conversion %d\n",octa[j]); 
	}    

return 0;  
}  

8.
int main()  
{  
    int a=4,b=5,c=6,d=7;  
    for(a = 4;  a<= 7; a++)  
    {  
        for(b= 4; b<=7; b++)  
        {  
            for(c = 4; c<=7; c++)  
            { 
                for(d =4; d<=7; d++)  
                 {  
                if( a != b && b != c && c != d && a != d)  
                    printf("%d %d %d %d\n", a, b, c,d);  
            }  
        }  
    }  
}
    return 0;  
}  
