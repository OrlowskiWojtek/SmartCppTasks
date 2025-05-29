#include "include/RpgCharacter.hpp"

int main(){
    RpgCharacterDirector director;

    RpgCharacter testowy_archer = director.build_archer();
    testowy_archer.print_details();

    RpgCharacter testowy_fighter = director.build_fighter();
    testowy_fighter.print_details();

    RpgCharacter testowy_mage = director.build_mage();
    testowy_mage.print_details();

    RpgCharacter testowy_assasin = director.build_assasin();
    testowy_assasin.print_details();

    double arr[3];
    arr[4];
}
