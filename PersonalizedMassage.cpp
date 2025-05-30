#include "PersonalizedMassage.h"

PerzonalizedMassage::PerzonalizedMassage(std::string name, int duration, float price, std::string hour, std::string clientType)
    : ServiceSPA(name, duration, price), appointmentHour(hour), clientType(clientType) {}

float PerzonalizedMassage::calculateFinalPrice() {
    float finalPrice = basePrice;
    if (duration > 60) {
        finalPrice += 200;
    }
    return finalPrice;
}

float PerzonalizedMassage::calculateFinalPrice(std::string ct) {
    float finalPrice = basePrice;
    if (duration > 60) {
        finalPrice += 200;
    }
    if (ct == "Recurrent") {
        finalPrice *= 0.9f;
    }
    return finalPrice;
}

std::string PerzonalizedMassage::showInfo() {
    std::stringstream ss;
    ss << "Service: " << serviceName << std::endl;
    ss << "Duration: " << duration << " minutes" << std::endl;
    ss << "Base price: $" << basePrice << std::endl;
    ss << "Time: " << appointmentHour << std::endl;

    if (duration > 60) {
        ss << "Note: Duration exceeds 60 minutes. Surcharge applied: $200" << std::endl;
    }

    if (clientType == "Recurrent") {
        ss << "Client Type: Returning Client" << std::endl;
        ss << "Note: Returning client discount applied: 10%" << std::endl;
        ss << "Final Price: $" << calculateFinalPrice(clientType) << std::endl;
    }
    else {
        ss << "Final Price: $" << calculateFinalPrice() << std::endl;
    }

    ss << "Booking Confirmed" << std::endl;
    ss << "========================================" << std::endl;
    return ss.str();
}
