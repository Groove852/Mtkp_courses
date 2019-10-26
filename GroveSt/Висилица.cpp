#include <string> 
#include <iostream> 
#include <conio.h> 
#include <Windows.h>
#include <ctime>

using namespace std;

//Переменные
string word, mask;
char b;
char a[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' }, c[26];
int hp , K_hp , n = 0, dot = 0;
bool flag,flag1=false;


int library()
{
	srand(time(0));
	string l[7] = { "create","survival","pencilbox","foundation","preporation","determination","moonlight" };
	int i = 0 + rand() % (6 - 0 + 0);
	word = l[i];
	return i;

}

//Пасхалки
void eeg()
{
	char symbol = '\u005C';
	if (K_hp == 69)
	{
		//Sleep(5000);
		cout << "                                                  ___" << endl;
		cout << "                                                 |0_0|" << endl;
		cout << "                                                  " << symbol << "|/" << endl;
		cout << "                                                   |" << endl;
		cout << "                                                  / " << symbol;
	}
}

//Проверка слова на символы
int lit_check()
{
	do {
		cout << "                                               " << endl << endl << endl;
		cin >> word;
		for (int i = 0; i < word.size(); i++)
		{

			for (int j = 0; j < 26; j++)
			{
				flag = false;
				if (a[j] == word[i])
				{
					flag = true;

				}

				if (flag == true)
				{
					dot++;

				}

			}

		}
		if (dot == word.size())
		{
			flag1 = true;

		}
		else
		{
			cout << "                                              Введите слово ещё раз" << endl;
		}
	} while (flag1 == false);
	return 0;
}

//Вывод результата
int result()
{
	//Вывод результата
	system("cls");
	if (hp > 0)
	{
		cout << " _________________________________________________________________________________________________________" << endl;
		cout << "|                                                                                                         |" << endl;
		cout << "|                                              Ты победил :)                                              |" << endl;
		cout << "|_________________________________________________________________________________________________________|" << endl;


	}
	else
	{
		cout << " __________________________________________________________________________________________________________" << endl;
		cout << "|                                                                                                          |";
		cout << endl << "|                                             Ты проиграл :(                                               |" << endl << '|' << "                                                                                                          |";
		cout << endl << "|                                             Слово было:" << word << "                                              |" << endl;
		cout << "|__________________________________________________________________________________________________________|" << endl;
	}
	return 0;
}

//Приветствие
void text()
{
	//Приветсвие
	cout << endl << endl << endl << endl << endl << endl << endl << "                                             V I S I L I T S A" << endl << "                                               Game prod by " << endl << "                                  Thank you for donwload our bitch_program!!!" << endl << "                                            Sub on our instagrams.";
	Sleep(3000);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << "Under the direction of @pivlikov" << endl << "Main developers by @bbz.wtf" << endl << "Other develovers:" << endl << " @_.denis._.nov._;" << endl << "NikitaZ;" << endl << "Aelita" << endl << "Designed by @ultimaterov" << endl << endl << endl << endl << endl << "version 0.03.899.BETA";
	Sleep(5000);
	system("cls");
	Sleep(1000);

	//Загрузка игры
	cout << "Подождите завершения загрузки, мы знаем что вы хотите поиграть, но это крайне необходимая операция, которая ни на что не влияет." << endl << "Приносим свои извинения за неудобство!!!)" << endl;
	cout << "                                            1...";
	Sleep(2000);
	cout << "2...";
	Sleep(2000);
	cout << "3..." << endl;
	Sleep(2000);
	system("cls");

	//Примечание к игре
	cout << endl << endl << endl << "                                              П Р И М Е Ч А Н И Е" << endl << endl << endl << endl << endl << endl << endl << "1)Заранее обговорите тематику загаданного слова;" << endl << "2)Слово должно быть исключительно на анлийском языке;" << endl << "3)Играйте сугубо в свое удовольствие;" << endl << "4)Не мешайте 2-ому игроку отгадывать загаданное вами слово;" << endl << "5)Если вы не купили лицензию, соре, но это бан." << endl << endl << endl << endl << endl << endl;
	Sleep(5000);
	system("pause");
	system("cls");

	//начало игры
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "                                               Игра начинается...";
	Sleep(2000);
	system("cls");
}

//Создание маски слова 
string mask_cr()
{
	for (int i = 0; i < word.size(); i++)
	{
		mask += '_';
	}
	cout <<endl<<endl<<endl<< "                                                 | " << mask <<" |"<< endl;
	return mask;
}

//Игра
int word_check()
{
	flag = false;
	//Ввод буквы
	cin >> b;


	//Вывод букв, котырые уже вводились
	if (b != '?')
	{
		//Поиск буквы в слове
		for (int i = 0; i < mask.size(); i++)
		{
			//Открытие буквы
			if (word[i] == b)
			{
				//Проверка на повторение буквы
				if (mask[i] != b)
				{
					flag = true;

				}
				mask[i] = b;
			}
		}
		//Уменьшение хп из-за ошибки или повторения буквы
		if (flag == false)
		{
			hp = hp - 1;
		}
		system("cls");
		cout <<"                                                  | " << mask << " | " << endl << "   Увас осталось-" << hp << " HP" << endl;

	}
	else //Вывод букв, которые уже вводились
	{
		cout << c;
		n--;
	}

	c[n] = b;
	n++;

	return hp;
}

//Основной алгоритм
int main()
{
	setlocale(LC_ALL, "Russian");

	text();

	system("cls");
	cout << endl << endl << endl << endl << "                                              Введите количество жизней у игрока" << endl << endl;
	cin >> K_hp;
	hp = K_hp;
	system("cls");
	
	cout << "Введите кол-во игроков" << endl;
	int ply;
	cin >> ply;
	if (ply == 1)
	{
		
		library();
		system("cls");
		mask_cr();//Создание маски
	    word_check();
		
		
	}
	else{

		cout << "                                          Загадайте слово" << endl << endl << endl;
        lit_check();//Проверка слова на символs
		system("cls");//Чистка экрана
		mask_cr();//Создание маски
	}
	

	//Основной алгоритм игры
	for (hp; hp > 0;)
	{
		if (mask != word)
		{
			word_check();
		}
		else
		{
			break;
		}

	}
	result();
	eeg();
}








