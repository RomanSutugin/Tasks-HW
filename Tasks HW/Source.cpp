#include <iostream>
using namespace std;
#define delimiter "\------------------------------------\n"
#define TASK_1
void main()
{
	setlocale(LC_ALL, "Russian");
#if defined TASK_1
		cout << "Задача 1: " << endl; 
		double number;
		cout << "Введите дробное число: "; cin >> number;
		int price = number;
		double number_2 = number - price;
		int number_3 = number_2 * 100;
		cout << number << " это: " << price << " грн." << number_3 << "коп." << endl;
		cout << delimiter << endl; 
#endif
		
		cout << "Задача 2: Вычисление стоимости покупки: " << endl;
		double Price_of_copybook;
		int Number_of_copybooks;
		double Price_of_pensil;
		int Number_of_pensils;
		cout << "Введите цену тетради: "; cin >> Price_of_copybook;
		cout << "Введите количество тетрадей: "; cin >> Number_of_copybooks;
		cout << "Введите цену карандаша: "; cin >> Price_of_pensil;
		cout << "Введите количество карандашей: "; cin >> Number_of_pensils;
		cout << Price_of_copybook << endl;
		cout << Number_of_copybooks << endl;
		cout << Price_of_pensil << endl;
		cout << Number_of_pensils << endl;
		double Total_cost = Price_of_copybook * Number_of_copybooks + Price_of_pensil * Number_of_pensils;
		cout << "Общая стоимость покупок: " << Total_cost << " гривен" << endl;
		cout << delimiter << endl;

		cout << "Задача 3: Вычисление стоимости покупки: " << endl;
		double Price_Of_Copybook;
		double Price_Of_Cover;
		int Number_Of_Copybooks;
		cout << "Введите количество тетрадей и обложек: "; cin >> Number_Of_Copybooks;
		int Number_Of_Covers = Number_Of_Copybooks;
		cout << "Введите цену тетради: "; cin >> Price_Of_Copybook;
		cout << "Введите цену обложки: "; cin >> Price_Of_Cover;
		cout << Price_Of_Copybook << endl;
		cout << Price_Of_Cover << endl;
		cout << Number_Of_Copybooks << endl;
		cout << Number_Of_Covers << endl;
		double Total_Cost = Price_Of_Copybook * Number_Of_Copybooks + Price_Of_Cover * Number_Of_Covers;
		cout << "Стоимость покупки: " << Total_Cost << " гривен" << endl;
		cout << delimiter << endl;

		cout << "Задача 4: Вычисление стоимости поездки на дачу и обратно: " << endl;
		int distance;
		double gasoline_consumption;
		double price_of_gasoline;
		cout << "Введите рассточние до дачи в километрах: "; cin >> distance;
		cout << "Введите расход бензина на 100 км: "; cin >> gasoline_consumption;
		cout << "Введите цену бензина за литр: "; cin >> price_of_gasoline;
		double cost_of_trip = gasoline_consumption * distance / 100 * price_of_gasoline * 2;
		cout << "Стоимость поездки туда и обратно: " << cost_of_trip << " гривен" << endl;

}