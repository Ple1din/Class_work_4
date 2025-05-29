#include "PersonalizedMassage.h"

PerzonalizedMassage::PerzonalizedMassage(string name, int duration, float price, string hour, string clientType)
    : ServiceSPA(name, duration, price) {
    this->appointmentHour = hour;
    this->clientType = clientType;
}

float PerzonalizedMassage::calculateFinalPrice() {
    float finalPrice = basePrice;

    // Extra charge if duration exceeds 60 minutes
    if (duration > 60) {
        finalPrice += 200;
    }

    // 10% discount for returning customers
    if (clientType == "Recurrent") {
        finalPrice *= 0.9f;
    }

    return finalPrice;
}

void PerzonalizedMassage::showInfo() {
    cout << "Service: " << serviceName << endl;
    cout << "Duration: " << duration << " minutes" << endl;
    cout << "Base price: $" << basePrice << endl;
    cout << "Hour: " << appointmentHour << endl;

    if (duration > 60) {
        cout << "Note: Duration exceeds 60 minutes. Extra charge applies: $200" << endl;
    }

    if (clientType == "Recurrent") {
        cout << "Note: Recurring customer discount applied: 10%" << endl;
    }

    cout << "Final price: $" << calculateFinalPrice() << endl;
    cout << "Confirmed reservation" << endl;
    cout << "======================================" << endl;
}
