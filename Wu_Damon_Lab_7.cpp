// Damon Wu 
// 11/1/2024
// Lab 7 

#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

int main(){

    // file creation variables
    ifstream infile;
    ofstream outfile;

    // creates / open files 
    infile.open ("Game_scores.txt");
    outfile.open ("Shown_score.txt");

//***************************
// Variables
    string Name;        // takes the name of the first player, then reads the score 
    double pl1score1;
    double pl1score2;
    double pl1score3;

    string Name2;       // takes the name of the second player, then reads the score 
    double pl2score1;
    double pl2score2;
    double pl2score3;

    string Name3;       // takes the name of the third player, then reads the score 
    double pl3score1;
    double pl3score2;
    double pl3score3;
// ***************************
// calculates average score for each player. 
    double avg1;
    double avg2;
    double avg3;

    // shows code working
    cout<< "processing informatiom \n";

    // does calculation of scores for player1 
    infile >> Name;                                                          // takes in name
    infile >> pl1score1 >> pl1score2 >> pl1score3;                           // takes in scores          
    avg1 = ((pl1score1 + pl1score2 + pl1score3) /3);                         // calculates average
    outfile << "Player 1: " << Name <<  " score: "<< avg1 << endl;            // shows the name

    // tells skill level depending on the score. 
        if (avg1 < 1000)
            outfile << Name << ", Keep Practicing! \n";
        if (avg1 >= 1000 && avg1 <= 1500)
            outfile << Name << ", You're an intermediate! \n";
        if (avg1 >= 1500 && avg1 <= 1800)
            outfile << Name << ", You're advanced, Great Job! \n";
        if (avg1 >= 1800 && avg1 <= 2000)
            outfile << Name << ", You're a Master, Excellent! \n";
        if (avg1 > 2000)
            outfile << Name << ", You're an Expert! Congrats! \n";
    
    // does calculation of scores for player 2
    infile >> Name2;                                    // takes in the player name
    infile >> pl2score1 >> pl2score2 >> pl2score3;      // takes in scores
    avg2 = ((pl2score1 + pl2score2 + pl2score3) /3);    // calculates average
    outfile << "Player 2: " << Name2 << " score: "<< avg2 << endl;           // shows the name

    // tells skill level depending on the score. 
        if (avg2 < 1000)
            outfile << Name2 << ", Keep Practicing! \n";
        if (avg2 >= 1000 && avg2 <= 1500)
            outfile << Name2 << ", You're an intermediate! \n";
        if (avg2 >= 1500 && avg2 <= 1800)
            outfile << Name2 << ", You're advanced, Great Job! \n";
        if (avg2 >= 1800 && avg2 <= 2000)
            outfile << Name2 << ", You're a Master, Excellent! \n";
        if (avg2 > 2000)
            outfile << Name2 << ", You're an Expert! Congrats! \n";

    // does calculation of scores for player 3
    infile >> Name3;                                    // takes in the player name
    infile >> pl3score1 >> pl3score2 >> pl3score3;      // takes in scores
    avg3 = ((pl3score1 + pl3score2 + pl3score3) /3);    // calculates average
    outfile << "Player 3: " << Name3 << " score: " << avg3 << endl;           // shows the name

    // tells skill level depending on the score. 
        if (avg3 < 1000)
            outfile << Name3 << ", Keep Practicing! \n";
        if (avg3 >= 1000 && avg3 <= 1500)
            outfile << Name3 << ", You're an intermediate! \n";
        if (avg3 >= 1500 && avg3 <= 1800)
            outfile << Name3 << ", You're advanced, Great Job! \n";
        if (avg3 >= 1800 && avg3 <= 2000)
            outfile << Name3 << ", You're a Master, Excellent! \n";
        if (avg3 > 2000)
            outfile << Name3 << ", You're an Expert! Congrats! \n";

//closes files
infile.close();
outfile.close();

    return 0;
}
