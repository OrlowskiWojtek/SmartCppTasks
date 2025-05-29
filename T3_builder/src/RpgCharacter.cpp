#include "include/RpgCharacter.hpp"
#include <iostream>

void RpgCharacterBuilder::set_name(std::string name) {
    m_rpg_character.name = name;
}

void RpgCharacterBuilder::set_class(RpgCharacter::RpgClass rpg_class) {
    m_rpg_character.rpg_class = rpg_class;
}

void RpgCharacterBuilder::set_str(int str) {
    m_rpg_character.strength = str;
}

void RpgCharacterBuilder::set_agi(int agi) {
    m_rpg_character.agility = agi;
}

void RpgCharacterBuilder::set_int(int inteligence) {
    m_rpg_character.inteligence = inteligence;
}

void RpgCharacterBuilder::set_weapon(RpgCharacter::Weapon weapon) {
    m_rpg_character.weapon = weapon;
}

RpgCharacter RpgCharacterBuilder::get_character() {
    return m_rpg_character;
}

std::ostream &operator<<(std::ostream &os, const RpgCharacter::Weapon &weapon) {
    switch (weapon) {
    case RpgCharacter::Weapon::BOW:
        os << "bow";
        break;
    case RpgCharacter::Weapon::LONGSWORD:
        os << "longswoard";
        break;
    case RpgCharacter::Weapon::SWORD:
        os << "sword";
        break;
    case RpgCharacter::Weapon::DAGGER:
        os << "dagger";
        break;
    case RpgCharacter::Weapon::STAFF:
        os << "staff";
        break;
    default:
        break;
    }

    return os;
}

std::ostream &operator<<(std::ostream &os, const RpgCharacter::RpgClass &rpg_class) {
    switch (rpg_class) {
    case RpgCharacter::RpgClass::Rogue:
        os << "Rogue";
        break;
    case RpgCharacter::RpgClass::Mage:
        os << "Mage";
        break;
    case RpgCharacter::RpgClass::Fighter:
        os << "Fighter";
        break;
    case RpgCharacter::RpgClass::Archer:
        os << "Archer";
        break;
    case RpgCharacter::RpgClass::Assasin:
        os << "Assasin";
        break;
    case RpgCharacter::RpgClass::Druid:
        os << "Druid";
        break;
    case RpgCharacter::RpgClass::Warlock:
        os << "Warlock";
        break;
    case RpgCharacter::RpgClass::Alchemist:
        os << "Alchemist";
        break;
    default:
        break;
    }

    return os;
}

void RpgCharacter::print_details() {
    std::cout << "======CHARACTER DETAILS======\n";
    std::cout << "name:         " << this->name << "\n";
    std::cout << "class:        " << this->rpg_class << "\n";
    std::cout << "agility:      " << this->agility << "\n";
    std::cout << "strength:     " << this->strength << "\n";
    std::cout << "intelligence: " << this->inteligence << "\n";
    std::cout << "weapon:       " << this->weapon << "\n";
    std::cout << "=============================" << std::endl;
}

RpgCharacterDirector::RpgCharacterDirector()
    : builder(std::make_unique<RpgCharacterBuilder>()) {
}

RpgCharacter RpgCharacterDirector::build_mage() {
    builder->set_name("MagAndrzej");
    builder->set_class(RpgCharacter::RpgClass::Mage);

    builder->set_agi(2);
    builder->set_str(2);
    builder->set_int(4);
    builder->set_weapon(RpgCharacter::Weapon::STAFF);

    return builder->get_character();
}

RpgCharacter RpgCharacterDirector::build_fighter() {
    builder->set_name("WojownikMateusz");
    builder->set_class(RpgCharacter::RpgClass::Fighter);

    builder->set_agi(3);
    builder->set_str(4);
    builder->set_int(1);
    builder->set_weapon(RpgCharacter::Weapon::LONGSWORD);

    return builder->get_character();
}

RpgCharacter RpgCharacterDirector::build_archer() {
    builder->set_name("LucznikTomasz");
    builder->set_class(RpgCharacter::RpgClass::Archer);

    builder->set_agi(4);
    builder->set_str(3);
    builder->set_int(1);
    builder->set_weapon(RpgCharacter::Weapon::BOW);

    return builder->get_character();
}

RpgCharacter RpgCharacterDirector::build_assasin() {
    builder->set_name("ZabojcaMarek");
    builder->set_class(RpgCharacter::RpgClass::Archer);

    builder->set_agi(3);
    builder->set_str(3);
    builder->set_int(2);
    builder->set_weapon(RpgCharacter::Weapon::DAGGER);

    return builder->get_character();
}
