#include <iostream>

using namespace std;

int main()
{
    for (int i=200; i<=300; i++)
    {
        if (i%5==0 || i%6==0)
        {
            cout <<i<< endl;
        }
    }
    return 0;
}
