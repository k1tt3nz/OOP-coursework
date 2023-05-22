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

	std::string team;			// ������� ������
	std::string nickName;		// ������� ������ ������

	double reaction;			// �������
	double aim;					// ������ ��������
	double tactics;				// ������ ������ � ������� 
	double teamwork;			// ������ �������� � �������
	double deduction;			// ������ "������" ������� ��������
	double gamingExp;			// ������� ����
	double moralPsychoState;	// ��������� ��������� ������

};

#endif // !ESPRRTSMAN_H