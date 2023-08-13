#include <iostream>
#include "allclasses.h"
// 19:57 code along ep 3
int main() {
    // ep 4

    Cleric cler1;

    for (int i = 0; i < 20; i++){
        std::cout << "Cleric\n"
                  << "-MaxHP: " << cler1.getMaxHp() << '\n'
                  << "-Strength: " << cler1.getStrength() << '\n'
                  << "-Intellect: " << cler1.getIntellect() << '\n'
                  << "-Level: " << cler1.getLevel() << '\n'
                  << "-EXP: " << cler1.getCurrentEXP() << "/" << cler1.getEXPToNextLevel() << '\n';
        cler1.gainEXP(300u);
        std::cout << '\n';
    }

    return 0;
}
