#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	//1
	/*int x, k = 0, s = 0;
	double sr = 0;
	do{
		cin >> x;
		k++;
		s = s + x;
		sr = sr + x;
	} while (x != 0);
	sr = sr / (double)k;
	cout << k << " " << s << " " << sr;*/

	//2
	/*int i, a, b, s = 0;
	cin >> a >> b;
	i = a;
	do {
		if (i % 2 != 0)
		{
			s = s + i;
		}
		i++;
	} while (i <= b);
	cout << s;*/

	//3
	/*int i, h;
	cin >> h;
	i = 1;
	do {
		for (int j=1; j <= h -i ; j++) cout << ' ';
		for (int j = 1; j <= 2 * i - 1; j++) cout << '^';
		cout << endl;
		i++;
	} while (i<=h);*/

	/*17. В ЭВМ вводятся по очереди данные о росте N учащихся класса. Определить средний рост учащихся класса.*/
	/*int n, i=1, r;
	double sr = 0;
	cin >> n;
	do {
		cin >> r;
		sr = sr + r;
		i++;
	} while (i<=n);
	sr = sr / (double)n;
	cout << sr;*/

	/*18. Задано натуральное число N. Найти количество натуральных чисел, не превосходящих N и не делящихся ни на одно из чисел 2,3,5.*/
	/*int n, ch = 1, k=0;
	cin >> n;
	do {
		if(ch%2!=0 && ch % 3 != 0 && ch % 5 != 0)
		k++;
		ch++;
	} while (ch <= n);
	cout << k;*/

	/*22. дано натуральное n. вычислить: 1 + 1/2 + 1/3 + 1/4 + ... + 1/n.*/
	/*int n, resh=0, i=1;
	cin >> n;
	do {
		resh = resh + 1.0 / i;
		i++;
	} while (i<=n);
	cout << resh;*/

	/*29. с помощью оператора while напишите программу вывода всех четных чисел в диапазоне от 2 до 100 включительно.*/
    /*int i = 2;
	do {
		cout << i << endl;
		i += 2;
	} while (i<=100);*/

	/*30. С помощью оператора while напишите программу определения суммы всех нечетных чисел в диапазоне от 1 до 99 включительно.*/
	/*int i = 1, s=0;
	do {
		s = s + i;
		i += 2;
	} while (i <= 99);
	cout << s;*/
}