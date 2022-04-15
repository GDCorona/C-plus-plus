#include<bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#pragma GCC optimize("Ofast")
using namespace std;
int main()
{
    cout << "loading....." << endl;
    Sleep(1200);
    cout << "~Empty & Divide~" << endl;
    Sleep(700);
    cout << "Created by GD Corona" << endl;
    Sleep(700);
    cout << "_______________________" << endl;
    Sleep(1500);
    cout << "Welcome to the Empty & Divide Game! ;)" << "\n";
    cout << "please wait..." << "\n";
    cout << endl;
    cout << endl;
    Sleep(2000);
    int box1, box2;
    while(1)
    {
        cout << "Choose value of box1 and box2: ";
        cin >> box1 >> box2;
        if((box1 == 1 && box2 == 1) || box1 <= 0 || box2 <= 0)
        {
            cout << "Invalid choice, please try again!" << "\n";
            continue;
        }
        else break;
    }
    cout << "Starting Game...." << "\n";
    cout << endl;
    cout << endl;
    Sleep(2500);
    cout << "box1: " << box1 << "\n";
    cout << "box2: " << box2 << "\n";
    while(box1 != 1 || box2 != 1)
    {
        string you, com;
        int div1, div2;
        cout << "Your turn: ";
        cin >> you >> div1 >> div2;
        if(you != "box1" && you != "box2")
        {
            cout << "Invalid choice, please try again!" << "\n";
            continue;
        }
        if(you == "box1")
        {
            if(box2 == 1 || div1 <= 0 || div2 <= 0 || div1 + div2 != box2)
            {
                cout << "Invalid choice, please try again!" << "\n";
                continue;
            }
        }
        else if(you == "box2")
        {
            if(box1 == 1 || div1 <= 0 || div2 <= 0 || div1 + div2 != box1)
            {
                cout << "Invalid choice, please try again!" << "\n";
                continue;
            }
        }
        box1 = div1;
        box2 = div2;
        cout << "box1: " << box1 << "\n";
        cout << "box2: " << box2 << "\n";
        if(box1 == 1 && box2 == 1)
        {
            cout << "You win :)";
            break;
        }
        cout << "Computer's turn: ";
        int temp;
        if(box1 % 2 != 0 && box2 % 2 != 0) //losing state
        {
            if(box1 <= box2) //prolong playtime
            {
                com = "box1";
                temp = box2;
            }
            else
            {
                com = "box2";
                temp = box1;
            }
            div1 = 1;
            div2 = temp - 1;
        }
        else //winning state
        {
            if(box1 % 2 == 0 && box2 % 2 == 0)
            {
                if(box1 >= box2)
                {
                    com = "box1";
                    temp = box2;
                }
                else
                {
                    com = "box2";
                    temp = box1;
                }
            }
            else if(box1 % 2 == 0 && box2 % 2 != 0)
            {
                com = "box2";
                temp = box1;
            }
            else if(box1 % 2 != 0 && box2 % 2 == 0)
            {
                com = "box1";
                temp = box2;
            }
            div1 = temp / 2;
            div2 = temp / 2;
            if(div1 % 2 == 0 && div2 % 2 == 0)
            {
                div1--;
                div2++;
            }
        }
        Sleep(1500);
        cout << com << " " << div1 << " " << div2 << "\n";
        box1 = div1;
        box2 = div2;
        Sleep(500);
        cout << "box1: " << box1 << "\n";
        cout << "box2: " << box2 << "\n";
        if(box1 == 1 && box2 == 1)
        {
            cout << "Computer win :(";
            break;
        }
    }
    _getch();
    return 0;
}
/*
Rule: 
B1: Nhập số viên đá ở 2 hộp
B2: Chọn 1 trong 2 hộp để làm rỗng bằng cách nhập "box1" hoặc "box2", 
số đá trong hộp được chọn sẽ bị bỏ hết. Sau đó lần lượt nhập số viên đá 
bạn muốn chia ra cho 2 hộp, ví dụ với box1 = 6, box2 = 6, nếu nhập
box1 2 4 thì nghĩa là bạn làm rỗng hộp 1, 6 viên hộp 2 sẽ được lấy ra và chia
thành 2 viên ở hộp 1 và 4 viên ở hộp 2.

Sau khi nhập xong sẽ đến lượt máy chọn và khi tới lượt bạn cứ lặp lại 2 bước trên.
Nếu khi bạn kết thúc lượt mà mỗi hộp còn đúng 1 viên thì bạn thắng, ngược lại thì thua.
Good luck ^^
*/

