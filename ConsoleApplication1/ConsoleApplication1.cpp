// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream> 
#include <vector> 
#include <cstring>
#include <array>
#include "lab2lib.h"
#include <iostream>
using namespace std;
int main()
{
    int  task_Number;
    cout << "Menu: \n 1: Task 1 \n 2 : Task 2 \n 3 : Task 3 \n ... \n - 1 : Exit \n Which task would you like to run ? \n";
    cin >> task_Number;
    switch (task_Number)
    {

    case 1:
    {
        int i = 0;
        int value;
        int arr[100];
        bool condition = true;
        while (condition != true)
        {
            cout << "inter in an integer, end by intering END" << endl;
            cin >> value;
            arr[i] = value;
            i += 1;
            if (!cin)
                condition = false;
        }
        bool aws = is_sorted(arr);
        cout << boolalpha << aws;
        break;
    }
    case 2:
    {
        char word[100];
        cout << "Entera string: ";
        cin.get(word, 100);
        bool ans = is_palindrome(word);
        cout << boolalpha << ans << endl;
        break;
    }
    case 3:
    {
        int x = 0;
        int y = 0;
        cout << "Please, inter the size of the raw " << endl;
        cin >> x;
        cout << "Please, inter the size of the colomn" << endl;
        cin >> y;
        int** arr = new int* [x];
        for (int i = 0; i < x; i++)
            arr[i] = new int[y];

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                arr[i][j] = rand() % 10;
            }

        }

        array_rows_cols(arr, x, y);
        break;
    }
    case 4:
    {
        while (1 == 1)
        {
            int a, b, c;
            bool sorting;
            cout << " Give a(0 to quit) :" << endl;
            cin >> a;
            if (a == 0) {
                cout << "Bye bye!" << endl;
                return 0;
                break;
            }
            cout << " Give b :" << endl;
            cin >> b;
            cout << " Give c :" << endl;
            cin >> c;
            cout << "Sort ascending / descending(1 / 0) :";
            cin >> sorting;
            swap_sort(a, b, c, sorting);
        }
        break;
    }
    case 5:
    {
        int arr[] = { 1,2,5,4,3,6,7,8,9 };
        shrink_array(arr);
        for (int i = 0; i < 9; i++)
        {
            cout << arr[i] << ",";
        }
        return 0;


        break;
    }
    case 6:
    {
        Name P("Test");
        while (true)
        {
            string choice;
            cout << "MENU : \n" << "initialise database \n" << "insert\n" << "search \n" << "delete\n" << "print\n" << "quit\n" << "Make your choice :" << endl;
            cin >> choice;
            if (choice == "initialise")
                P.initialise();
            if (choice == "insert")
            {
                cout << endl;
                P.insert();
            }
            if (choice == "search") {
                cout << endl;
                P.search();
            }
            if (choice == "delete") {
                cout << endl;
                P.delet();
            }
            if (choice == "print") {
                cout << endl;
                P.print();
            }
            if (choice == "quit") {
                cout << "HAVE A GOOD DAY" << endl;
                break;
            }
        }


        break;
    }
    case -1:
    {
        return 0;
        break;
    }
    defualt:
        cout << "Sorry, there is no such task!";
        break;


    }
}
 
