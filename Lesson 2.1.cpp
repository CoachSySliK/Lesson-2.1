#include <iostream>

using namespace std;

int main()
{
    int priseProduct = 2048;
    int delivery = 512;
    int sale = 1024;
    int priseTotal = priseProduct + delivery - sale;


    cout << "Prise: " << priseProduct << "\n";
    cout << "Delivery: " << delivery << "\n";
    cout << "Sale: " << sale << "\n";
    cout << "Total prise: " << priseTotal << "\n";
    //на английском, потому что у меня шрифты в консоли не хотели работать. сейчас вроде починил, последние работы на русском.
    return 0;
}

