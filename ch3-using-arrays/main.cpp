#if 1

#include <cstdlib>
#include <iostream>
#include "GameEntry.h"
#include "Scores.h"

using std::cout;

int main(int argc, char *argv[]) {
    std::string game1 {"Game One"};
    std::string game2 {"Game Two"};
    std::string game3 {"Game Three"};

    GameEntry gEntry1(game1, 4);
    GameEntry gEntry2(game2, 3);
    GameEntry gEntry3(game3, 10);

    // cout << "\nThe score for " << gEntry1.getName() << " is: " << gEntry1.getScore() << ".\n";

    Scores arrScores(3);
    arrScores.add(gEntry1);
    arrScores.add(gEntry2);
    arrScores.add(gEntry3);

    arrScores.getGame(0);

    return EXIT_SUCCESS;
}

#endif
