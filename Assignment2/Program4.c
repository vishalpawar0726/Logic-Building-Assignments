#include<stdio.h>

void Display(int iNo, int iFrequency)  
{
    int i = 0;

    // Make sure frequency is positive
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(i = 0; i < iFrequency; i++)
    {
        printf("%d ", iNo);  
    }
}

int main() 
{ 
    int iValue = 0; 
    int iCount = 0;

    printf("Enter number: "); 
    scanf("%d", &iValue); 

    printf("Enter frequency: "); 
    scanf("%d", &iCount); 

    Display(iValue, iCount); 

    return 0; 
}
