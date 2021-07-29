// Question =>  Minimum characters needed to be inserted in the beginning to make it palindromic.

#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
    int l = s.length();
    int i, j;

    for (i = 0, j = l - 1; i <= j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "error";
    int cnt = 0;
    int flag = 0;

    while (s.length() > 0)
    {

        if (isPalindrome(s))
        {
            flag = 1;
            break;
        }
        else
        {
            cnt++;

            s.erase(s.begin() + s.length() - 1);
        }
    }

    if (flag)
    {
        cout << cnt;
    }

    return 0;
}