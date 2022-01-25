#включить <stdio.h>
int main()
{
поплавок a, b, c;
printf ("Введите число A ");
scanf ("%f", &a);
printf ("Введите число B ");
scanf ("%f", &b);
c = a;
a = b;
b = c;
printf ("Число А %f, Число В %f", a, b);
возврат 0;
}

Задание 2

#включить <stdio.h>
int main()
{
поплавок a, b, c, d, f;
printf ("Введите число A ");
scanf ("%f", &a);
printf ("Введите число B ");
scanf ("%f", &b);
printf ("Введите число C ");
scanf ("%f", &c);
d = a;
f = b;
a = c;
b = d;
c = f;
printf ("Число А %f, Число В %f, Число C %f", a, b, c);
возврат 0;
}

Задание 3

#включить <stdio.h>
int main()
{
поплавок a, b, c, d, f;
printf ("Введите число A ");
scanf ("%f", &a);
printf ("Введите число B ");
scanf ("%f", &b);
printf ("Введите число C ");
scanf ("%f", &c);
d = a;
f = b;
a = f;
b = c;
c = d;
printf ("Число А %f, Число В %f, Число C %f", a, b, c);
возврат 0;
}

Задание 4

#включить <stdio.h>
#включить <math.h>
int main()
{
поплавок x, y;
printf ("Введите значение х ");
scanf ("%f", &x);
y = 3 * pow(x,6) - 6 * pow(x,2) - 7;
printf ("Значение функции равно %f", y);
возврат 0;
}

Задание 5

#включить <stdio.h>
#включить <math.h>
int main()
{
поплавок x, y;
printf ("Введите значение х ");
scanf ("%f", &x);
y = 4 * pow((x-3),6) - 7 * pow((x-3),3) + 2;
printf ("Значение функции равно %f", y);
возврат 0;
}

Задание 6

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    printf("Введите число A ");
    scanf ("%f", &a);
    b = a * a;
    a = b * b;
    b = a * a;
    printf ("Число A в 8ой степени равно %f", b);
    return 0;
}

Задание 7

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Введите число A ");
    scanf ("%f", &a);
    b = a * a * a;
    c = b * b;
    a = b * c * c;
    printf ("Число A в 15ой степени равно %f", a);
    return 0;
}
