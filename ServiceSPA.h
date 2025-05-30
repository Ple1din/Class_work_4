#ifndef SERVICESPA_H
#define SERVICESPA_H

#include <string>

class ServiceSPA {
protected:
    std::string serviceName;
    int duration;       // en minutos
    float basePrice;

public:
    ServiceSPA(std::string name, int duration, float price);

    virtual float calculateFinalPrice() = 0;
    virtual std::string showInfo() = 0;

    virtual ~ServiceSPA() {}
};

#endif
