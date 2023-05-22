#ifndef PLAYER_H
#define PLAYER_H

#include "dependencies/include/nlohmann/json.hpp"

#include "Esportsman.h"
class Player : public Esportsman
{
public:
	Player();
	Player(nlohmann::json p);
	Player(std::string nickNameP, std::string teamP, double reactionP, double aimP, double tacticsP, double teamworkP, double deductionP, double gamingExpP, double moralPsychoStateP);

	std::string GetNickName() override;
	std::string GetTeamName() override;
	double GetReaction() override;
	double GetAim() override;
	double GetTactics() override;
	double GetTeamwork() override;
	double GetDeduction() override;
	double GetGamingExp() override;
	double GetMoralPsychoState() override;
	void Print() override;

private:

};

#endif // PLAYER_H