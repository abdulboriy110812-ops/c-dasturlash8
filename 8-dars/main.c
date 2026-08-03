#include <stdio.h>

void mashq1(void)
{
    int n = 12345;
    int count = 0;
    int yigindi = 0;
    int n2 = n;

    int teskarisonlar[5];
    int index = 0;

    while (n > 0)
    {
        yigindi += n % 10;
        n = n / 10;
        count++;
    }

    while (n2 > 0)
    {
        teskarisonlar[index] = n2 % 10;
        n2 = n2 / 10;
        index++;
    }

    printf("Son soni: %d\n", count);
    printf("Sonlar yigindisi: %d\n", yigindi);

    for (int i = 0; i < index; i++)
    {
        printf("%d", teskarisonlar[i]);
    }
}


void mashq2(void){
     int tanlov;
    do
    {
        printf("\n1.yangi fayl\n 2. ochish\n 3. saqlash\n 4. chop etish 5. chiqish");
       
        printf("\nTanlovingiz(1-5):");
        scanf("%d",&tanlov);
        switch (tanlov)
        {
        case 1:
            printf("Yangi fayl saqlandi");
            break;
        case 2:
            printf("ochildi");
            break;
        case 3:
            printf("saqlandi"); 
            break;       
        case 4:
            printf("chop etildi");
            break;
        case 5:
            printf("Chiqdingiz"); 
            break;
        default:
            break;
        }
        
    } while (tanlov != 5);
    
}

int main(void)
{

    mashq1();
    mashq2();
    // mashq3();
    // mashq4();
    // mashq5();
    // mashq6();
    // mashq7();

    return 0;
}
