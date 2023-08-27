#include <iostream>
#include "playercharacter.h"
// 19:57 code along ep 3
int main() {
// ep 5 : https://www.youtube.com/watch?v=FE8cq-GZ21o&list=PLalVdRk2RC6pqOVxRNj5Uui7FN4r-WorM&index=5
    PlayerCharacter p1(new Wizard());

    for (int i = 0; i < 2; i++) {
        std::cout
                << p1.getClassName()
                << "-Level: " << p1.getLevel() << '\n'
                << "-EXP: " << p1.getCurrentEXP() << '/' << p1.getEXPToNextLevel() << '\n'
                << "-HP:" << p1.getCurrentHP() << '/' << p1.getMaxHP() << '\n'
                << "-Strength: " << p1.getStrength() << '\n'
                << "-Intellect: " << p1.getIntellect() << '\n' << '\n';
        if (i < 1)
            p1.gainEXP(100u);
    }

    return 0;
}
