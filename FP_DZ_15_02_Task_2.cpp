// Написать программу, которая выводит одномерный массив в обратном порядке.


#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int sizeArr = 50;
    int Arr[sizeArr];
    random_device Random;

    for (int i = 0; i < sizeArr; i++)
    {
        Arr[i] = i;        
    }

    cout << "Массив в обратном порядке : " << endl;


    for (int i = sizeArr - 1; i > 0; i--)
    {
        cout << " " << Arr[i];
    }    
}

