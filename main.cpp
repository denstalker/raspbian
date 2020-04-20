#include "version.h"
// #include <iostream>


#include <chrono>
#include <thread>
#include <iostream>
#include <ncurses.h> //подключаем библиотеку ncurses
using namespace std;

int main()
{ // инициализация (должна быть выполнена
	initscr();              // Инициализация и переход в curses режим
	printw("Hello World!"); // Напечатать строку в воображаемое окно
	printw("Hello World!"); // Напечатать строку в воображаемое окно
	refresh();              // Вывести на настоящий экран изменения
	getch();                // Ждать нажатие клавиши
	endwin();               // Освобождение памяти, переключение терминала в обычный режим
	return 0;
}
