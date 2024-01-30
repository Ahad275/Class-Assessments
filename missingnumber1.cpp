#include <iostream>
#include <string>
using namespace std;
char test(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i + 1] - text[i] > 1)
        {
            return text[i] + 1;
        }
    }
    return '\0';
}
int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    char a = test(str);
    if (a != '\0')
    {
        cout << "The missing letter is : " << a;
    }
    else
    {
        cout << "There is no missing letter";
    }
}