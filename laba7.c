#включить <stdio.h>
#включить <math.h>
int main(){
 поплавок pi, a, r;
 pi = 3,14;
 printf ("Введите значение a угла в градусах (0 < a < 360) ");
 scanf ("%f", &a);
 r = (с плавающей точкой)a*pi/180;
 printf ("Значение угла в радианах равно %f", r);
 возврат 0;
}

Задание 2 

#включить <stdio.h>
#включить <math.h>
int main(){
 поплавок pi, a, r;
 pi = 3,14;
 printf ("Введите значение a угла в радианах (0 < a < 2pi) ");
 scanf ("%f", &a);
 r = (плавающий)a*180/pi;
 printf ("Значение угла в градусах равно %f", r);
 возврат 0;
}

Задание 3

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    float x, a, b, y;
    printf ("Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.\n");
    printf ("Введите X вес конфет в кг ");
    scanf ("%f", &x);
    printf ("Введите цену A конфет за этот вес ");
    scanf ("%f", &a);
    printf ("Введите Y вес конфет в кг ");
    scanf ("%f", &y);
    b = (float)a/x;
    y = (float)y*b;
    printf ("Цена конфет за 1кг %f, Цена конфет за Y кг %f", b, y);
    return 0;
}

Задание 4

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    float v1, v2, s, t, a;
    printf ("Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. Определить расстояние между ними через T часов, если автомобили удаляются друг от друга\n");
    printf ("Введите скорость первого автомобиля в км/ч ");
    scanf ("%f", &v1);
    printf ("Введите скорость второго автомобиля в км/ч ");
    scanf ("%f", &v2);
    printf ("Введите расстояние между автомобилями в км ");
    scanf ("%f", &s);
    printf ("Введите время удаления автомобилей в ч ");
    scanf ("%f", &t);
    a = (float)t*v1 + (float)t*v2 + s;
    printf ("Расстояние между автомобилями стало %f", a);
    return 0;
}

Задание 5

#включить <stdio.h>
#включить <math.h>
#включить <stdlib.h>
int main(){
 поплавок b, a, x;
 printf ("Решить линейное уравнение A*x + B = 0\n");
 printf ("Введите коэффициент A (не равный нулю) ");
 scanf ("%f", &a);
 printf ("Введите коэффициент B ");
 scanf ("%f", &b);
 x = (с плавающей точкой)-b/a;
 printf ("Ответ: х = %f", x);
 возврат 0;
}

Задание 6

#включить <stdio.h>
#включить <math.h>
#включить <stdlib.h>
int main(){
поплавок a1, a2, b1, b2, c1, c2, x, y, a, b, c;
printf ("Найти решение системы линейных уравнений вида:\n");
printf ("A1*x + B1*y = C1\n");
printf ("A2*x + B2*y = C2\n");
printf ("Введите A1 ");
scanf ("%f", &a1);
printf ("Введите B1 ");
scanf ("%f", &b1);
printf ("Введите C1 ");
scanf ("%f", &c1);
printf ("Введите A2 ");
scanf ("%f", &a2);
printf ("Введите B2 ");
scanf ("%f", &b2);
printf ("Введите C2 ");
scanf ("%f", &c2);
a = a1*b2 - b1*a2;
b = c1*b2 - b1*c2;
c = a1*c2 - c1*a2;
x = (с плавающей точкой)b/a;
y = (плавающий)c/a;
printf ("Ответ: (%f", x);
printf (";%f", y);
printf (")" );
возврат 0;
}
