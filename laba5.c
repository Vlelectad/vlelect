#включить <stdio.h>
#включить <math.h>
int main()
{
 поплавок x1, x2, y1, y2, a, b, a2, b2, s;
 printf ("Введите координату x1 ");
 scanf ("%f", &x1);
 printf ("Введите координату y1 ");
 scanf ("%f", &y1);
 printf ("Введите координату x2 ");
 scanf ("%f", &x2);
 printf ("Введите координату y2 ");
 scanf ("%f", &y2);
 // Нахождение расстояния с помощью теоремы Пифагора
 a = x2 - x1;
 b = y2 - y1;
 a2 = a * a;
 b2 = b * b;
 s = sqrt(a2 + b2);
 printf ("Расстояние между двумя точками равно %f", s);
 возврат 0;
}

Задание 2

#включить <stdio.h>
#включить <math.h>
#включить <stdlib.h>
int main()
{
 поплавок a, b, c, s1, s2, сумма;
 printf ("Введите число A ");
 scanf ("%f", &a);
 printf ("Введите число B ");
 scanf ("%f", &b);
 printf ("Введите число C ");
 scanf ("%f", &c);
 s1 = abs(c - a);
 s2 = abs(c - b);
 сумма = s1 + s2;
 printf ("Длина отрезка AC равна %f, Длина отрезка BC равна %f, Сумма длин отрезков равна %f", s1, s2, sum);
 возврат 0;
}

Задание 3 

#включить <stdio.h>
#включить <math.h>
#включить <stdlib.h>
int main()
{
 поплавок a, b, c, s1, s2, pr;
 printf ("Введите число A ");
 scanf ("%f", &a);
 printf ("Введите число C (находится между A и B) ");
 scanf ("%f", &c);
 printf ("Введите число B ");
 scanf ("%f", &b);
 s1 = abs(c - a);
 s2 = abs(b - c);
 pr = s1 * s2;
 printf ("Длина отрезка AC равна %f, Длина отрезка BC равна %f, Произведение длин отрезков равно %f", s1, s2, pr);
 возврат 0;
}

Задание 4

#включить <stdio.h>
#включить <math.h>
#включить <stdlib.h>
int main()
{
 поплавок x1, x2, y1, y2, a, b, p, s;
 printf ("Введите координату x1 ");
 scanf ("%f", &x1);
 printf ("Введите координату y1 ");
 scanf ("%f", &y1);
 printf ("Введите координату x2 ");
 scanf ("%f", &x2);
 printf ("Введите координату y2 ");
 scanf ("%f", &y2);
 a = abs(x2 - x1); // Нахождение сторон прямоугольника
 b = abs(y2 - y1);
 s = a * b;
 p = (a + b) * 2;
 printf ("Площадь прямоугольника равна %f, Периметр прямоугольника равен %f", s, p);
 возврат 0;
}

Задание 5

#включить <stdio.h>
#включить <math.h>
#включить <stdlib.h>
int main()
{
 поплавок x1, x2, x3, y1, y2, y3, a, b, c, p, s1, s;
 printf ("Введите координату x1 ");
 scanf ("%f", &x1);
 printf ("Введите координату y1 ");
 scanf ("%f", &y1);
 printf ("Введите координату x2 ");
 scanf ("%f", &x2);
 printf ("Введите координату y2 ");
 scanf ("%f", &y2);
 printf ("Введите координату x3 ");
 scanf ("%f", &x3);
 printf ("Введите координату y3 ");
 scanf ("%f", &y3);
 // Нахождение сторон треугольника
 a = sqrt((pow((x3 - x1),2) + pow((y3 - y1), 2)));
 b = sqrt((pow((x2 - x1),2) + pow((y2 - y1), 2)));
 c = sqrt((pow((x3 - x2),2) + pow((y3 - y2), 2)));
 if ((a+b>c) && (a+c>b) && (b+c>a)) // Проверяем, существует ли треугольник
    {
 p = (двойной)(a + b + c);
 s1 = (double)abs((x1 - x3)*(y2 - y3) - (x2 - x3)*(y1 - y3)); // Находим площадь с помощью матрицы
 s = s1/2;
 printf ("Площадь треугольника равна %f, Периметр треугольника равен %f", s, p);
    }
 ещё 
    {
 printf ("Треугольник не существует"); 
    }
 возврат 0;
}