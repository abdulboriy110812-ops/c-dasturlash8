#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define PI 3.14159

// int son_qoshish(int a, int b)
// {
//     return a + b;
// }

// int son_ayirish(int a, int b)
// {
//     return a - b;
// }

// int son_kopaytirish(int a, int b)
// {
//     return a * b;
// }

// int son_bolish(int a, int b)
// {
//     return a / b;
// }

// void mashq1(void)
// {
//     printf("Qoshish:%d\n", son_qoshish(9, 10));
//     printf("Ayirish:%d\n", son_ayirish(19, 9));
//     printf("Bolish:%d\n", son_bolish(64, 8));
//     printf("Kopaytirish:%d\n\n", son_kopaytirish(4, 2));
// }

// double doira_hisoblash(double r)
// {
//     return PI * r * r;
// }

// double tortburchak_hisoblash(double w, double h)
// {
//     return w * h;
// }

// double uchburchak_hisoblash(double b, double h)
// {
//     return 0.5 * b * h;
// }

// double trapesiya_hisoblash(double a, double b, double h)
// {
//     return (a + b) * h / 2;
// }

// double romb_hisoblash(double d1, double d2)
// {
//     return d1 * d2 / 2;
// }

// void mashq2(void)
// {
//     printf("Doira:%.2f\n", doira_hisoblash(8));
//     printf("Tortburchak:%.2f\n", tortburchak_hisoblash(19, 9));
//     printf("Uchburchak:%.2f\n", uchburchak_hisoblash(64, 8));
//     printf("Trapesiya:%.2f\n", trapesiya_hisoblash(4, 2, 9));
//     printf("Romb:%.2f\n\n", romb_hisoblash(4, 2));
// }

// int a_va_b_engkatta(int a, int b)
// {
//     if (a > b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

// int a_va_b_engkichik(int a, int b)
// {
//     if (a < b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

// int a_b_c_engkatta(int a, int b, int c)
// {
//     a_va_b_engkatta(a_va_b_engkatta(a, b), c);
// }

// int a_b_c_engkichik(int a, int b, int c)
// {
//     a_va_b_engkichik(a_va_b_engkichik(a, b), c);
// }

// void mashq3(void)
// {
//     printf("a va b ortasidagi eng katta son:%d\n", a_va_b_engkatta(10, 7));
//     printf("a va b ortasidagi eng kichik son:%d\n", a_va_b_engkichik(10, 7));
//     printf("a,b,c ortasidagi eng katta son:%d\n", a_b_c_engkatta(10, 7, 9));
//     printf("a,b,c ortasidagi eng kichik son:%d\n\n", a_b_c_engkichik(10, 7, 5));
// }

int get_random_number()
{
    srand(time(NULL));
    int random_num = rand();
    int min = 1;
    int max = 10;
    int number = (rand() % (max - min + 1)) + min;

    return number;
}

void help()
{
    printf("O'yin shartlari\nKompyuter tasodifiy son oyladi,siz uni topishingiz kerak.toxtash:0\n");
}

void mashq4(void)
{
    help();
    int t_son = get_random_number();
    int imkoniyat = 2;
    while (1)
    {
        int usertaxmin;
        printf("\nSon kiriting:\n");
        scanf("%d", &usertaxmin);

        if (usertaxmin == t_son)
        {
            printf("Yutdingiz\n");
            break;
        }
        else if (imkoniyat == 0)
        {
            printf("Sizning imkoniyatingiz tugadi\n");
            break;
        }

        else if (usertaxmin == 0)
        {
            printf("Oyin toxtatildi\n");
            break;
        }
        else if (usertaxmin > t_son)
        {
            printf("Kichikroq son kiriting va sizda qolgan imkoniyat: %d\n", imkoniyat);
        }
        else if (usertaxmin < t_son)
        {
            printf("Kattaroq son kiriting va sizda qolgan imkoniyat: %d", imkoniyat);
        }
        imkoniyat -= 1;
    }
}

int qoshish(int a, int b)
{
    return a + b;
}

int ayirish(int a, int b)
{
    return a - b;
}

int kopaytirish(int a, int b)
{
    return a * b;
}

int bolish(int a, int b)
{
    return a / b;
}

void mashq5(void)
{
    printf("Qoida:\nSonlar ni oqshish uchun +,\nSonlar ni ayirish uchun -,\nSonlar ni kopaytirish uchun *,\nSonlarni bolish uchun / \n");
    int son1;
    printf("Son 1ni kiriting:");
    scanf(" %d", &son1);
    int son2;
    printf("Son 2ni kiriting:");
    scanf(" %d", &son2);
    char operator;
    printf("+,-,*,/ Tanlang:");
    scanf(" %c", &operator);
    int qoshuv = qoshish(son1, son2);
    int ayiruv = ayirish(son1, son2);
    int kopaytiruv = kopaytirish(son1, son2);
    int boluv = bolish(son1, son2);

    if (operator == '+')
    {

        printf("Sonlar yigindisi:%d", qoshuv);
    }
    else if (operator == '-')
    {

        printf("Sonlar ayirmasi:%d", ayiruv);
    }
    else if (operator == '*')
    {

        printf("Sonlar kopaytmasi:%d", kopaytiruv);
    }
    else if (operator == '/')
    {

        printf("Sonlar bolinmasi:%d", boluv);
    }
}

int main(void)
{
    // mashq1();
    // mashq2();
    // mashq3();
    mashq4();
    mashq5();

    return 0;
}