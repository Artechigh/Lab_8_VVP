
#include <iostream>

int main()

{
    std::cout << "Hello World!\n";
    std::cout << "TASK 1\n";
    float a;
    std::cout << "Write down file size (bytes)\n";
    std::cin >> a;
    float kb = (a / 1024);
    if (trunc(a / 1024) == a / 1024) std::cout << kb;
    else (std::cout << trunc(kb) + 1);
    std::cout << "\n";

    std::cout << "TASK 2\n";
    int A, B;
    std::cout << "Write down A length\n";
    std::cin >> A;
    std::cout << "Write down B length\n";
    std::cin >> B;
    std::cout << "Answer is " << trunc(A / B);
    std::cout << "\n";

    std::cout << "TASK 3\n";
    std::cout << "Write down A length\n";
    std::cin >> A;
    std::cout << "Write down B length\n";
    std::cin >> B;
    std::cout << "Answer is " << A - trunc(A / B) * B;
    std::cout << "\n";

    std::cout << "TASK 4\n";
    std::cout << "Write down 2 digit number\n";
    int x;
    std::cin >> x;
    std::cout << "Answer is " << (x - trunc(x / 10) * 10) << (trunc(x / 10));


    std::cout << "TASK 5\n";
    std::cout << "Write down 3 digit number\n";
    std::cin >> x;
    std::cout << "Answer is " << x - trunc(x / 100) * 100 << x / 100;
}
