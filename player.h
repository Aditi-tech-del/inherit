#include "person.h"
class Player : public Person
{
    private:
        std::string g_name; 

    public:
        void set_player();
        void print_info();
};