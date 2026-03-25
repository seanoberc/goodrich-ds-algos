//
// Created by Sean Oberc on 3/21/26.
//

#ifndef GOODRICH_DS_ALGOS_GAMEENTRY_H
#define GOODRICH_DS_ALGOS_GAMEENTRY_H

#include <string>

class GameEntry {
public:
    GameEntry(std::string  n, int s);
    std::string getName() const;
    int getScore() const;
private:
    std::string name {};
    int score {};
};

#endif //GOODRICH_DS_ALGOS_GAMEENTRY_H