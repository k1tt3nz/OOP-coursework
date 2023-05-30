#include <iostream>
#include "Team.h"

void TeamStandard::Print()
{
    std::cout << "Команда: " << teamName << "\n";
    std::cout << "Состав: " << "\n";
    for (auto& player : commandStaff)
    {
        player.Print();
    }
}

TeamStandard::TeamStandard(std::string teamName, std::vector<Player> commandStaffP)
{
	this->teamName = teamName;
	this->commandStaff = commandStaffP;
}

TeamStandard::TeamStandard(nlohmann::json js) {
    teamName = js["teamName"].get<std::string>();

    std::vector <Player> v;
    for (int i = 0; i < js["sizeTeam"].get<int>(); i++) {
        Player p{ js["team"][i] };
        v.push_back(p);
    }

    commandStaff = v;
}

TeamStandard::TeamStandard()
{
    
}
void TeamStandard::SetCommandStaff(std::vector<Player> commandStaff)
{
    this->commandStaff = commandStaff;
}
std::string TeamStandard::GetTeamName()
{
    return teamName;
}
std::vector<Player> TeamStandard::CommandStaff()
{
    return commandStaff;
}
void TeamStandard::SetTeamName(std::string tName)
{
    this->teamName = tName;
}


TeamStandard::TeamStandard(std::vector<Player> commandStaffP)
{
	this->teamName = "Unknown";
	this->commandStaff = commandStaffP;
}