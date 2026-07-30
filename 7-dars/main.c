#include <stdio.h>

void mashq1(void)
{

    int i = 0;
    int yigindi = 0;
    int juftson_soni = 0;
    int ortacha = 0; 
    while (i < 200)
    {
        i++;
        if (i % 2 == 0)
        {
            yigindi +=i;
            juftson_soni +=1;
            ortacha = yigindi / juftson_soni;
            printf("JUft sonlar: %d\n", i);

        }
        
    }
    printf("Yigindi: %d\n",yigindi);
    printf("ULarning soni: %d\n",juftson_soni);
    printf("Ortacha:%d\n",ortacha);
}


void mashq2(void)
{

    int i = 0;
    int yigindi = 0;
    int toqson_soni = 0;
    int ortacha = 0; 
    while (i < 200)
    {
        i++;
        if (i % 2 != 0)
        {
            yigindi +=i;
            toqson_soni +=1;
            ortacha = yigindi / toqson_soni;
            printf("Toq sonlar: %d\n", i);

        }
        
    }
    printf("Yigindi: %d\n",yigindi);
    printf("Toq sonlar soni%d\n",toqson_soni);
    printf("Ortacha: %d\n",ortacha);
}



void mashq3(void)
{

    int i = 0;
    int yigindi = 0;
    int son3_soni = 0;
    int ortacha = 0; 
    while (i < 200)
    {
        i++;
        if (i % 3 == 0)
        {
            yigindi +=i;
            son3_soni +=1;
            ortacha = yigindi / son3_soni;
            printf("3 ga bolinadigon sonlar: %d\n", i);

        }
        
    }
    printf("Yigindi: %d\n",yigindi);
    printf("ularning soni%d\n",son3_soni);
    printf("Ortacha: %d\n",ortacha);
}



void mashq4(void)
{

    int i = 0;
    int userson;
    printf("Son kiriting");
    scanf("%d",&userson);
    int yigindi = 0;
    int ortacha = 0; 
    int son = 0;
    while (i < userson)
    {
        i++;
        yigindi +=i;
        son +=1;
        

        
    }
    ortacha = yigindi / son;
    printf("Yigindi: %d\n",yigindi);
    printf("Ortacha: %d\n",ortacha);
}


void mashq5(void)
{
 
    int i = 0;
    int yigindi = 0;
    int son3va5_soni = 0;
    int ortacha = 0; 
    while (i < 200)
    {
        i++;
        if (i % 3 == 0 && i % 5 == 0)
        {
            yigindi +=i;
            son3va5_soni +=1;
            ortacha = yigindi / son3va5_soni;
            printf("3 ga va 5 ga bolinadigon sonlar: %d\n", i);

        }
        
    }
    printf("Yigindi: %d\n",yigindi);
    printf("ularnign soni soni%d\n",son3va5_soni);
    printf("Ortacha: %d\n",ortacha);
   
}


void mashq6(void)
{

    int i = 0;
    int userson;
    printf("Son kiriting");
    scanf("%d",&userson);
    int yigindi = 0;
    int yigindi1 = 0;
    int ortacha = 0; 
    int ortacha1 = 0;
    int son = 0;
    int son1 = 0;
    while (i < userson)
    {
        i++;
        if(i % 2 == 0){
           yigindi +=i;
           son +=1;
        }else{
           yigindi1 +=i;
           son1 +=1; 
        }
        
}
    ortacha = yigindi / son;
    ortacha1 = yigindi1 / son1;
    printf("juft sonlar yigindisi: %d\n",yigindi);
    printf("Toq sonlar yigindisi: %d\n",yigindi1);
    printf("JUft sonlar ortachasi: %d\n",ortacha);
    printf("JUft sonlar ortachasi: %d\n",ortacha1);
}

int main(void)
{

    mashq1();
    mashq2();
    mashq3();
    mashq4();
    mashq5();
    mashq6();

    return 0;
}
