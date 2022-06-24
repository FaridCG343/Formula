#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string exp;
    vector<char> ca;
    vector<char> v1;
    bool Bien = true;
    getline(cin, exp);
    for (char x : exp)
    {
        v1.push_back(x);
        if (x == '{' || x == '[' || x == '(')
        {
            ca.push_back(x);
        }
        switch (x)
        {
        case ']':
            if (v1[v1.size() - 2] == '/' || v1[v1.size() - 2] == '*' || v1[v1.size() - 2] == '+' || v1[v1.size() - 2] == '-')
            {
                Bien = false;
            }
            if (v1[v1.size() - 2] == '[')
            {
                Bien=false;
            }
            if (ca[ca.size() - 1] == '[')
            {
                ca.pop_back();
            }
            else
            {
                Bien = false;
            }

            break;
        case '}':
            if (v1[v1.size() - 2] == '/' || v1[v1.size() - 2] == '*' || v1[v1.size() - 2] == '+' || v1[v1.size() - 2] == '-')
            {
                Bien = false;
            }
            if (v1[v1.size() - 2] == '{')
            {
                Bien=false;
            }
            if (ca[ca.size() - 1] == '{')
            {
                ca.pop_back();
            }
            else
            {
                Bien = false;
            }
            break;
        case ')':
            if (v1[v1.size() - 2] == '/' || v1[v1.size() - 2] == '*' || v1[v1.size() - 2] == '+' || v1[v1.size() - 2] == '-')
            {
                Bien = false;
            }
            if (v1[v1.size() - 2] == '(')
            {
                Bien=false;
            }
            if (ca[ca.size() - 1] == '(')
            {
                ca.pop_back();
            }
            else
            {
                Bien = false;
            }
            break;
        }
    }
    if (ca.size() != 0)
    {
        Bien = false;
    }
    if (Bien)
    {
        cout << "Esta bien";
    }
    else
    {
        cout << "Esta mal";
    }

    return 0;
}
