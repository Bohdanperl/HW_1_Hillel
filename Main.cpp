#include "HW_1.h"

int main() 
{
    Person bohdan = PersonBuilder().setName("Bohdan")
                                    .setSurname("Perliei")
                                    .setPosition("C++ Software Engineer")
                                    .setLinkedIn("linkedin.com/in/bohdan-perliei")
                                    .setGitHub("github.com/Bohdanperl")
                                    .setTelegram("@Bohdan_08")
                                    .setLocation("Ukraine, Odessa")
                                    .setSummary("Software engineer with C++ experience.")
                                    .setSkills("C++11, 14, 17, OOP, STL, pointers, smart pointers, containers, algorithms, data structures.")
                                    .setEducation("Master's degree Software engineering")
                                    .setLanguage("Ukrainian (native) Russian (native) English B1(intermediate)")
                                    .build();

    bohdan.printInfo();
 return 0;
}