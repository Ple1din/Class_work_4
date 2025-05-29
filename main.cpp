#include <iostream>
#include "PersonalizedMassage.h"
using namespace std;

int main() {
    // Masaje con duración > 60 minutos y cliente nuevo
    PerzonalizedMassage m1("Masaje terapéutico personalizado", 75, 1400, "3:00 PM");
    m1.showInfo();

    // Masaje con duración = 60 minutos y cliente recurrente
    PerzonalizedMassage m2("Masaje terapéutico personalizado", 60, 1200, "4:00 PM", "Recurrente");
    m2.showInfo();

    return 0;
}
