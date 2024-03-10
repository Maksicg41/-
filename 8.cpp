#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
        int k = 0;
        int num1, num2, num3;
        for (int i = 100;i <= 999;i++)
        {
            num1 = i / 100;  
            num2  = (i % 100) / 10;
            num3  = i % 10; 
            if (num1 == num3 || num3 == num2 || num2 == num1) k++;

        }
        std::cout << "Вывод: " << k << "\n";


        int n = 0;
        int num1, num2, num3;
        for (int i = 100;i <= 999;i++)
        {
            num1 = i / 100; //первая цифра
            num2 = i % 10; // третья цифра
            num3 = (i % 100) / 10; //вторая цифра
            if (num1 == num2 || num2 == num3 || num3 == num1) n++;

        }
        std::cout << "Какие - то числа : " << n << "\n";

        int i = 0; 
        int a = 0;
        int r;

        std::cout << "Введите число: ";
        std::cin >> r;

        while (r > 0)
        {
            if (r % 10 != 3 && r % 10 != 6)
            {
                a *= 10;
                a += r % 10;
            }
            r /= 10;
        }

        std::cout << "Полученное число: ";

        while (a > 0)
        {
            std::cout << a % 10;
            a /= 10;
        }
        std::cout << a;


        int number1, number2;
        std::cout << "Введите первое число\n ";
        std::cin >> number1;
        std::cout << "Введите второе число\n ";
        std::cin >> number2;

        for (int i = 1; i <= number1 && i <= number2; i++) 
        {
            if (number1 % i == 0 && number2 % i == 0)
                std::cout << i;
        }



        int s, b;
        std::cin >> s;
        b = s;
        int sum = 0;
        while ((b*2) > 0)
        {
            sum += b % 10;
            b /= 10;
        }
        if ((sum * sum * sum) == (s * s))
        {
            std::cout << "да";
        }
        else
        {
            std::cout << "нет";
        }
         
       
        int n;
        std::cout << "Введите число:";
        std::cin >> n;
        std::cout << "Делим данное число : ";
        n = (n < 0) ? -n : n;

        for (int i = -n; i <= n; i++) 
        {
    
            if (i == 0 || n % i == 0)
            {
                std::cout << i << ' ';
            }
        }
        std::cout << n;



        int num1;
        int num2;
        std::cout << "Введите первое число\n";
        std::cin >> num1;
        std::cout << "Введите второе число\n";
        std::cin >> num2;

        for (int i = 1; i <= num1 && i <= num2; i++)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                std::cout<< i << "\n";
            }
        }








































































	return 0;
}