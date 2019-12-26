// SudukoGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



string InitSudoku()
{
    string InitSudoku = "53  7    6  195    98    6 8   6   34  8 3  17   2   6 6    28    419  5    8  79";
    return InitSudoku;
}

void printSudoku(string S)
{
    cout << "-------SUDOKU--------\n";
    cout << "\n---------------------\n";
    for (int c3 = 0; c3<9; c3++)
    {
        
        for (int c1 = 0;c1 < 3 ; c1++)
        {
            for (int c2 = 0 + (c1 * 3) + (c3 * 9); c2 < 3 + (c1 * 3) + (c3 * 9); c2++)
            {
                cout << " " << S[c2];
            }
            cout << "|";
        }
        cout << "\n";
        if ((c3 + 1) % 3 == 0) { cout << "---------------------\n"; }
    }

}




int main()
{
    string S = InitSudoku();
    printSudoku(S);

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
