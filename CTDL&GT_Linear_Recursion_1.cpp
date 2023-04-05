
#include <iostream>

using namespace std;

int linearRecursion(int n)
{
    if (n == 0) 
    {
        return 0;
    }
    else if (n == 1) 
    {
        return 1;
    }
    else 
    {
        return linearRecursion(n-1) + linearRecursion(n-2); 
    }
}
