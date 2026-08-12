#include <stdio.h>

void mashq1(void)
{
    char item[100];
    double price;
    int quantity;
    scanf("%s", item);
    scanf("%lf", &price);
    scanf("%d", &quantity);
    float total = price * quantity;

    printf("Item: %s\n", item);
    printf("Price:$ %.2f\n", price);
    printf("Quantity: %d\n", quantity);
    printf("Total:$ %.2f\n", total);
}

void mashq2(void)
{

    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);

    printf("%s\n", b);
    printf("%s\n", a);
}

void mashq3(void)
{
    double amount, rate;
    scanf("%lf", &amount);
    scanf("%lf", &rate);
 
    float reason = amount * rate;

    printf("Result: %.2f\n",reason);

}

void mashq4()
{
    double weight, height;
    scanf("%lf", &weight);
    scanf("%lf", &height);

    double bmi = weight / (height * height);
    printf("BMI: %.1f\n",bmi);
}

void mashq5(void)
{
    double price;
    int discount_percent;
    scanf("%lf", &price);
    scanf("%d", &discount_percent);

    float discount =  price * discount_percent / 100;
    float final_price = price - discount;

    printf("Discount: %.2f\n",discount);
    printf("Final price: %.2f\n",final_price);

}

void mashq6(void)
{
    double total;
    int people;
    scanf("%lf", &total);
    scanf("%d", &people);

    float result = total / people;

    printf("Each pays: %.2f\n",result);
}

int x_value(int i){
    return i - 1;

}

int y_value(int i){
    return i + 1;
    
}

int main(void)
{

    mashq1();
    mashq2();
    mashq3();
    mashq4();
    mashq5();
    mashq6();

    int userson;
    printf("Son kiriting:\n");
    scanf("%d",&userson);
    
    for (int i = 1; i < userson; i++)
    {
         int x = x_value(i);
         int y = y_value(i);
         printf("x:%d\ny:%d",x,y);
    }
    
   

    

    return 0;
}