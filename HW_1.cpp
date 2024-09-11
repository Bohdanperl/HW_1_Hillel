#include "HW_1.h"
#include <iostream>

const char NEW_LINE{'\n'};
const char TAB{'\t'};
const char SPACE{' '};

void Person::printInfo() const 
{
        std::cout << TAB << TAB << name_ << TAB << TAB << surname_ << NEW_LINE << TAB << TAB << SPACE << SPACE << position_ 
                  << NEW_LINE << SPACE << SPACE << linkedin_ << TAB << github_ 
                  << NEW_LINE << SPACE << SPACE << telegram_ << TAB << TAB << TAB << TAB << location_ 
                  << NEW_LINE << "Summary: " << summary_ << NEW_LINE << "Skills: " << skills_ 
                  << NEW_LINE << "Education: " << education_
                  << NEW_LINE << "Language: "  << language_ << std::endl;
    
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

