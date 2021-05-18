#include <stdio.h>

void print(int n)
{
    if (n > 9)
    {
        print(n / 10);
    }
    printf("%d ", n % 10);
}

int main()
{
    print(1234);
    return 0;
}
