#ifndef TEST_CPP
#define TEST_CPP


#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Tests.h"

#include "Player.h"
#include "Team.h"
#include "TeamFactory.h"
#include "dependencies/include/nlohmann/json.hpp"
#include "JsonWorker.h"
#include "Match.h"
#include "ResultsTable.h"



void Tests::test_create_team_from_json()
{
    nlohmann::json js = JsonWorker::GetJsonStruct("test.json");
    StandardTeamFactory* sf = new StandardTeamFactory;

    Team* t = sf->CreateTeam(js);
    t->Print();
}

void Tests::test_create_player_from_json()
{
    Player p{ "Stepan Stepanov","ZVO",10,10,10,10,10,10,0 };
    nlohmann::json j{};
    j["name"] = p.GetNickName();
    j["team"] = p.GetTeamName();
    j["AIM"] = p.GetAim();
    j["Reaction"] = p.GetReaction();
    j["Tactics"] = p.GetTactics();
    j["Teamwork"] = p.GetTeamwork();
    j["Deduction"] = p.GetDeduction();
    j["GamingExp"] = p.GetGamingExp();
    j["MoralPsychoState"] = p.GetMoralPsychoState();

    std::cout << j << std::endl;
}

void Tests::test_create_player()
{
    Player p{ "Степан Степанов","Zтепан",10,10,10,10,10,10,0 };
    std::vector<Player> team = { p,p,p,p,p };
    TeamStandard t("t", team);
    t.Print();
}

void Tests::test_create_math()
{
    nlohmann::json js = JsonWorker::GetJsonStruct("test.json");
    StandardTeamFactory* sf = new StandardTeamFactory;

    Team* t1 = sf->CreateTeam(js);
    Team* t2 = sf->CreateTeam(js);

    Match mm { t1,t2 };

    Team* t = mm.GetTeam1();
    t->Print();
}

void Tests::test_create_resultTable()
{
    std::string nt1 = "Команда 1";
    std::vector<std::string> tr1 = { "Победа", "Поражение","Поражение" ,"Поражение" ,"Победа" };

    std::string nt2 = "Команда 2";
    std::vector<std::string> tr2 = { "Победа", "Победа","Победа", "Победа","Поражение" };
    ResultsTable rt{nt1,tr1,nt2,tr2};
    rt.Print();
}

#endif // !TEST_CPP