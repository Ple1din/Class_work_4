#ifndef SERVICESPA_H
#define SERVICESPA_H

#include <string>
using namespace std;

class ServiceSPA {
protected:
    string serviceName;
    int duration;       // en minutos
    float basePrice;

public:
    ServiceSPA(string name, int duration, float price);

    virtual float calculateFinalPrice() = 0;

    virtual void showInfo() = 0;
};

#endif
