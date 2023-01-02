//Prime Number Generator
#include <iostream>

bool isitprime (int x) 
{
    for (int i=2; i<x; i++) 
    {
    if (x%i==0)
        return false;   
    }
    return true;
}
    
int main()
{
    int a = 0;
    int b = 0;
    std::cout << "How many prime numbers should be written first?" << std::endl;
    std::cin >> a;
    if (a < 1)
    {
        std::cout << "error code- 404";
    }
    else
    {
        std::cout << "\n---------------------------\n\n" <<"First " << a << " prime number:\n" << std::endl;
        for (int i = 2; b < a; i++) 
    {
        if (isitprime(i))
        {
            if (b + 1 < 10)
            {
            std::cout <<  "0" << b + 1 << ". prime number=\t" << i << std::endl;
            b++;
            }
            else
            {
            std::cout << b + 1 << ". prime number=\t" << i << std::endl;
            b++;
            }
        }
    }
    }
}