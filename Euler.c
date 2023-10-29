#include<stdio.h>
#include<math.h>

#include "Euler.h"
#include "func.h"

unsigned long long Problem_1(const unsigned int value_, const int* multiples_, const unsigned int size_)
{
	unsigned long long sum = 0;

	for (unsigned int number = 0; number < value_; ++number)
	{
		for (unsigned int i = 0; i < size_; ++i)
		{
			if (number % multiples_[i] == 0)
			{
				sum += number;
				break;
			}

		}
	}
	return sum;
}


unsigned long long Problem_2(const unsigned int value_)
{
	unsigned long long sum = 0;
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;

	while (fib2 < value_)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}

		unsigned int prom = fib1;
		fib1 = fib2;
		fib2 = fib1 + prom;
	}

	return sum;
}



unsigned long long Problem_3(const unsigned long long value_)
{
	unsigned long long delmax_ = 0;
	unsigned long long del_ = 1;

	while (del_ < value_)
	{
		if (value_ % del_ == 0)
		{
			if (Prime(del_) == 1)
			{

				delmax_ = del_;
				printf("%llu\n", delmax_);

			}

		}
		del_ += 1;
	}
	return delmax_;

}

unsigned long long Problem_4()
{
	long long int resultmax = 0;
	for (unsigned int n_1 = 100; n_1 < 1000; ++n_1)
	{
		for (unsigned int n_2 = 100; n_2 < 1000; ++n_2)
		{
			unsigned int mult = n_1 * n_2;
			if (IsPalindrome(mult))
			{
				if (mult > resultmax)
					resultmax = mult;
			}
		}
	}
	return resultmax;
}

unsigned long long Problem_5(const unsigned int value_)
{	
	unsigned int number = 1;
	while (1)
	{
		bool flag = true;
		for (unsigned int del = 1; del <= value_; ++del)
		{
			if (number % del != 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
			return number;

		number++;
	}
}

unsigned long long Problem_6(value_)
{
	unsigned long long sum_square_fin = 0;
	unsigned long long square = 0;
	unsigned long long sum = 0;
	unsigned long long number_1 = 1;
	unsigned long long sum_square = 0;
	while (number_1 <= value_)
	{ 
		square+= number_1 * number_1;
		sum_square += number_1;
		number_1 += 1;
	}
	sum_square_fin = sum_square * sum_square;
	sum = sum_square_fin - square;
	return sum;
}

unsigned long long Problem_7()
{
	unsigned long long  count = 0;
	unsigned long long number = 1;
	unsigned long long del = 0;
	unsigned long long count_del = 0;
	while (count < 6)
	{
		while (del  < sqrt((double)number) + 1)
		{ 
			if (number % del == 0)
			{
				count_del += 1;
				del += 1;
				if (count_del == 2)
				{
					count += 1;
					number = number + 1;
                }
				else
				{
					number += 1;
				}

			}
		}
	}
	return number;
}






