// Dvovumerni dynamichni masuvu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<cmath>;
#include<iomanip>; //setw(n)
#include<locale>;
#include<windows.h>;
#include<time.h>;
#include<iomanip>;
using namespace std;

void main()

{
    srand(time(0));
    cout << "lalala" << endl;

    /// <summary>
    /// ////////////////////////////////////////////////////
    /// </summary>
    //int rows = 5, cols = 5;
    //cout << "rows = "; cin >> rows;
    //cout << "cols = "; cin >> cols;
    //
    //int** arr = new int* [rows]; //создание масива указателей

    //for (size_t i = 0; i < rows; i++)
    //{
    //    arr[i] = new int[cols];
    //}
    //for (size_t i = 0; i < rows; i++)
    //{
    //    for (size_t j = 0; j < cols; j++)
    //    {
    //        arr[i][j] = rand() % 2;
    //        cout << setw(5) << arr[i][j];
    //    }
    //    cout << endl;
    //}
    //for (size_t i = 0; i < rows; i++)
    //{
    //    delete[] arr[i];
    //}
    //delete[]arr;
    /////////////////////////////////////////////////////////
    //char arr[] = { 'H','i','\0' };// - первый пример
    //char arr[] = "Hi";              // - второй пример
    //cout << arr << endl;

    //for (size_t i = 0; arr[i] != '\0' ; i++)
    //{
    //    cout << arr[i];
    //}
    //cout << endl;
    //cout << sizeof(arr) << endl;
    //cout << strlen(arr) << endl;
    //cout << arr << endl;
    //////////////////////////////////////////////

    //char arr[255];
    //cin.getline(arr, 255);       // син для чара(блокнотик можно писать)
    //cout << sizeof(arr) << endl; // показывает изначальный размер масива
    //cout << strlen(arr) << endl; // показывает на сколько заполнен массив
    //cout << arr << endl;

    ///////////////////////////////////////////////
    //копирование массивов с одного во второй
   // char arr[255] = "O may! ";
   // char arr2[] = "Hi, a love my little ponny";

   // cout << arr << endl;
   // cout << arr2 << endl << endl;
   //// strcpy_s(arr, arr2);      //перезапишет массив полностью
   //// strncpy_s(arr, arr2, 5);  //перезапишет только н-нное количество элементов
   //// strcat_s(arr, arr2);      // объеденяет два миассива
   // strncat_s(arr, arr2, 10);    // объеденяет два миассива с n элементами
   // cout << arr << endl;
    ///////////////////////////////////////////////////////////////////
    //Розробити програму, яка зчитує з екрану рядок, а потім видає статистику : кількість пробільних символів(whitespaces), великих, маленьких букв і знаків пунктуації(., ? !).Введення передбачається англомовним.
    char arr[255];
    cout << "vvodi symvoly: "; cin.getline(arr, 255);

    cout << "\n" << arr << endl;

    /*int spase = 0, bigleter = 0, smolleter = 0, znakponktuacii = 0, numbers = 0;

    for (int i = 0; i < 255; i++)
    {
        if (arr[i] == 32 || arr[i] == 9)
        {
            spase++;
        }
        if (arr[i] >= 65 && arr[i] <= 90)
        {
            bigleter++;
        }
        if (arr[i] >= 97 && arr[i] <= 122)
        {
            smolleter++;
        }
        if (arr[i] == 33 || arr[i] == 34 || arr[i] == 39 || arr[i] == 44 || arr[i] == 63 || arr[i] == 96)
        {
            znakponktuacii++;
        }
        if (arr[i] >= 47 && arr[i] <= 57)
        {
            numbers++;
        }
    }*/
    int isalnum1 = 0, isalpha1 = 0, isdigit1 = 0, islower1 = 0, isupper1 = 0,
        isspace1 = 0, toupper1 = 0;
    for (int i = 0; i < strlen(arr); i++)
    {
        if (isalnum(arr[i])) //возвращает значение true, если с является буквой или цифрой, и false в других случаях
        {
            isalnum1++;
        }
        if (isalpha(arr[i])) //возвращает значение true, если с является буквой,  и false в других случаях
        {
            isalpha1++;
        }
        if (isdigit(arr[i])) // возвращает значение true, если с является цифрой, и false в других случаях
        {
            isdigit1++;
        }
        if (islower(arr[i])) //	возвращает значение true, если с является буквой нижнего регистра, и false в других случаях
        {
            islower1++;
        }
        if (isupper(arr[i])) //возвращает значение true, если с является буквой верхнего регистра, и false в других случаях
        {
            isupper1++;
        }
        if (isspace(arr[i])) //возвращает значение true, если с является пробелом, и false в других случаях
        {
            isspace1++;
        }
        if (toupper(arr[i])) //если символ с, является символом нижнего регистра, то функция возвращает преобразованный символ с в верхнем регистре, иначе символ возвращается без изменений.
        {
            toupper1++;
        }
    }
    cout << "isalnum1 = " << isalnum1 << endl;
    cout << "isalpha1 = " << isalpha1 << endl;
    cout << "isdigit1 = " << isdigit1 << endl;
    cout << "islower1 = " << islower1 << endl;
    cout << "isupper1 = " << isupper1 << endl;
    cout << "isupper1 = " << isupper1 << endl;
    cout << "isspace1 = " << isspace1 << endl;
    cout << "toupper1 = " << toupper1 << endl;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

