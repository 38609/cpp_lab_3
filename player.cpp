#include <iostream>
#include <vector>
#include "player.h"

Player::Player(string firstName, string lastName, int growth, vector<string> skills) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->growth = growth;
    this->skills = skills;
}

string Player::getFirstName() {
    return this->firstName;
}

string Player::getLastName() {
    return this->lastName;
}

double Player::getGrowth() {
    return this->growth;
}

string Player::getSkills() {
    string result;

    for (auto const &s : skills) {
        result += s + " ";
    }

    return result;
}

string Player::getDetails() {
    string details;

    details += "First name: " + this->getFirstName() + "\n";
    details += "Last name: " + this->getLastName() + "\n";
    details += "Growth: " + to_string(this->getGrowth()) + "cm\n";
    details += "Skills: " + this->getSkills() + "\n";

    return details;
}

void Player::changeData(string firstName, string lastName, int growth) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->growth = growth;
}
