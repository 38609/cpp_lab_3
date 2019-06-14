#include <string>
#include <vector>

#ifndef HEADER_H
#define HEADER_H

using namespace std;

class Player {
private:
    string firstName;
    string lastName;
    int growth;
    vector<string> skills;
public:
    Player(string firstName, string lastName, int growth, vector<string> skills);

    string getDetails();

    string getSkills();

    double getGrowth();

    string getLastName();

    string getFirstName();

    void changeData(string firstName, string lastName, int growth);
};

#endif