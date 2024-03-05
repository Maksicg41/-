#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int pcode, pQuantity, dcode, dQuantity;
	float pprise, dprise, total;
	std::cout << "Меню пиццерии(пицца и напитки):\n";
	std::cout << "1.Сырная - 10$\n";
	std::cout << "2.Пиперони - 12$\n";
	std::cout << "3.Гречиская - 11$\n";
	std::cout << "4.Хот - Дог - 13$\n";
	std::cout << "1.Сок - 3$\n";
	std::cout << "2.Coca cola - 2$\n";
	std::cout << "3.Pepsi- 1\n";

	std::cout << "введите заказ 1-4";
	std::cin >> pcode;
	std::cout << "введите количество кусочков пиццы";
	std::cin >> pQuantity;
	std::cout << "введите заказ 1-3";
	std::cin >> dcode;
	std::cout << "введите количество бутылок ";
	std::cin >> dQuantity;

	if (pcode == 1)
	{
		pprise = 10;
	}
	else if (pcode == 2)
	{
		pprise = 12;
	}
	else if (pcode == 3)
	{
		pprise = 11;
	}
	else if (pcode == 4)
	{
		pprise = 13;
	}
	else
	{
		std::cout << "неверный код пиццы повторите ввод";
	}
	if (dcode == 1)
	{
		dprise = 3;
	}
	else if (dcode == 2)
	{
		dprise = 2;
	}
	else if (dcode == 3)
	{
		dprise = 1;
	}
	 
	else
	{
		std::cout << "неверный код напитка повторите ввод";
	}

	if (dprise > 2 && dQuantity > 3)
	{
		total += (dprise * dQuantity) - ((dprise * dQuantity) * 0.15);
}
	else
	{
		total += dprise * dQuantity;
	}

	if (total > 50)
	{
		total -= total * 0.2;
	}

	int free = pQuantity / 5;
	total += (pprise * pQuantity) - (pprise * free);

	std::cout << "итогавая сумма вашего заказа составляет :" << total;


























return 0;
}





























