#include <iostream>
using namespace std;
#define delimiter "\------------------------------------\n"
#define TASK_1
void main()
{
	setlocale(LC_ALL, "Russian");
#if defined TASK_1
		cout << "������ 1: " << endl; 
		double number;
		cout << "������� ������� �����: "; cin >> number;
		int price = number;
		double number_2 = number - price;
		int number_3 = number_2 * 100;
		cout << number << " ���: " << price << " ���." << number_3 << "���." << endl;
		cout << delimiter << endl; 
#endif
		
		cout << "������ 2: ���������� ��������� �������: " << endl;
		double Price_of_copybook;
		int Number_of_copybooks;
		double Price_of_pensil;
		int Number_of_pensils;
		cout << "������� ���� �������: "; cin >> Price_of_copybook;
		cout << "������� ���������� ��������: "; cin >> Number_of_copybooks;
		cout << "������� ���� ���������: "; cin >> Price_of_pensil;
		cout << "������� ���������� ����������: "; cin >> Number_of_pensils;
		cout << Price_of_copybook << endl;
		cout << Number_of_copybooks << endl;
		cout << Price_of_pensil << endl;
		cout << Number_of_pensils << endl;
		double Total_cost = Price_of_copybook * Number_of_copybooks + Price_of_pensil * Number_of_pensils;
		cout << "����� ��������� �������: " << Total_cost << " ������" << endl;
		cout << delimiter << endl;

		cout << "������ 3: ���������� ��������� �������: " << endl;
		double Price_Of_Copybook;
		double Price_Of_Cover;
		int Number_Of_Copybooks;
		cout << "������� ���������� �������� � �������: "; cin >> Number_Of_Copybooks;
		int Number_Of_Covers = Number_Of_Copybooks;
		cout << "������� ���� �������: "; cin >> Price_Of_Copybook;
		cout << "������� ���� �������: "; cin >> Price_Of_Cover;
		cout << Price_Of_Copybook << endl;
		cout << Price_Of_Cover << endl;
		cout << Number_Of_Copybooks << endl;
		cout << Number_Of_Covers << endl;
		double Total_Cost = Price_Of_Copybook * Number_Of_Copybooks + Price_Of_Cover * Number_Of_Covers;
		cout << "��������� �������: " << Total_Cost << " ������" << endl;
		cout << delimiter << endl;

		cout << "������ 4: ���������� ��������� ������� �� ���� � �������: " << endl;
		int distance;
		double gasoline_consumption;
		double price_of_gasoline;
		cout << "������� ���������� �� ���� � ����������: "; cin >> distance;
		cout << "������� ������ ������� �� 100 ��: "; cin >> gasoline_consumption;
		cout << "������� ���� ������� �� ����: "; cin >> price_of_gasoline;
		double cost_of_trip = gasoline_consumption * distance / 100 * price_of_gasoline * 2;
		cout << "��������� ������� ���� � �������: " << cost_of_trip << " ������" << endl;

}