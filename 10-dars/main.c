#include <stdio.h>

void mashq1(void)
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}

void mashq2(void)
{
    char name[100];
    int age;
    scanf("%s", name);
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("%s", name);
        printf(" can vote\n");
    }
    else
    {
        printf("%s", name);
        printf(" cannot vote\n");
    }
}

void mashq3(void)
{
    int score;
    scanf("%d", &score);

    if (score >= 90)
    {
        printf("A\n");
    }
    else if (score >= 80)
    {
        printf("B\n");
    }
    else if (score >= 70)
    {
        printf("C\n");
    }
    else if (score >= 60)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
}

void mashq4(){
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        
        printf("%d x %d = %d\n",n,i,n * i);
    }
    
}

int main(void)
{

    mashq1();
    mashq2();
    mashq3();
    mashq4();

    return 0;
}