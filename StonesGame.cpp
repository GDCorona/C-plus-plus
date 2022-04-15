#include <bits/stdc++.h>
#include <windows.h>
#include <stdlib.h>
#include <ctime>
#include <random>
#pragma GCC optimize("Ofast")
using namespace std;
int main()
{
    cout << "loading....." << endl;
    Sleep(1200);
    cout << "Stones Game" << endl;
    Sleep(700);
    cout << "Created by GD Corona" << endl;
    Sleep(700);
    cout << "_______________________" << endl;
    Sleep(1500);
    string dif;
    int stones, n;
    int you, com;
    srand(time(NULL));
    cout << "Welcome to the Stones Game! ;)" << "\n";
    cout << "please wait..." << "\n";
    cout << endl;
    cout << endl;
    Sleep(2000);
    while(1)
    {
        cout << "Choose difficulty(Easy/Hard): ";
        cin >> dif;
        if(dif != "Easy" && dif != "Hard") cout << "Difficulty not exist!" << "\n";
        else break;
    }
    while(1)
    {
        cout << "Choose your stones: ";
        cin >> stones;
        if(stones <= 0) cout << "Invalid number!" << "\n";
        else break;
    }
    while(1)
    {
        cout << "Choose maximum pick: ";
        cin >> n;
        if(n <= 0) cout << "Invalid number!" << "\n";
        else break;
    }
    cout << "Starting Game...." << "\n";
    Sleep(3500);
    cout << endl;
    cout << endl;
    cout << "Difficulty: " << dif << "\n";
    cout << "Stones: " << stones << "\n";
    cout << "Maximum pick: " << n << "\n";
    while(stones != 0)
    {
        cout << "Your turn: ";
        cin >> you;
        if(you > stones || you > n || you <= 0)
        {
            cout << "Invalid choice, please try again!" << "\n";
            continue;
        }
        stones -= you;
        cout << "You pick: " << you << "\n";
        cout << "Stones remained: " << stones << "\n";
        if(stones == 0)
        {
            cout << "You win :)";
            break;
        }
        cout << "Computer's turn: ";
        if(dif == "Easy")
        {
            if(stones <= n) com = rand() % stones + 1;
            else com = rand() % n + 1;
        }
        else if(dif == "Hard")
        {
            if (stones <= n) com = stones;
            else if(stones % (n + 1) == 0) com = 1;
            else com = stones % (n + 1);
        }
        stones -= com;
        Sleep(2000);
        cout << com << "\n";
        Sleep(700);
        cout << "Computer pick: " << com << "\n";
        cout << "Stones remained: " << stones << "\n";
        if(stones == 0)
        {
            cout << "Computer win :(";
            break;
        }
    }
    return 0;
}
