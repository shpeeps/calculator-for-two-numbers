#include <iostream>
using namespace std;

int main()
{
    int x, y, sum, razn, sredn;

    setlocale(LC_ALL, "Russian");

    cout << "Введите два целых числа через пробел "; 
    cin >> x >> y;
    sum = x + y;
    razn = x - y;
    sredn = (x + y) / 2;
    cout << "Сумма чисел " << sum << endl;
    cout << "Разность чисел " << razn << endl;
    cout << "Среднее арифметическое чисел " << sredn << endl;


    system("pause");
    return 0; 
}
