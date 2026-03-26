#pragma once
#include <string>
class Pet{
    std::string name;
    std::string type;
    int age;
public:
    Pet(const std::string& name, int age) : name(name), age(age) {}

    std::string displayInfo() const {
        return "Name: " + name + ", Age: " + std::to_string(age);
    }   
};