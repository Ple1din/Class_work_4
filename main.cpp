#include <iostream>
#include "PersonalizedMassage.h"

int main() {
    PerzonalizedMassage m1("Personalized therapeutic massage", 75, 1400, "3:00 PM");
    std::cout << m1.showInfo();

    PerzonalizedMassage m2("Personalized therapeutic massage", 60, 1200, "4:00 PM", "Recurrent");
    std::cout << m2.showInfo();

    return 0;
}
