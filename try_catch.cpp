#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n1, n2;
    try {
        std::cin >> n1;
        std::cin >> n2;

        if (n2 == 0)
        {
            throw 13;    // can be throw any number -3, 342, 1, 45 will be caught by catch
        }

        double result = (double) n1 / n2;
        std::cout << result;
    }

    catch(int x) {
        std::cout << "\nYou can't divide number by 0" << std::endl;
    }
}