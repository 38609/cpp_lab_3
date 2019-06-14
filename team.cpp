#include "team.h"

Team::Team(string name) {
    this->name = name;
}

Team::Team(const Team &fTeam) {
    this->name = fTeam.name + " - Copy";
    for (const Player &player : fTeam.players) {
        addPlayer(player);
    }
}

Player Team::replacePlayer(int index, Player player) {
    return this->players[index] = player;
}

void Team::changePlayerData(int index, string firstName, string lastName, int growth) {
    this->players[index].changeData(firstName, lastName, growth);
}

string Team::getName() {
    return name;
}

string Team::getDetails() {
    string result = "Team: " + getName() + "\n\n";
    result += "========= Players ===========\n";

    for (Player player : this->players) {
        result += player.getDetails() + "\n";
    }

    return result + "\n\n";
}

void Team::addPlayer(const Player &player) {
    this->players.push_back(player);
}