#include "Team.h"

class TeamFactory
{
public:
	virtual Team* CreateTeam() = 0;
	virtual ~TeamFactory() {}
};

class StandartTeamFactory : public TeamFactory {
public:
	Team* CreateTeam() {
		return new TeamStandart();
	}
};