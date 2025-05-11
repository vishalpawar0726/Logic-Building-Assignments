#include<stdio.h>

void PrintEven(int iNo)  
{  
    if(iNo <= 0)  
    {  
        return;  
    }  

    int iCount = 0;
    int iNum = 2;  

    while(iCount < iNo)
    {
        printf("%d ", iNum);
        iNum += 2;     
        iCount++;      
    }
    printf("\n");
}  

int main() 
{ 
    int iValue = 0; 

    printf("Enter number\n");
    
    scanf("%d", &iValue); 

    PrintEven(iValue); 

    return 0; 
}
