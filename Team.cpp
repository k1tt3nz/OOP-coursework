#include <iostream>
#include "Team.h"

void TeamStandart::Print()
{
    std::cout << "Команда: " << teamName << "\n";
    std::cout << "Состав: " << "\n";
    for (auto& player : commandStaff)
    {
        player.Print();
    }
}

TeamStandart::TeamStandart(std::string teamName, std::vector<Player> commandStaffP)
{
	this->teamName = teamName;
	this->commandStaff = commandStaffP;
}
TeamStandart::TeamStandart()
{
    
}
void TeamStandart::SetCommandStaff(std::vector<Player> commandStaff)
{
    this->commandStaff = commandStaff;
}
void TeamStandart::SetTeamName(std::string tName)
{
    this->teamName = tName;
}


TeamStandart::TeamStandart(std::vector<Player> commandStaffP)
{
	this->teamName = "Unknown";
	this->commandStaff = commandStaffP;
}