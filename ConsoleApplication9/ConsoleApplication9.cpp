 #include <iostream>

using namespace std;

int faktorial(int n) {
    int out = 1;
    for (int i = 1; i <= n; i++)
        out *= i;
    return out;
}

int main()
{
    setlocale(0, "");
    int n;
    cout <<  "Введите n :";
    cin >> n;
    int k;
    cout <<  "Введите k :";
    cin >> k;
    cout << "Ответ :";
    cout << faktorial(n) * faktorial(k) * faktorial(n - k);
    return 0;
}