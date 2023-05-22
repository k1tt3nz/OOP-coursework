#ifndef TEAM_H
#define TEAM_H

#include <string>
#include "Player.h"
#include <vector>
class Team
{
public:
	void Print();
	Team(std::string teamName, std::vector<Player> commandStaffP);
	Team(std::vector<Player> commandStaffP);
	Team();

	void SetTeamName(std::string tName);
	void SetCommandStaff(std::vector<Player> commandStaff);

private:
	std::string teamName;
	std::vector<Player> commandStaff;
};

#endif // !TEAM_H