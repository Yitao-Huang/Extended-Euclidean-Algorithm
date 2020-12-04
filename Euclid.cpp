#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a,b;
    vector<int> f;
    vector<int> s;
    vector<int> res;
    cin >> a >> b;

    while (b != 0)
    {
        f.push_back(a);
        s.push_back(b);
        int temp = a;
        res.push_back(a/b);
        a = b;
        b = temp%b;
    }

    cout << "GCD = " << a << endl;

    int c1 = 1, c2 = -res[res.size() - 2];
    cout << a << " = " << endl;
    for (int i = res.size() - 2; i >= 0; i--)
    {
        cout << "(" << c1 << ") * " << f[i] << " + (" << c2 << ") * " << s[i] << endl;
        int temp = c2;
        if (i-1 < 0) break;
        c2 = c1 + c2 * (-res[i-1]);
        c1 = temp;
    }


    return 0;
}