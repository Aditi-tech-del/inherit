#include "person.h"
void Person::set_person(){
    f_name = "Cristiano";
    l_name = "Ronaldo";
}
void Person::display_person(){
    std::cout<< f_name << " " << l_name << std::endl;
}