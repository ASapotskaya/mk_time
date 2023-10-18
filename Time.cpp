#include<iostream>
#include<time.h>
#include<Windows.h>
#include<math.h>
#include<conio.h>
#include<io.h>
#include <vector>
using namespace std;
enum Napravlenie { Up = 72, Left = 75, Right = 77, Down = 80, Enter = 13, esc = 27, space = 32 };
enum Color {
	Black = 0, Blue, Green, Cyan, Red,
	Magenta, Brown, LightGray, DarkGray, LightBlue = 9, LightGreen, LightCyan,
	LightRed, LightMagenta, Yellow, White
};

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	//time_t rtime;//текущее время в милисекундах
	//time(&rtime);//получаем текущее время
	//tm mytime;//структура для хранения данных про текущую дату
	//localtime_s(&mytime, &rtime);//расчленяем полученную дату на поля структуры
	//cout <<mytime.tm_year+1900<<"\t"<< mytime.tm_yday << "\t" << mytime.tm_mday << "\n";
	//char data[100];
	//asctime_s(data, 100, &mytime);//формируем строку, содержащую данные про дату
	//cout << "data = " << data << "\n";
	//strftime(data, 100, "%A,%b,%d", &mytime);
	//cout << "data = " << data << "\n";

	//mytime.tm_mday = 10;
	//mytime.tm_mon = 7;
	//mktime(&mytime);
	//strftime(data, 100, "%A,%b,%d", &mytime);
	//cout << "data = " << data << "\n";



//1.Узнайте сколько дней осталось до Нового Года.
 //   time_t rtime;//текущее время в милисекундах
	//time(&rtime);//получаем текущее время
	//tm mytime;//структура для хранения данных про текущую дату
	//localtime_s(&mytime, &rtime);
	//char data[100];
	//strftime(data, 100,"%A,%b,%d", &mytime);
	//cout << "Сегодня " << data << "\n";
	//int today = mytime.tm_yday;
	//mytime.tm_mday = 31;
	//mytime.tm_mon = 11;
	//mktime(&mytime);
	//cout << "Дней до нового года:" << mytime.tm_yday - today << endl;

//2.Узнайте сколько дней осталось до дня рождения пользователя.
	//cout << "Введите дату дня рождения: "<<endl;
	//int day, month;
	//
	//cout << "День: "; cin >> day;
	//cout << "\nМесяц: "; cin >> month;
	//mytime.tm_mday = day;
	//mytime.tm_mon = month - 1;
	//mktime(&mytime);
	//cout << "Дней до дня рождения: ";
	//if (mytime.tm_yday - today > 0)
	//{
	//	cout << mytime.tm_yday - today;
	//}
	//else //Если ДР уже был в этом оду - вывести сообщение и написать, что ДР будет в следующем году.
	//{
	//	cout << "ДР будет в следующем году";
	//}

//3. Пользователь указывает год.Найдите все пятницы 13 - е в этом году.
	//cout << "Введите год: ";
	int year;
	//cin >> year;
	//mytime.tm_year = year - 1900;
	//mytime.tm_mday = 13;
	//mytime.tm_mon = 0;
	//mktime(&mytime);
	//vector<tm> myfriday;
	//for (size_t i = 0; i < 12; i++)
	//{
	//	if (mytime.tm_wday == 5)
	//		myfriday.push_back(mytime);
	//		mytime.tm_mon++;
	//		mktime(&mytime);
	//}
	//for (size_t i = 0; i <myfriday.size(); i++)
	//{
	//	strftime(data, 100,"%b", &myfriday[i]);
	//	cout << "Пятница 13:  " << data << "\n";
	//}
	//	
	//Результат выведите в виде вектора дат.


//5. Пользователь указывает год, месяц и дату.Нужно определить какой это был день недели.
	//А также это прошлое / настоящее / будущее
	//cout << "Введите год: ";
	int month, day;
	//cin >> year;
	//cout << "\nВведите месяц: ";
	//cin >> month;
	//cout << "\nВведите день: ";
	//cin >> day;
	//time(&rtime);//получаем текущее время
	//localtime_s(&mytime, &rtime);
	//int ttoday;
	//ttoday = mytime.tm_yday;
	//mytime.tm_year = year-1900;
	//mytime.tm_mon = month-1;
	//mytime.tm_mday = day;
	//mktime(&mytime);
	//strftime(data, 100, "%A", &mytime);
	//cout << "День недели: " << data;
	//if (mytime.tm_yday-ttoday==0)
	//{
	//	cout << "\nЭто настоящее";
	//}
	//if (mytime.tm_yday - ttoday > 0)
	//{
	//	cout << "\nЭто будущее";
	//}
	//if (mytime.tm_yday - ttoday < 0)
	//{
	//	cout << "\nЭто прошлое";
	//}
//6 * .Пользователь указывает две даты.Нужно определить разницу между ними.
	////Разница должна формироваться в формати год : месяц: день
	//cout << "Введите год первой даты: ";
	//cin >> year;
	//cout << "\nВведите месяц первой даты: ";
	//cin >> month;
	//cout << "\nВведите день первой даты: ";
	//cin >> day;
	//int year1, month1, day1;
	//cout << "Введите год второй даты: ";
	//cin >> year1;
	//cout << "\nВведите месяц второй даты: ";
	//cin >> month1;
	//cout << "\nВведите день второй даты: ";
	//cin >> day1;
	//mytime.tm_year = year - 1900;
	//mytime.tm_mon = month-1;
	//mytime.tm_mday = day;
	//mktime(&mytime);
	//tm mytime2;
	//mytime2.tm_year = year1 - 1900;
	//mytime2.tm_mon = month1 - 1;
	//mytime2.tm_mday = day1;
	//mktime(&mytime2);


}