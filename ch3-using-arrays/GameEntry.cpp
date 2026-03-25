//
// Created by Sean Oberc on 3/21/26.
//

#include "GameEntry.h"
#include <iostream>
#include <utility>

GameEntry::GameEntry(std::string  n, int s)
    : name{std::move(n)}, score{s} {
    std::cout << "An instance of GameEntry(" << name << ", Score: " << score << ") was constructed.\n";
}

std::string GameEntry::getName() const {
    return name;
}

int GameEntry::getScore() const {
    return score;
}
