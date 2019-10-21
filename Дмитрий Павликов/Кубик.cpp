#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string player;
	int a,b,c;
	cout << "Правила игры Кубик:"<<endl<<"Вводится имя игрока, после чего он трижды бросает кость."<<endl<<
		"Те же действия проделывает и второй игрок. "<<endl<<
		"Побеждает тот, у кого итоговое количество очков больше."<<endl<<"Удачи!"<<endl;
	c = 0;
	for (int i = 1;i < 3;i++)
	{
		b = 0;
		cout << "Введите имя игрока "<<i<<": ";
		cin >> player;
		srand(time(0));
		for (int j = 0;j < 3;j++)
			
		{
			a = 1 + rand() % (6 - 1 + 1);
			cout << a<<endl;
			b = b + a;	
	    }
		cout << b<<endl;
		if (b > c)
		{
			c = b;
		}
		
        
	}
	if (c == b)
	{
		cout << player << " победил(а).";
	}
	else
	{
		
		cout << player << " проиграл(а).";
	}
    
}

