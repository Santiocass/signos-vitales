#include <iostream>

double farenheitaC(double farenheith) {
    return (farenheith-32) * (5.0/9.0);
}
int main() {
double farenheith, celcius;
std::cout << "Temperatura Farenheith: ";
std::cin >> farenheith;
celcius = farenheitaC(farenheith);
std::cout << "Temperatura Celcius: " << celcius << std::endl;
return 0;
}
