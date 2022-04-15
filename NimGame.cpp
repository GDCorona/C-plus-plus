#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
int n;
vector <int> Heap;
bool gameOver()
{
    for(int i = 1; i <= n; i++)
    {
        if(Heap[i] != 0) return false;
    }
    return true;
}
int NimSum()
{
    int nim_sum = Heap[1];
    for(int i = 2; i <= n; i++)
    {
        nim_sum ^= Heap[i];
    }
    return nim_sum;
}
int main()
{
    cin >> n;
    Heap.resize(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> Heap[i];
    }
    cout << NimSum();
    return 0;
}
