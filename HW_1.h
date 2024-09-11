#pragma once
#include <string>

class Person {
public:
    Person(const std::string& name, const std::string& surname, const std::string& position, 
        const std::string& linkedin, const std::string& github, const std::string& telegram, 
        const std::string& location, const std::string& summary, const std::string& skills, 
        const std::string& education, const std::string& language)
        : name_(name), surname_(surname), position_(position), linkedin_(linkedin), 
        github_(github), telegram_(telegram), location_(location), summary_(summary), 
        skills_(skills), education_(education), language_(language) {}

    void printInfo() const;

private:
    std::string name_;
    std::string surname_;
    std::string position_;
    std::string linkedin_;
    std::string github_;
    std::string telegram_;
    std::string location_;
    std::string summary_;
    std::string skills_;
    std::string education_;
    std::string language_;
};

class PersonBuilder {
public:
    PersonBuilder& setName(const std::string& name);
    PersonBuilder& setSurname(const std::string& surname);
    PersonBuilder& setPosition(const std::string& position);
    PersonBuilder& setLinkedIn(const std::string& linkedin);
    PersonBuilder& setGitHub(const std::string& github);
    PersonBuilder& setTelegram(const std::string& telegram);
    PersonBuilder& setLocation(const std::string& location);
    PersonBuilder& setSummary(const std::string& summary);
    PersonBuilder& setSkills(const std::string& skills);
    PersonBuilder& setEducation(const std::string& education);
    PersonBuilder& setLanguage(const std::string& language);
    Person build();

private:
    std::string name_;
    std::string surname_;
    std::string position_;
    std::string linkedin_;
    std::string github_;
    std::string telegram_;
    std::string location_;
    std::string summary_;
    std::string skills_;
    std::string education_;
    std::string language_;
};
