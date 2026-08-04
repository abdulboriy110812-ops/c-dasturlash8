#include <stdio.h>

void mashq1(void){
    int i = 1;
    int count = 0;
    while (i <= 100)
    {
         if (i % 2 == 0 && i % 7 == 0)
         {
            printf("%d",i);
            count++;
         }
         i++;
    }printf("%d",count);
    
}

void mashq2(void){
    int son;
    scanf("%d",&son);
    int yigindi = 0;
    do
    {
        yigindi += son % 10; 
        son = son / 10;
        
    } while (son > 0);
    
    printf("%d",yigindi);
    
}

int main(void)
{

    mashq1();
    mashq2();
   
    return 0;
}