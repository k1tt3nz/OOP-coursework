#include "Team.h"

class TeamFactory
{
public:
	virtual Team* CreateTeam() = 0;
	virtual Team* CreateTeam(nlohmann::json js) = 0;
	virtual ~TeamFactory() {}
};

class StandartTeamFactory : public TeamFactory {
public:
	Team* CreateTeam() {
		return new TeamStandard();
	}

	Team* CreateTeam(nlohmann::json js) {
		return new TeamStandard(js);
	}
};