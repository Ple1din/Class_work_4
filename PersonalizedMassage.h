#ifndef PERSONALIZEDMASSAGE_H
#define PERSONALIZEDMASSAGE_H

#include "ServiceSPA.h"
#include <iostream>
using namespace std;

class PerzonalizedMassage : public ServiceSPA {
private:
    string appointmentHour;
    string clientType;  // "New", "Recurrent" o ""

public:
    PerzonalizedMassage(string name, int duration, float price, string hour, string clientType = "");

    float calculateFinalPrice() override;

    void showInfo() override;
};

#endif
