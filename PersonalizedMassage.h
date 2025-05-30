#ifndef PERSONALIZEDMASSAGE_H
#define PERSONALIZEDMASSAGE_H

#include "ServiceSPA.h"
#include <string>
#include <sstream>

class PerzonalizedMassage : public ServiceSPA {
private:
    std::string appointmentHour;
    std::string clientType;  // "New", "Recurrent" o ""

public:
    PerzonalizedMassage(std::string name, int duration, float price, std::string hour, std::string clientType = "");

    float calculateFinalPrice() override;

    float calculateFinalPrice(std::string clientType);

    std::string showInfo() override;
};

#endif
