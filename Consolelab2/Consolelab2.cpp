#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

struct Abiturient
{
	char FirstName[30], LastName[30];

	std::string SecondName;
	std::string Nation;
	std::string Gender;
	int Date[2];
	std::string Exam1;
	std::string Exam2;
	std::string Exam3;

	struct Address
	{
		int Index, House, Apartments;
		char Country[20], Region[30], Area[30], City[20], Street[20];
	}A;
};

void Find(Abiturient *man, char *LastName, int Number)
{
	for (int i = 0; i < Number; i++)
	{
		if (strcmp(LastName, man[i].LastName) == 0)
		{
			std::cout << "\n";
			std::cout << "FirstName: " << man[i].FirstName << "\n";
			std::cout << "SecondName: " << man[i].SecondName << "\n";
			std::cout << "LastName: " << man[i].SecondName << "\n";
			std::cout << "Day: " << man[i].Date[0] << "\n";
			std::cout << "Month: " << man[i].Date[1] << "\n";
			std::cout << "Year: " << man[i].Date[2] << "\n";
			std::cout << "Nation: " << man[i].Nation << "\n";
			std::cout << "Gender: " << man[i].Gender << "\n";
			std::cout << "Exam1: " << man[i].Exam1 << "\n";
			std::cout << "Exam2: " << man[i].Exam2 << "\n";
			std::cout << "Exam3: " << man[i].Exam3 << "\n";

		}
		else
		{
			std::cout << "\n";
			std::cout << "Correct your choice!" << "\n";
		}
	}
}


void InitMassive(Abiturient *man, int Number)
{
	std::cout << "\n";
	for (size_t i = 0; i < Number; i++)
	{
		std::cout << "First Name:" << "\n";
		std::cin >> man[i].FirstName;
		std::cout << "\n";

		std::cout << "Second Name:" << "\n";
		std::cin >> man[i].SecondName;
		std::cout << "\n";

		std::cout << "Last Name:" << "\n";
		std::cin >> man[i].LastName;
		std::cout << "\n";


		std::cout << "Date (day, month, year) :" << "\n";
		std::cin >> man[i].Date[0];
		std::cin >> man[i].Date[1];
		std::cin >> man[i].Date[2];
		std::cout << "\n";

		std::cout << "Nation:" << "\n";
		std::cin >> man[i].Nation;
		std::cout << "\n";
		std::cout << "Gender:" << "\n";
		std::cin >> man[i].Gender;
		std::cout << "\n";
		std::cout << "Exam1:" << "\n";
		std::cin >> man[i].Exam1;
		std::cout << "\n";
		std::cout << "Exam2:" << "\n";
		std::cin >> man[i].Exam2;
		std::cout << "\n";
		std::cout << "Exam3:" << "\n";
		std::cin >> man[i].Exam3;
		std::cout << "\n";

	}
}

void InitNewMassive(Abiturient *new_man, int Number, int Final)
{
	std::cout << "\n";
	for (size_t i = Number; i < Final; i++)
	{
		std::cout << "First Name:" << "\n";
		std::cin >> new_man[i].FirstName;
		std::cout << "\n";

		std::cout << "Second Name:" << "\n";
		std::cin >> new_man[i].SecondName;
		std::cout << "\n";
		std::cout << "Last Name:" << "\n";
		std::cin >> new_man[i].LastName;
		std::cout << "\n";



		std::cout << "Date (day, month, year) :" << "\n";
		std::cin >> new_man[i].Date[0];
		std::cin >> new_man[i].Date[1];
		std::cin >> new_man[i].Date[2];
		std::cout << "\n";
		std::cout << "Nation:" << "\n";
		std::cin >> new_man[i].Nation;
		std::cout << "\n";
		std::cout << "Gender:" << "\n";
		std::cin >> new_man[i].Gender;
		std::cout << "\n";
		std::cout << "Exam1:" << "\n";
		std::cin >> new_man[i].Exam1;
		std::cout << "\n";
		std::cout << "Exam2:" << "\n";
		std::cin >> new_man[i].Exam2;
		std::cout << "\n";
		std::cout << "Exam3:" << "\n";
		std::cin >> new_man[i].Exam3;
		std::cout << "\n";


	}
}

void DisplaySoldier(Abiturient man)
{
	std::cout << "\n";
	std::cout << "FirstName: " << man.FirstName << "\n";
	std::cout << "SecondName: " << man.SecondName << "\n";
	std::cout << "Day: " << man.Date[0] << "\n";
	std::cout << "Month: " << man.Date[1] << "\n";
	std::cout << "Year: " << man.Date[2] << "\n";
	std::cout << "Nation: " << man.Nation << "\n";
	std::cout << "Gender: " << man.Gender << "\n";
	std::cout << "Exam1: " << man.Exam1 << "\n";
	std::cout << "Exam2: " << man.Exam2 << "\n";
	std::cout << "Exam3: " << man.Exam3 << "\n";

}

void DisplayNewArray(Abiturient *new_man, int Final)
{
	for (size_t i = 0; i < Final; i++)
	{
		DisplaySoldier(new_man[i]);
	}
}

void DisplayNewSoldier(Abiturient new_man)
{
	std::cout << "\n";
	std::cout << "FirstName: " << new_man.FirstName << "\n";
	std::cout << "SecondName: " << new_man.SecondName << "\n";
	std::cout << "Day: " << new_man.Date[0] << "\n";
	std::cout << "Month: " << new_man.Date[1] << "\n";
	std::cout << "Year: " << new_man.Date[2] << "\n";
	std::cout << "Nation: " << new_man.Nation << "\n";
	std::cout << "Gender: " << new_man.Gender << "\n";
	std::cout << "Exam1: " << new_man.Exam1 << "\n";
	std::cout << "Exam2: " << new_man.Exam2 << "\n";
	std::cout << "Exam3: " << new_man.Exam3 << "\n";
}


void DisplayArray(Abiturient *man, int Number)
{
	for (size_t i = 0; i < Number; i++)
	{
		DisplaySoldier(man[i]);
	}
}

void SWAP(Abiturient *man, int i, int j) // Реализация функции 
{
	Abiturient swap;

	swap = man[i];
	man[i] = man[j];
	man[j] = swap;
}

void NameSort(Abiturient *man, int Number)
{
	for (int i = 0; i < Number; i++)
	{
		for (int j = i + 1; j < Number; j++)
		{
			if (strcmp(man[i].SecondName.c_str(), man[j].SecondName.c_str()) > 0)
			{
				SWAP(man, i, j);
			}
		}
	}
}
void DateSort(Abiturient *man, int Number)
{
	for (size_t i = 0; i < Number + 1; i++)
	{
		for (size_t j = i + 1; j < Number; j++)
		{
			if (man[i].Date[2] == man[j].Date[2])
			{
				if (man[i].Date[1] == man[j].Date[1])
				{
					if ((man[i].Date[0] > man[j].Date[0]) || (man[i].Date[0] < man[j].Date[0]))
					{
						SWAP(man, i, j); // вызов функции, меняющей местами студентов по дате
					}
				}
				else if (man[i].Date[1] > man[j].Date[1])
				{
					SWAP(man, i, j);
				}
			}
			else if (man[i].Date[2] > man[j].Date[2])
			{
				SWAP(man, i, j);
			}
		}
	}
}

int main()
{
	char LastName[30]; // Для поиска конкретного cтудента в структуре (используется в функции Find)

	short Number;

	std::cout << "Press the number of abiturients: " << "\n";
	std::cin >> Number;

	Abiturient *man = new Abiturient[Number];

	std::cout << "\n";
	std::cout << "Enter the information about Abiturient: " << "\n";
	InitMassive(man, Number);

	std::cout << "\n";
	std::cout << "This is your list of Abiturientss: " << "\n";
	DisplayArray(man, Number);

pointer:

	int choice = 0;

	std::cout << "\n";
	std::cout << "What do you want to do?" << "\n" << "1. Sort" << "\n" << "2. Add new information" << "\n" << "3. Find the Abiturient" << "\n" << "4. Exit" << "\n";
	std::cin >> choice;

	if (choice == 1)
	{
		int choice2 = 0;

	pointer2:

		std::cout << "\n";
		std::cout << "What sort do you want?" << "\n" << "1. Name sort" << "\n" << "2. Date sort" << "\n" << "4. Exit" << "\n";
		std::cin >> choice2;

		if (choice2 == 1)
		{
			NameSort(man, Number);
			std::cout << "\n";
			std::cout << "Your new list: " << "\n";
			DisplayArray(man, Number);
			goto pointer2;
		}
		else if (choice2 == 2)
		{
			DateSort(man, Number);
			std::cout << "\n";
			std::cout << "Your new list: " << "\n";
			DisplayArray(man, Number);
			goto pointer2;
		}
		else if (choice2 == 3)
		{
			goto pointer;
		}
		else
		{
			std::cout << "\n";
			std::cout << "Correct your answer!" << "\n";
			goto pointer2;
		}
	}
	else if (choice == 2)
	{
		int Add_Number = 0;
		int Final = 0;

		std::cout << "\n";
		std::cout << "How many abiturients do you want to add?" << "\n";
		std::cin >> Add_Number;

		Final = Number + Add_Number;

		Abiturient *new_man = new Abiturient[Final];

		for (size_t i = 0; i < Number; i++)
		{
			new_man[i] = man[i];
		}

		InitNewMassive(new_man, Number, Final);

		std::cout << "\n";
		std::cout << "Your new list: " << "\n";
		DisplayNewArray(new_man, Final);

		delete[] new_man;
	}
	else if (choice == 3)
	{
		std::cout << "\n";
		std::cout << "Enter the LastName:" << "\n";
		std::cin >> LastName;
		Find(man, LastName, Number);
		goto pointer;
	}
	else if (choice == 4)
	{
		return 0;
	}
	else
	{
		std::cout << "\n";
		std::cout << "Correct your answer! " << "\n";
		goto pointer;
	}
	delete[] man;
}

