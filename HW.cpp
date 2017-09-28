// Example program
#include <iostream>
#include <string>
#include <math.h>
int main() {
    // 3
    std::cout << "enter the three-digit number" << std::endl;
    int number = 0;
    std::cin >> number;
    int num1 = number%10;
    std::cout << num1 << std::endl;
    std::cout << (number%100-num1)/10 << std::endl;
    int num2 = (number%100-num1)/10;
    std::cout << (number-num1-num2)/100+num1+num2 << std::endl;
    std::cout << (number-num1-num2)/100*num1*num2 << std::endl;
    // 22
     std::cout << "enter the three-digit number" << std::endl;
     int number2 = 0;
     std::cin >> number2;
     int NUM1 = number2%10;
     int NUM2 = number2%100-NUM1;
     int NUM3 = number2-NUM1-NUM2;
     int result = (NUM3/10+NUM1)*10+NUM2/10;
     std::cout << result << std::endl;
return 0;
}
