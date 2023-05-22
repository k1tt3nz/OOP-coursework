#include <iostream>
#include "Team.h"

void Team::Print()
{
    std::cout << "Команда: " << teamName << "\n";
    std::cout << "Состав: " << "\n";
    for (auto& player : commandStaff)
    {
        player.Print();
    }
}

Team::Team(std::string teamName, std::vector<Player> commandStaffP)
{
	this->teamName = teamName;
	this->commandStaff = commandStaffP;
}
Team::Team()
{
    
}
void Team::SetCommandStaff(std::vector<Player> commandStaff)
{
    this->commandStaff = commandStaff;
}
void Team::SetTeamName(std::string tName)
{
    this->teamName = tName;
}


Team::Team(std::vector<Player> commandStaffP)
{
	this->teamName = "Unknown";
	this->commandStaff = commandStaffP;
}