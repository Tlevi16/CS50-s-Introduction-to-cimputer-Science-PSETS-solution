#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long number = get_long("Number: ");

   

    int i1 = ((number / 1000000000000000) % 10); 
    int t1 = i1 * 2;
    int i2 = ((number / 100000000000000) % 10);
    int i3 = ((number / 10000000000000) % 10);
        int t3 = i3 * 2;     
    int i4 = ((number / 1000000000000) % 10);
    int i5 = ((number / 100000000000) % 10);
        int t5 = i5 * 2;
    int i6 = ((number / 10000000000) % 10);
    int i7 = ((number / 1000000000) % 10);
        int t7 = i7 * 2;
    int i8 = ((number / 100000000) % 10);
    int i9 = ((number / 10000000) % 10);
        int t9 = i9 * 2;
    int i10 = ((number / 1000000) % 10);
    int i11 = ((number / 100000) % 10);
        int t11 = i11 * 2;
    int i12 = ((number / 10000) % 10);
    int i13 = ((number / 1000) % 10);
        int t13 = i13 * 2;
    int i14 = ((number / 100) % 10);
    int i15 = ((number / 10) % 10);
        int t15 = i15 * 2;
    int i16 = (number % 10);

    // Luhns Alg
    // calculate sum of variable digits if > 9

    if (t1>9)
    {t1 = t1 - 9;}
    if (t3>9)
    {t3 = t3 - 9;}
    if (t5>9)
    {t5 = t5 - 9;}
    if (t7>9)
    {t7 = t7 - 9;}
    if (t9>9)
    {t9 = t9 - 9;}
    if (t11>9)
    {t11 = t11 - 9;}
    if (t13>9)
    {t13 = t13 - 9;}
    if (t15>9)
    {t15 = t15 - 9;}

    // check lunghs algo = true (0)
    // print card type 

    int sum = (t1+t3+t5+t7+t9+t11+t13+t15+i2+i4+i6+i8+i10+i12+i14+i16);  
    int check = (sum % 10);

    if (check != 0)
    printf("INVALID\n");
    else
    {
    // check type of card
        if(i1 == 0 && i2 == 3 && i3 == 4)
        {
            printf("AMEX\n");
        }
        else if(i1 == 0 && i2 == 3 && i3 == 7)
        {
            printf("AMEX\n");
        }
        else if (i1 == 5 && (i2 == 1 || i2 == 2 || i2 == 3 || i2 == 4 || i2 == 5))
        {
            printf("MASTERCARD\n");
        }
        else if (i1 == 4)
        {
            printf("VISA\n");
        }
        else 
            printf("INVALID\n");
    }
}