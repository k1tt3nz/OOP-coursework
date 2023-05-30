#ifndef TEAM_H
#define TEAM_H

#include <string>
#include "Player.h"
#include <vector>
class Team
{
public:
	virtual void Print() = 0;

	virtual void SetTeamName(std::string tName) = 0;
	virtual void SetCommandStaff(std::vector<Player> commandStaff) = 0;
};

class TeamStandart : public Team {
public:
	void Print();

	void SetTeamName(std::string tName);
	void SetCommandStaff(std::vector<Player> commandStaff);
	TeamStandart(std::string teamName, std::vector<Player> commandStaffP);
	TeamStandart(std::vector<Player> commandStaffP);
	TeamStandart();

private:
	std::string teamName;
	std::vector<Player> commandStaff;
};

#endif // !TEAM_H