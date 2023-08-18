//class template version 5.0 //07.07.2023//
#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <algorithm>
#include <conio.h>
#include <exception>

//My own headers
//#include "Task_1.h"

// Class Work 18.08.2023 Exception

/**
*
* 1. Errors:
*	1.1 Runtime (������������ ������� -> ����������� �������, ��������� � ����� ������)
*	1.2 User-define
*
* 2. Exceptions:
*	2.1 Runtime
*	2.2 Domain
*	2.3 Logic
*
* ������� ����� ������ � ������������
* #include <exception>
*
*
*/

int ExeptDivide(int a, int b);
void F00(int a);

//Task 2 Exceptions
void Task_2()
{
	try
	{
		//ExeptDivide(2, 0);
		//NoexceptSumm(2, 3);
		F00(-1);
	}
	catch (int a) 
	{
		std::cerr << "\nsomething wrong" << "\tError code: " << a; 		
	}
	// ������������� catch � ������� ���������� ������������� ������� catch
	catch (std::range_error& exc_obj) 
	{
		std::cerr << "\nsomething wrong" << "\tError code: " << exc_obj.what();

	}
	catch (std::exception& exc_obj)
	{
		std::cerr << "\nsomething wrong" << "\tError code: " << exc_obj.what();

	}

	
}
// noexcept - ������ �� throw ����������
int NoexceptSumm(int a, int b) noexcept
{
	throw 1;
	return a + b;
}
int ExeptDivide(int a, int b)
{
	if (!b)
	{
		throw 1;
	}

	return a / b;
}
void F00(int a)
{	
	if (a < 0)
	{
		throw std::range_error("\narg less zero");
	}
	int* ptr = new int[a]; // ��� a < 0 - ������������ ��������� ������

	delete[] ptr;

	throw std::exception("message");
}
//Task 3
void Task_3()
{

}


// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
	srand(time(NULL));


	//Task_1();
	Task_2();
	Task_3();





	std::cout << "\n\n";
	//system("pause");	
	_getch();
}


