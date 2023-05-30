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

	virtual std::string GetTeamName() = 0;
	virtual std::vector<Player> CommandStaff() = 0;
};

class TeamStandard : public Team {
public:
	void Print();

	void SetTeamName(std::string tName);
	void SetCommandStaff(std::vector<Player> commandStaff);

	std::string GetTeamName();
	std::vector<Player> CommandStaff();

	TeamStandard(std::string teamName, std::vector<Player> commandStaffP);
	TeamStandard(std::vector<Player> commandStaffP);
	TeamStandard(nlohmann::json j);
	TeamStandard();

private:
	std::string teamName;
	std::vector<Player> commandStaff;
};

#endif // !TEAM_H