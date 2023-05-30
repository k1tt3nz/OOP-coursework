#include "Match.h"

Match::Match(Team* newTeam1, Team* newTeam2) {
	team1 = newTeam1;
	team2 = newTeam2;
}

Team* Match::GetTeam1()
{
	return team1;
}

Team* Match::GetTeam2()
{
	return team2;
}

void Match::SetTeam1(Team* t)
{
	team1 = t;
}

void Match::SetTeam2(Team* t)
{
	team2 = t;
}

