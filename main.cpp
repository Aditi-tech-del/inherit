#include <iostream>
#include "person.h"
#include "player.h"
int main(){

    Player p1("Basketball");
    p1.set_player();
    p1.print_info()
    std::cout << "player : " << p1 << std::endl;
   
    return 0;
}
