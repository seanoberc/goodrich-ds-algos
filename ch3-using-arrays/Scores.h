//
// Created by Sean Oberc on 3/21/26.
//

#ifndef GOODRICH_DS_ALGOS_SCORES_H
#define GOODRICH_DS_ALGOS_SCORES_H

#include "GameEntry.h"

class Scores {
private:
    int maxEntries {};
    int numEntries {};
    GameEntry* entries {};
public:
    Scores(int maxEnt);
    ~Scores();

    void add(const GameEntry& e);

    GameEntry remove(int i);
    void getGame(int index);
};

#endif //GOODRICH_DS_ALGOS_SCORES_H