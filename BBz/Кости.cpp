#include <conio.h>
#include <time.h>
#include <iostream>

using namespace std;



int main()
{
	srand(time(0));
	setlocale(LC_ALL, "rus");
	char resh;
	int igr1, igr2, igr1s, igr2s;
	
	do {
		cout << "-----------------------------------" << endl;


		//Вывод 
		{
			igr1s = 0;
		igr2s = 0;
		cout << "|";
		cout << "Игрок 1   Игрок 2                |" << endl;
		igr1 = rand() % 6 + 1;
		igr2 = rand() % 6 + 1;
		cout << "|";
		cout << igr1 << "         " << igr2 << "       -Первый бросок |" << endl;

		igr1s = igr1s + igr1;
		igr2s = igr2s + igr2;

		igr1 = rand() % 6 + 1;
		igr2 = rand() % 6 + 1;
		cout << "|";
		cout << igr1 << "         " << igr2 << "       -Второй бросок |" << endl;
		igr1s = igr1s + igr1;
		igr2s = igr2s + igr2;

		igr1 = rand() % 6 + 1;
		igr2 = rand() % 6 + 1;
		cout << "|";
		cout << igr1 << "         " << igr2 << "       -Третий бросок |" << endl;
		igr1s = igr1s + igr1;
		igr2s = igr2s + igr2;
		cout << "|                                 |" << endl;
		
		}
		if (igr1s > igr2s)
		{
			cout << "|Первый игрок победил             |" << endl;
		}
		else
			if (igr1s < igr2s)
			{
				cout << "|Второй игрок победил             |" << endl;
			}
			else
				cout << "|Ничья                            |" << endl;
		cout << "|                                 |" << endl;
		cout << "|Хотите сыграть повторно?  Y/N    |" << endl;
		cout << "-----------------------------------" << endl;
		cin >> resh;
		system("cls");

	} while (resh == 'Y'|| resh=='y');
	cout << "-------------------------------------------" << endl;
	cout << "|                GAME OVER                |" << endl;
	cout << "-------------------------------------------" << endl;
	system("pause");
}

