#include<iostream>
#include<ctime>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
#include<Windows.h>
using namespace std;
int menu()
{
	int a;
	do {
		cout << endl << endl << endl;
		cout << "**********************************************************************************************************************" << endl;
		cout << "\t\t\t\t\t\tПривет дорогой друг!" << endl;
		cout << "\t\t\t\t\t\t1.Начать игру " << endl;
		cout << "\t\t\t\t\t\t2.Информация об игре " << endl;
		cout << "\t\t\t\t\t\t3.Выход из игры " << endl;
		cout << "***********************************************************************************************************************" << endl;

		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << "***********************" << endl;
			system("cls");
			return 1;
		}
		case 2:
		{
			cout << "Ваша задача угадать слово. Слово вы можете найти с только ответив на вопрос. У вас 6 попыток " << endl;
			return 2;
		}
		case 3:
		{
			cout << "До встречи!!!" << endl;
			return 3;
		}
		default:
		{
			cout << "Выберите один из вариантов " << endl;
			break;
		}
		}
	} while (a != 3);
}

int words(int random) {
	switch (random)
	{
	case 1:
	{
		cout << "Кто есть мышей, а еще он пушистый (3 букв) " << endl;
		break;
	}
	case 2:
	{
		cout << "Что на дороге ездит и еще на чем люди передвигаются? (6 букв) " << endl;
		break;
	}
	case 3:
	{
		cout << "Где мама готовит дома еду? (5 букв) " << endl;
		break;
	}
	case 4:
	{
		cout << "Кто король зверей? (3 букв) " << endl;
		break;

	}
	case 5:
	{
		cout << "C помошью чего мы поднимаемся на многоэтожки? (4 букв)" << endl;
		break;
	}
	case 6:
	{
		cout << "Кем вам будет мама вашей мамы? (7 букв)" << endl;
		break;
	}
	case 7:
	{
		cout << "Кем вам будет папа вышей пыпы? (7 букв) " << endl;
		break;
	}
	case 8:
	{
		cout << "Продолжите фразу: Человек создан на подобии...  (4 букв)" << endl;
		break;
	}
	case 9:
	{
		cout << "Когда человеку плохо, куда нужно звонить? (6 букв) " << endl;
		break;
	}
	case 10:
	{
		cout << "Пчела что производит? (3 букв)" << endl;
		break;
	}
	case 11:
	{
		cout << "Как называют человека у которого много денег? (7 букв)" << endl;
		break;
	}
	case 12:
	{
		cout << "Что обмену и возврату не подлежит? (5 букв)" << endl;
		break;
	}
	case 13:
	{
		cout << "Что нужно заливать, чтобы машина ездила? (6 букв)" << endl;
		break;
	}
	case 14:
	{
		cout << "В темноте что нужно, чтобы стало светло? (4 букв)" << endl;
		break;
	}
	case 15:
	{
		cout << "Как называется игра королей? (6 букв)" << endl;
		break;
	}
	case 16:
	{
		cout << "С помошью чего копают большие и глубокие котлованы? (10 букв)" << endl;
		break;
	}
	case 17:
	{
		cout << "Самое житкое вещетсво на планете земля? (4 букв)" << endl;
		break;
	}
	case 18:
	{
		cout << "Что освещяет нашу планету? (6 букв)" << endl;
	}

	case 19:
	{
		cout << "Единое средство обмена в древние времена было? (6 букв)" << endl;
		break;
	}
	case 20:
	{
		cout << "Подземный транспорт как назвается? (5 букв) " << endl;
		break;
	}
	case 21:
	{
		cout << "Поезд на чем ездит? (4 буквы)" << endl;
		break;
	}

	case 22:
	{
		cout << "Как называется наша планета? (5 букв)" << endl;
		break;
	}

	case 23:
	{
		cout << "Если увидели преступника, кому должны звонить? (7 букв)" << endl;
		break;
	}

	case 24:
	{
		cout << "Cтатуя свободы в каком городе находится ? (6 букв)" << endl;
		break;
	}

	case 25:
	{
		cout << "Город в котором расположен голивуд? (10 букв) " << endl;
		break;
	}
	case 26:
	{
		cout << "Курица что несет? (4 букв) " << endl;
		break;
	}

	case 27:
	{
		cout << "Антоним огня (4 букв) " << endl;
		break;
	}

	case 28:
	{
		cout << "Кому звонят когда горит что-то? (8 букв) " << endl;
		break;
	}
	case 29:
	{
		cout << "Что надевают люди когда видят плохо? (5 букв) " << endl;
	}
	case 30:
	{
		cout << "На новый год кто дарит подарки детям? (8 букв) " << endl;
		break;
	}
	}
	return random;

	}

	string str(int random) {
		switch (random)
		{
		case 1:
		{
			string str{ "кот" };
			return str;
		}
		case 2:
		{
			string str2{ "машина" };
			return str2;
		}
		case 3:
		{
			string str3{ "кухня" };
			return str3;
		}
		case 4:
		{
			string str4{ "лев" };
			return str4;
		}
		case 5:
		{
			string str5{ "лифт" };
			return str5;
		}
		case 6:
		{
			string str6{ "бабушка" };
			return str6;
		}
		case 7:
		{
			string str7{ "дедушка" };
			return str7;
		}
		case 8:
		{
			string str8{ "бога" };
			return str8;
		}
		case 9:
		{
			string str9{ "доктор" };
			return str9;
		}
		case 10:
		{
			string str10{ "мед" };
			return str10;
		}
		case 11:
		{
			string str11{ "богатый" };
			return str11;
		}
		case 12:
		{
			string str12{ "время" };
			return str12;
		}
		case 13:
		{
			string str13{ "бензин" };
			return str13;
		}
		case 14:
		{
			string str14{ "свет" };
			return str14;
		}
		case 15:
		{
			string str15{ "шахмат" };
			return str15;
		}
		case 16:
		{
			string str16{ "эксковатор" };
			return str16;
		}
		case 17:
		{
			string str17{ "вода" };
			return str17;
		}
		case 18:
		{
			string str18{ "солнце" };
			return str18;
		}
		case 19:
		{
			string str19{ "золото" };
			return str19;
		}
		case 20:
		{
			string str20{ "метро" };
			return str20;
		}
		case 21:
		{
			string str21{ "рельс" };
			return str21;
		}
		case 22:
		{
			string str22{ "земля" };
			return str22;
		}
		case 23:
		{
			string str23{ "полиция" };
			return str23;
		}
		case 24:
		{
			string str24{ "ньюерк" };
			return str24;
		}
		case 25:
		{
			string str25{ "лосанжелес" };
			return str25;
		}
		case 26:
		{
			string str26{ "яйцо" };
			return str26;
		}
		case 27:
		{
			string str27{ "вода" };
			return str27;
		}
		case 28:
		{
			string str28{ "пожарным" };
			return str28;
		}
		case 29:
		{
			string str29{ "очки" };
			return str29;
		}
		case 30:
		{
			string str30{ "дедмороз" };
			return str30;
		}
		}

	}

	int ilustrator(int hits) {

		switch (hits) {

		case 1: {
			cout << "    ***************\n"
				"             |             *\n"
				"             |             *\n"
				"             |             *\n"
				"             |             *\n"
				"             O             *\n"
				"           / | \           *\n"
				"             |             *\n"
				"            / \            *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"*********************************\n"
				"*                               *\n";
			break;
		}

		case 2: {
			cout << "    ***************\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"             O             *\n"
				"           / | \           *\n"
				"             |             *\n"
				"            / \           *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"*********************************\n"
				"*                               *\n";
			break;
		}

		case 3: {
			"             ***************\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"             O             *\n"
				"           / | \           *\n"
				"             |             *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"*********************************\n"
				"*                               *\n";
			break;
		}

		case 4: {
			cout << "    ***************\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"             O             *\n"
				"             |             *\n"
				"             |             *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"*********************************\n"
				"*                               *\n";
			break;
		}

		case 5: {
			cout << "    ***************\n"
				"                           *\n"
				"                           *\n"
				"             O             *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"                           *\n"
				"*********************************\n"
				"*                               *\n";
			break;
		}

		case 6:
		{
			cout << "***************\n"
				"                       *\n"
				"                       *\n"
				"                       *\n"
				"                       *\n"
				"                       *\n"
				"                       *\n"
				"                       *\n"
				"                       *\n"
				"                       *\n"
				"                       *\n"
				"                       *\n"
				"************************\n"
				"*                               *\n";
			break;
		}

		}
		return hits;
		}
		bool processingword(char word, int random) {//Функция для обработки буквы на наличие в слове

			string basicstring = str(random);//Передаем слово в строку
			string string; //Строка куда будем передавать по буквунно слово
			stringstream ss(basicstring);//Создаем переменную куда передаем поток данных

			while (ss >> string) {//Цикл в котором указываем 

				for (char i = 0; i < string.size(); i++)//В цикле пробегаемся по всему слову для поиска буквы
				{
					if (word == string[i])//Если такая буква в слове есть 
					{
						return true;//Возвращаем тру
					}
				}
			}
			return false;//Если нет,то фолс
		}

		void missword(char word, string temp, int& hits) {//Функция для проверки повторения буквы в слове,в параметры передаем буквы,строку в которую записывались слова и количество попыток

			if (temp.find(word) == string::npos) {//Проверяем была ли буква в слове,если нет то убавляем количество попыток

				cout << "Не угадал,пробуй еще раз" << endl;
				(hits--);//Функция в которую передаем количество попыток,где потом выводится картинка
				cout << "Осталось" << hits << "попыток" << endl;
			}

			else
			{
				cout << "Эта буква уже называлась,в слове ее больше нет" << endl;//Если буква называлась возвращает строку
			}
		}

		void gameplace(int random) {//Основная функция игры

			int hits = 6;//Создали количество попыток
			::string string = str(random);//Передали в нашу строку выбранную строку,путем генерации
			::string copystring = string;//Строка которая нужна будет для сравнения угадано ли слово или нет
			::string temp;//Строка для сохранения угаданных букв
			::string::size_type position;//Переменная которая определяет позицию буквы в слове
			char word;
			words(random);//Функция для выбора слова путем генерации

			while (hits != 0)//Цикл в котором будут процессы до того пока количество попыток не будет равно нулю

			{
				cin >> word;

				position = string.find(word);//Находим позицию буквы в слове и запоминаем

				if (position == string::npos) {//Если буквы в слове нет или называлась ранее запускаем фукнцию для обработки

					missword(word, temp, hits);
				}

				else if (processingword(word, random)) {//Если буква угадана

					string.erase(find(string.begin(), string.end(), word)); //Удаляем ее из строки чтоб не повторялась
					cout << "Ты угадал букву!Продолжай!" << endl;
					temp.push_back(word);//Вставляем ее в нашу строку
					cout << temp << endl; //Выводим               

					if (copystring.size() == temp.size())//Если наша строка заполнилась нужными буквами и стала равна заданной строке то вывводим
					{

						cout << "Отлично!Ты угадал слово!" << endl;//Выводим само слово
						cout << copystring << endl;
						cout << endl;
						hits = 0;   //Передаем в цикл остановку

					}
				}
			}
		}

		int main()
		{
			setlocale(LC_ALL, "ru");
			srand(time(NULL));
			SetConsoleOutputCP(1251);
			SetConsoleCP(1251);

			while (menu() == 1) {//Цикл где идет проверка если пользователь ввел 1 то генерируем число во все функции и запускаем игровой цикл
				int random = 1 + rand() % 30;
				gameplace(random);
			}

		}