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
		cout << "\t\t\t\t\t\t������ ������� ����!" << endl;
		cout << "\t\t\t\t\t\t1.������ ���� " << endl;
		cout << "\t\t\t\t\t\t2.���������� �� ���� " << endl;
		cout << "\t\t\t\t\t\t3.����� �� ���� " << endl;
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
			cout << "���� ������ ������� �����. ����� �� ������ ����� � ������ ������� �� ������. � ��� 6 ������� " << endl;
			return 2;
		}
		case 3:
		{
			cout << "�� �������!!!" << endl;
			return 3;
		}
		default:
		{
			cout << "�������� ���� �� ��������� " << endl;
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
		cout << "��� ���� �����, � ��� �� �������� (3 ����) " << endl;
		break;
	}
	case 2:
	{
		cout << "��� �� ������ ����� � ��� �� ��� ���� �������������? (6 ����) " << endl;
		break;
	}
	case 3:
	{
		cout << "��� ���� ������� ���� ���? (5 ����) " << endl;
		break;
	}
	case 4:
	{
		cout << "��� ������ ������? (3 ����) " << endl;
		break;

	}
	case 5:
	{
		cout << "C ������� ���� �� ����������� �� �����������? (4 ����)" << endl;
		break;
	}
	case 6:
	{
		cout << "��� ��� ����� ���� ����� ����? (7 ����)" << endl;
		break;
	}
	case 7:
	{
		cout << "��� ��� ����� ���� ����� ����? (7 ����) " << endl;
		break;
	}
	case 8:
	{
		cout << "���������� �����: ������� ������ �� �������...  (4 ����)" << endl;
		break;
	}
	case 9:
	{
		cout << "����� �������� �����, ���� ����� �������? (6 ����) " << endl;
		break;
	}
	case 10:
	{
		cout << "����� ��� ����������? (3 ����)" << endl;
		break;
	}
	case 11:
	{
		cout << "��� �������� �������� � �������� ����� �����? (7 ����)" << endl;
		break;
	}
	case 12:
	{
		cout << "��� ������ � �������� �� ��������? (5 ����)" << endl;
		break;
	}
	case 13:
	{
		cout << "��� ����� ��������, ����� ������ ������? (6 ����)" << endl;
		break;
	}
	case 14:
	{
		cout << "� ������� ��� �����, ����� ����� ������? (4 ����)" << endl;
		break;
	}
	case 15:
	{
		cout << "��� ���������� ���� �������? (6 ����)" << endl;
		break;
	}
	case 16:
	{
		cout << "� ������� ���� ������ ������� � �������� ���������? (10 ����)" << endl;
		break;
	}
	case 17:
	{
		cout << "����� ������ �������� �� ������� �����? (4 ����)" << endl;
		break;
	}
	case 18:
	{
		cout << "��� �������� ���� �������? (6 ����)" << endl;
	}

	case 19:
	{
		cout << "������ �������� ������ � ������� ������� ����? (6 ����)" << endl;
		break;
	}
	case 20:
	{
		cout << "��������� ��������� ��� ���������? (5 ����) " << endl;
		break;
	}
	case 21:
	{
		cout << "����� �� ��� �����? (4 �����)" << endl;
		break;
	}

	case 22:
	{
		cout << "��� ���������� ���� �������? (5 ����)" << endl;
		break;
	}

	case 23:
	{
		cout << "���� ������� �����������, ���� ������ �������? (7 ����)" << endl;
		break;
	}

	case 24:
	{
		cout << "C����� ������� � ����� ������ ��������� ? (6 ����)" << endl;
		break;
	}

	case 25:
	{
		cout << "����� � ������� ���������� �������? (10 ����) " << endl;
		break;
	}
	case 26:
	{
		cout << "������ ��� �����? (4 ����) " << endl;
		break;
	}

	case 27:
	{
		cout << "������� ���� (4 ����) " << endl;
		break;
	}

	case 28:
	{
		cout << "���� ������ ����� ����� ���-��? (8 ����) " << endl;
		break;
	}
	case 29:
	{
		cout << "��� �������� ���� ����� ����� �����? (5 ����) " << endl;
	}
	case 30:
	{
		cout << "�� ����� ��� ��� ����� ������� �����? (8 ����) " << endl;
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
			string str{ "���" };
			return str;
		}
		case 2:
		{
			string str2{ "������" };
			return str2;
		}
		case 3:
		{
			string str3{ "�����" };
			return str3;
		}
		case 4:
		{
			string str4{ "���" };
			return str4;
		}
		case 5:
		{
			string str5{ "����" };
			return str5;
		}
		case 6:
		{
			string str6{ "�������" };
			return str6;
		}
		case 7:
		{
			string str7{ "�������" };
			return str7;
		}
		case 8:
		{
			string str8{ "����" };
			return str8;
		}
		case 9:
		{
			string str9{ "������" };
			return str9;
		}
		case 10:
		{
			string str10{ "���" };
			return str10;
		}
		case 11:
		{
			string str11{ "�������" };
			return str11;
		}
		case 12:
		{
			string str12{ "�����" };
			return str12;
		}
		case 13:
		{
			string str13{ "������" };
			return str13;
		}
		case 14:
		{
			string str14{ "����" };
			return str14;
		}
		case 15:
		{
			string str15{ "������" };
			return str15;
		}
		case 16:
		{
			string str16{ "����������" };
			return str16;
		}
		case 17:
		{
			string str17{ "����" };
			return str17;
		}
		case 18:
		{
			string str18{ "������" };
			return str18;
		}
		case 19:
		{
			string str19{ "������" };
			return str19;
		}
		case 20:
		{
			string str20{ "�����" };
			return str20;
		}
		case 21:
		{
			string str21{ "�����" };
			return str21;
		}
		case 22:
		{
			string str22{ "�����" };
			return str22;
		}
		case 23:
		{
			string str23{ "�������" };
			return str23;
		}
		case 24:
		{
			string str24{ "������" };
			return str24;
		}
		case 25:
		{
			string str25{ "����������" };
			return str25;
		}
		case 26:
		{
			string str26{ "����" };
			return str26;
		}
		case 27:
		{
			string str27{ "����" };
			return str27;
		}
		case 28:
		{
			string str28{ "��������" };
			return str28;
		}
		case 29:
		{
			string str29{ "����" };
			return str29;
		}
		case 30:
		{
			string str30{ "��������" };
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
		bool processingword(char word, int random) {//������� ��� ��������� ����� �� ������� � �����

			string basicstring = str(random);//�������� ����� � ������
			string string; //������ ���� ����� ���������� �� �������� �����
			stringstream ss(basicstring);//������� ���������� ���� �������� ����� ������

			while (ss >> string) {//���� � ������� ��������� 

				for (char i = 0; i < string.size(); i++)//� ����� ����������� �� ����� ����� ��� ������ �����
				{
					if (word == string[i])//���� ����� ����� � ����� ���� 
					{
						return true;//���������� ���
					}
				}
			}
			return false;//���� ���,�� ����
		}

		void missword(char word, string temp, int& hits) {//������� ��� �������� ���������� ����� � �����,� ��������� �������� �����,������ � ������� ������������ ����� � ���������� �������

			if (temp.find(word) == string::npos) {//��������� ���� �� ����� � �����,���� ��� �� �������� ���������� �������

				cout << "�� ������,������ ��� ���" << endl;
				(hits--);//������� � ������� �������� ���������� �������,��� ����� ��������� ��������
				cout << "��������" << hits << "�������" << endl;
			}

			else
			{
				cout << "��� ����� ��� ����������,� ����� �� ������ ���" << endl;//���� ����� ���������� ���������� ������
			}
		}

		void gameplace(int random) {//�������� ������� ����

			int hits = 6;//������� ���������� �������
			::string string = str(random);//�������� � ���� ������ ��������� ������,����� ���������
			::string copystring = string;//������ ������� ����� ����� ��� ��������� ������� �� ����� ��� ���
			::string temp;//������ ��� ���������� ��������� ����
			::string::size_type position;//���������� ������� ���������� ������� ����� � �����
			char word;
			words(random);//������� ��� ������ ����� ����� ���������

			while (hits != 0)//���� � ������� ����� �������� �� ���� ���� ���������� ������� �� ����� ����� ����

			{
				cin >> word;

				position = string.find(word);//������� ������� ����� � ����� � ����������

				if (position == string::npos) {//���� ����� � ����� ��� ��� ���������� ����� ��������� ������� ��� ���������

					missword(word, temp, hits);
				}

				else if (processingword(word, random)) {//���� ����� �������

					string.erase(find(string.begin(), string.end(), word)); //������� �� �� ������ ���� �� �����������
					cout << "�� ������ �����!���������!" << endl;
					temp.push_back(word);//��������� �� � ���� ������
					cout << temp << endl; //�������               

					if (copystring.size() == temp.size())//���� ���� ������ ����������� ������� ������� � ����� ����� �������� ������ �� ��������
					{

						cout << "�������!�� ������ �����!" << endl;//������� ���� �����
						cout << copystring << endl;
						cout << endl;
						hits = 0;   //�������� � ���� ���������

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

			while (menu() == 1) {//���� ��� ���� �������� ���� ������������ ���� 1 �� ���������� ����� �� ��� ������� � ��������� ������� ����
				int random = 1 + rand() % 30;
				gameplace(random);
			}

		}