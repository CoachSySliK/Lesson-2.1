#include <iostream>

using namespace std;

int main()
{
    int priseProduct;
    int delivery;
    float sale;
    float priseTotal;

    cout << "Введите стоимость товара: ";
    cin >> priseProduct;
    cout << "Введите стоимость доставки: ";
    cin >> delivery;
    cout << "Введите размер скидки в процентах: ";
    cin >> sale;

    sale = (priseProduct + delivery) * sale / 100;
    priseTotal = priseProduct + delivery - sale;

    cout << "\nСтоимость товара" << priseProduct << "\n";
    cout << "Доставка: " << delivery << "\n";
    cout << "Скидка: " << sale << "\n";
    cout << "----------\n";
    cout << "Итого: " << priseTotal << "\n";

    return 0;
}

