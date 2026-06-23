#include <iostream>

using namespace std;

int main()
{
    char type;        //type of the competition.  (league/group stage competition)
    int groups;       //number of groups in the competition.
    int matches;      //number of total matches in that competition.
    int each_team;    //number of total matches for each team.
    int per_group;    //number of total matches for each group in that competition.
    int game_week;    //number of total matches per game week.
    int teams;        //number of teams participating in the league or the competiton.
    const int r = 2;  //the variable r in the combinational equation.
    char Home_Away;   //if the competition home away or not.

    cout << "Is the calculation for a league or a group stages? "
         << "\nType 'L' if league, type 'G' if group stages: ";
    cin >> type;


    if (type == 'g')        //if user entered a lower case letter
    {
        type = 'G';
    }
    else if (type == 'l')
    {
        type = 'L';
    }


    switch (type)
    {
        case ('L'):
        {
            cout << "Enter the number of teams in that league: ";
            cin >> teams;

            matches = 2*teams*(teams-1) / r;
            each_team = 2*(teams-1);
            game_week = teams / 2;

            cout << "\nBy default the league is a Home_Away competition." << endl;
            cout << "Total number of matches in the league = " << matches <<endl;
            cout << "Total number of matches in each leg = " << matches/2 <<endl;        //number of total matches of one leg in the league
            cout << "Total number of matches per game week = " << game_week <<endl;
            cout << "Total number of matches for each team = " << each_team;
            break;
        }
        case ('G'):
        {
            cout << "Enter number of groups in that competition: ";
            cin >> groups;
            cout << "Enter the number of teams in each group: ";
            cin >> teams;
            cout << "Is the group stage Home-Away or not? (y,n)"
                 << "\nType 'y' if yes, type 'n' if no: ";
            cin >> Home_Away;

            per_group = teams*(teams-1) / r;
            each_team = (teams-1);
            if (Home_Away == 'y' || Home_Away == 'Y')
            {
                per_group*=2;
                each_team*=2;
            }
            matches = groups*per_group;

            cout << "\nTotal number of matches in the group stage = " << matches << endl;
            cout << "Total number of matches in each group = " << per_group <<endl;
            cout << "Total number of matches for each team = " << each_team;
            break;
        }
        default:
        {
            cout << "Can't understand what you entered, please restart and enter the letters between quotation '' "<<endl;
        }

    }



    return 0;
}
