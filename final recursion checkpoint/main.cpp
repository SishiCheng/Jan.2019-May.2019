#include <iostream>
using namespace std;
// Function prototype
void showMe(int arg);
int main()
{
    int num = 0;
    showMe(num);
    return 0;
}
void showMe(int arg)
{
    if (arg < 10)
        showMe(++arg);
    else
        cout << arg << endl;
}