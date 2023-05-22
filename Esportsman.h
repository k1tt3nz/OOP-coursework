#ifndef ESPRRTSMAN_H
#define ESPRRTSMAN_H

#include <string>

class Esportsman
{
public:
	virtual std::string GetNickName() = 0;
	virtual std::string GetTeamName() = 0;
	virtual double GetReaction() = 0;
	virtual double GetAim() = 0;
	virtual double GetTactics() = 0;
	virtual double GetTeamwork() = 0;
	virtual double GetDeduction() = 0;
	virtual double GetGamingExp() = 0;
	virtual double GetMoralPsychoState() = 0;
	virtual void Print() = 0;

	std::string team;			// Команда игрока
	std::string nickName;		// Игровой никней игрока

	double reaction;			// Реакция
	double aim;					// Уменее стрельбы
	double tactics;				// Знание тактик и позиций 
	double teamwork;			// Уменее работать в команде
	double deduction;			// Умение "читать" игровую ситуацию
	double gamingExp;			// Игровой опыт
	double moralPsychoState;	// Моральное состояние игрока

};

#endif // !ESPRRTSMAN_H