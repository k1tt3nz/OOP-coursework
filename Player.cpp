

#include "Player.h"
#include <iostream>

Player::Player()
{
	nickName = "unknown";
	team = "unknown";
	reaction = 0.0;
	aim = 0.0;
	tactics = 0.0;
	teamwork = 0.0;
	deduction = 0.0;
	gamingExp = 0.0;
	moralPsychoState = 0.0;
}

Player::Player(nlohmann::json p)
{
	this->nickName = p["name"].get<std::string>();
	this->team = p["team"].get<std::string>();
	this->reaction = p["Reaction"].get<double>();
	this->aim = p["AIM"].get<double>();
	this->tactics = p["Tactics"].get<double>();
	this->teamwork = p["Teamwork"].get<double>();
	this->deduction = p["Deduction"].get<double>();
	this->gamingExp = p["GamingExp"].get<double>();
	this->moralPsychoState = p["MoralPsychoState"].get<double>();
}

Player::Player(std::string nickNameP, std::string teamP,double reactionP, double aimP, double tacticsP, double teamworkP, double deductionP, double gamingExpP, double moralPsychoStateP)
{
	nickName = nickNameP;
	team = teamP;
	reaction = reactionP;
	aim = aimP;
	tactics = tacticsP;
	teamwork = teamworkP;
	deduction = deductionP;
	gamingExp = gamingExpP;
	moralPsychoState = moralPsychoStateP;
}

std::string Player::GetNickName()
{
	return nickName;
}

std::string Player::GetTeamName()
{
	return team;
}

double Player::GetReaction() 
{
	return reaction;
}

double Player::GetAim()
{
	return aim;
}

double Player::GetTactics()
{
	return tactics;
}

double Player::GetTeamwork()
{
	return teamwork;
}

double Player::GetDeduction()
{
	return deduction;
}

double Player::GetGamingExp()
{
	return gamingExp;
}

double Player::GetMoralPsychoState()
{
	return moralPsychoState;
}

void Player::Print()
{
	std::cout << nickName << "\n"
		<< team << "\n"
		<< "Характеристики: " << "\n"
		<< "Аим: " << aim << "\n"
		<< "Реакция: " << tactics << "\n"
		<< "Тактика: " << teamwork << "\n"
		<< "Дедукция: " << deduction << "\n"
		<< "Игровой опыт: " << gamingExp << "\n"
		<< "Моральное состаяние: " << moralPsychoState << "\n" << std::endl;
}
