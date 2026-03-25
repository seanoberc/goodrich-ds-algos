//
// Created by Sean Oberc on 3/21/26.
//

#include "Scores.h"
#include "GameEntry.h"
#include <iostream>

Scores::Scores(int maxEnt) : maxEntries(maxEnt) {
    entries[maxEntries];
    std::cout << "An instance of Scores(" << maxEntries << ") was constructed.\n";
}

Scores::~Scores () {
    std::cout << "An instance of Scores was deleted.\n";
    delete entries;
}

void Scores::add(const GameEntry& e) {
    int newScore {e.getScore()};
    if (numEntries == maxEntries) {
        if (newScore <= entries[maxEntries - 1].getScore()) {
            return;
        }
    } else {
        numEntries++;
    }

    int i {numEntries - 2};
    while (i >= 0 && newScore > entries[i].getScore()) {
        entries[i + 1] = entries[i];
        i--;
    }
    entries[i + 1] = e;
}

GameEntry Scores::remove(int i) {
    if (i < 0 || i >= numEntries) {
        throw std::out_of_range("Index out of range.");
    }

    GameEntry e = entries[i];
    for (int j = i + 1; j < numEntries; j++) {
        entries[j - 1] = entries[j];
    }
    numEntries--;
    return e;
}

void Scores::getGame(int index) {
    for (index = 0; index < maxEntries; index++) {
        std::cout << entries[index].getName();
    }
}
