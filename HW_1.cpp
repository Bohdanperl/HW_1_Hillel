#include "HW_1.h"
#include <iostream>

const char NEW_LINE{'\n'};
const char TAB{'\t'};
const char SPACE{' '};

void Person::printInfo() const 
{
    std::cout << R"(
    Name:      )" << name_ <<
    R"(
    Surname:   )" << surname_ <<
    R"(
    Position:  )" << position_ <<
    R"(
    LinkedIn:  )" << linkedin_ <<
    R"(
    GitHub:    )" << github_ <<
    R"(
    Telegram:  )" << telegram_ <<
    R"(
    Location:  )" << location_ <<
    R"(
    Summary:   )" << summary_ <<
    R"(
    Skills:    )" << skills_ <<
    R"(
    Education: )" << education_ <<
    R"(
    Language:  )" << language_ << std::endl;    
}

PersonBuilder& PersonBuilder::setName(const std::string& name) 
{
    name_ = name;
    return *this;
}

PersonBuilder& PersonBuilder::setSurname(const std::string& surname) 
{
    surname_ = surname;
    return *this;
}

PersonBuilder& PersonBuilder::setPosition(const std::string& position) 
{
    position_ = position;
    return *this;
}

PersonBuilder& PersonBuilder::setLinkedIn(const std::string& linkedin) 
{
    linkedin_ = linkedin;
    return *this;
}

PersonBuilder& PersonBuilder::setGitHub(const std::string& github) 
{
    github_ = github;
    return *this;
}

PersonBuilder& PersonBuilder::setTelegram(const std::string& telegram) 
{
    telegram_ = telegram;
    return *this;
}

PersonBuilder& PersonBuilder::setLocation(const std::string& location) 
{
    location_ = location;
    return *this;
}

PersonBuilder& PersonBuilder::setSummary(const std::string& summary) 
{
    summary_ = summary;
    return *this;
}

PersonBuilder& PersonBuilder::setSkills(const std::string& skills) 
{
    skills_ = skills;
    return *this;
}

PersonBuilder& PersonBuilder::setEducation(const std::string& education) 
{
    education_ = education;
    return *this;
}
PersonBuilder& PersonBuilder::setLanguage(const std::string& language) 
{
    language_ = language;
    return *this;
}

Person PersonBuilder::build() 
{
    return Person(name_, surname_, position_, linkedin_, github_, telegram_, location_, summary_, skills_, education_, language_) ;
}

