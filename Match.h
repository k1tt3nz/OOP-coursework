#include "Team.h"

class Match
{
public:
	Team* GetTeam1();
	Team* GetTeam2();

	void SetTeam1(Team* t);
	void SetTeam2(Team* t);

	Match(Team* newTeam1, Team* newTeam2);
private:
	Team* team1;
	Team* team2;



};

