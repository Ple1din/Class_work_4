SPA Service Management System

This project implements a simple service management system for a SPA offering personalized therapeutic massages. The system uses Object-Oriented Programming principles in C++, including inheritance, polymorphism, abstract classes, method overriding, and overloading.

The system manages service information and calculates the final price based on massage duration and client type (new or returning). It supports easy extension for future additional services.

Features
Abstract base class ServicioSPA defines common attributes and methods.

Derived class MasajePersonalizado implements specific rules for:

Additional surcharge for massages longer than 60 minutes.

Discount for returning clients.

Polymorphic behavior through virtual methods.

Displays a detailed service summary including applied surcharges or discounts.
