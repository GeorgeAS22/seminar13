#include <iostream>
#include <string>
using namespace std;
int main(){

Shape * s1, * s2;
    s1 = new Circle("New Circle", 6.0);
    s1->DisplayDetails();
    cout << "Area: " << s1->CalculateArea() << endl;

    cout << "\n------------------------\n";

    s2 = new Rectangle("New Rectangle", 4.0, 8.0);
    s2->DisplayDetails();
    cout << "Area: " << s2->CalculateArea() << endl;
   

    return 0;
}