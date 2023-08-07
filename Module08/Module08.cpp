
#include <iostream>

void CompterNegatifZeroaN(int p_debut)
{
	if (p_debut == 0) { std::cout << p_debut << std::endl; }

	else 
	{
		std::cout << p_debut << std::endl;
		CompterNegatifZeroaN(++p_debut);
	}  
}

void CompterNegatifNaZero(int n)
{
	if (n == 0) { std::cout << n << std::endl; }

	else
	{
		std::cout << n << std::endl;
		CompterNegatifNaZero(n + 1);
	}
}

void Modulo(int p_num1, int p_num2)
{
	if ((p_num1 - p_num2) < 0) std::cout << p_num1 << std::endl;

	else 
	{
		Modulo(p_num1 - p_num2, p_num2);
	}
}

int main()
{
	//CompterNegatifNaZero(-50);

	Modulo(11, 3);
	
}


