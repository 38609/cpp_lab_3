#include <iostream>
#include <string>

#include "player.h"
#include "team.h"

int main() {

    Team firstTeam("First team");
    firstTeam.addPlayer(Player("Anna", "Kowalska", 170, {"Skill#1", "Skill#2", "Skill#3", "Skill#4"}));
    firstTeam.addPlayer(Player("Jan", "Kowalski", 181, {"Skill#1", "Skill#2", "Skill#3", "Skill#4"}));
    firstTeam.addPlayer(Player("Karol", "Kowalski", 174, {"Skill#1", "Skill#2", "Skill#3", "Skill#4"}));
    firstTeam.addPlayer(Player("Bartek", "Kowalski", 190, {"Skill#1", "Skill#2", "Skill#3", "Skill#4"}));
    firstTeam.addPlayer(Player("Paweł", "Kowalski", 185, {"Skill#1", "Skill#2", "Skill#3", "Skill#4"}));

    Team secondTeam("Second team");
    secondTeam.addPlayer(Player("Anna", "Kowalska", 170, {"Skill#1", "Skill#2", "Skill#3", "Skill#4"}));
    secondTeam.addPlayer(Player("Jan", "Kowalski", 181, {"Skill#1", "Skill#2", "Skill#3", "Skill#4"}));
    secondTeam.addPlayer(Player("Karol", "Kowalski", 174, {"Skill#1", "Skill#2", "Skill#3", "Skill#4"}));
    secondTeam.addPlayer(Player("Bartek", "Kowalski", 190, {"Skill#1", "Skill#2", "Skill#3", "Skill#4"}));
    secondTeam.addPlayer(Player("Paweł", "Kowalski", 185, {"Skill#1", "Skill#2", "Skill#3", "Skill#4"}));

    Team thirdTeam(secondTeam);

    cout << firstTeam.getDetails();
    cout << secondTeam.getDetails();
    cout << thirdTeam.getDetails();

    thirdTeam.
            replacePlayer(2, Player("Błażej", "Nowak", 200, {"Skill#1", "Skill#2", "Skill#3", "Skill#4"}));

    thirdTeam.changePlayerData(1, "Mikołaj", "Kopernik", 210);

    cout << firstTeam.getDetails();
    cout << secondTeam.getDetails();
    cout << thirdTeam.getDetails();

    return 0;
}