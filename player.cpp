#include "player.h"
void Player::set_player(){
    set_person();
    g_name= "Football";
}
void Player::print_info(){
    std::cout<< "Name of the player is: ";
    display_person();
    std::cout<< "And the game he's playing : " << g_name << std::endl;
}