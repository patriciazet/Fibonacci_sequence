#include <iostream>

class Fibonacci
{
private:
    int sum, a, b;
public: 
    int generate(int n)
    {
        if (n <= 2)
        {
            return 1;
        }
        else
        {
            return generate(n - 2) + generate(n - 1);
        }
    }

    int iteratively(int n)
    {
        int a = 0;
        int b = 1;
        int sum = 0;
        for (int i = 1; i <= n - 2; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }
        return sum;
        
    }
};
int main()
{
    Fibonacci fib;
    std::cout << fib.iteratively(7);
}
