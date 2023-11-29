#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#define PI 3.14159
using namespace std;

int main() 
{
    double a,b,c,triangle,circle,trape,sq,rect;
    cin>>a>>b>>c;
    triangle = (0.5)*a*c;
    circle = PI * c * c;
    trape = (0.5)*(a+b)*c;
    sq = b*b;
    rect = a*b;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangle << "\n";
    cout << "CIRCULO: " << circle << "\n";
    cout << "TRAPEZIO: " << trape << "\n";
    cout << "QUADRADO: " << sq << "\n";
    cout << "RETANGULO: " << rect << "\n";
    return 0;
}