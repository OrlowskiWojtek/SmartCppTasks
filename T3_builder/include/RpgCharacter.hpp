#ifndef RPG_CHARACTER_HPP
#define RPG_CHARACTER_HPP

#include <memory>
#include <string>

class RpgCharacter {
public:
    enum class RpgClass {
        Rogue,
        Mage,
        Fighter,
        Archer,
        Assasin,
        Druid,
        Warlock,
        Alchemist
    };

    enum class Weapon {
        BOW,
        LONGSWORD,
        SWORD,
        DAGGER,
        STAFF
    };

    friend std::ostream& operator<<(std::ostream&, const Weapon&);
    friend std::ostream& operator<<(std::ostream&, const RpgClass&);

    std::string name;
    RpgClass rpg_class;

    int strength;
    int agility;
    int inteligence;

    Weapon weapon;

    void print_details();
};

class RpgCharacterBuilder {
public:
    void set_name(std::string);
    void set_class(RpgCharacter::RpgClass);
    void set_str(int);
    void set_agi(int);
    void set_int(int);
    void set_weapon(RpgCharacter::Weapon);

    RpgCharacter get_character();

private:
    RpgCharacter m_rpg_character;
};

class RpgCharacterDirector {
private:
    std::unique_ptr<RpgCharacterBuilder> builder;

public:
    RpgCharacterDirector();

    RpgCharacter build_mage();
    RpgCharacter build_fighter();
    RpgCharacter build_archer();
    RpgCharacter build_assasin();
};

#endif
