#include <conio.h>
//#include "stdafx.h"
#include <fcntl.h>
#include <io.h>
#include <Windows.h>
#include <iostream>
#include <sstream>
#define _WIN32_WINNT 0x0500;


/*int wmain(int argc, wchar_t* argv[], wchar_t* envp[]) //https://msdn.microsoft.com/ru-ru/library/bky3b5dh.aspx?f=255&MSPPError=-2147217396
{   ////////////////////Переводим в Юникод
	_setmode(_fileno(stdout), _O_U16TEXT); // https://msdn.microsoft.com/ru-ru/library/tw4k6df8.aspx
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stderr), _O_U16TEXT);
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 8;
	cfi.dwFontSize.Y = 14;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy_s(cfi.FaceName, L"Lucida Console");
	SetCurrentConsoleFontEx( hout, false, &cfi);
	wcout << L"Testing unicode -- English -- Русский -- О•О»О»О·ОЅО№ОєО¬ -- EspaГ±ol.";
}*/

int main()
{
	char a = '\u0608';
	cout << a;
	//графическое отображение 
	POINT op;
	HWND hWnd = GetConsoleWindow();
	HDC hDC = GetDC(hWnd);
	SelectObject(hDC, GetStockObject(WHITE_PEN));

	MoveToEx(hDC, 100, 100, &op);
	LineTo(hDC, 100, 200);
	ReleaseDC(hWnd, hDC);

	//счётчик времени
	void otvet(void);
	{
		int otvet;
		unsigned tm = GetTickCount64();//считывание тиков, 10000 это 10сек
		cin >> otvet;//ввод ответа, если ответ дан более чем за 5сек то ты проиграл
		if ((tm = (GetTickCount64() - tm)) > 5000)
		{
			cout << "you lose" << endl;
		}
		else cout << "WIN";
	}
	
	//Ввод символа с клавы, прием программой и вывод сообщения при нажатии определенного символа
	int i_input;
	i_input=_getch();
	cout << i_input << endl;//какой номер кнопки на клаве
	switch (i_input)
	{
	case 106: cout << "dddd";//номер кнопки с клавиатуры
	}
	

}
