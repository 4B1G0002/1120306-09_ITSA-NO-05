// 1120306-09_ITSA NO-05.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include<iostream>  
using namespace std;

int main() {
    int n = 0;
    int bin[8];
    cin >> n;
    if (n < 0)
    {
        n += 256; //負數則推移至正整數  
    }
    for (int i = 7; i >= 0; i--)
    {
        bin[i] = n % 2;
        n /= 2;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << bin[i];
    }
    cout << endl;
}