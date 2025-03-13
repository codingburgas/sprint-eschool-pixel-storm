#include <iostream>
#include <vector>
using namespace std;

struct Question {
    string text;
    vector<string> options;
    int correct;
};

void askQuestion(const Question& q, int& score) {
    int answer;
    cout << q.text <<endl;
    for (size_t i = 0; i < q.options.size(); i++) {
        cout << i + 1 << ". " << q.options[i] << endl;
    }
    cout << "Your answer: ";
    cin >> answer;

    if (answer - 1 == q.correct)
    {
        score++;
    }
}






int main() {

    string banner1 = "  _______    _______        __       ________    _______  _______     ______      ______    __   ___  ";
    string banner2 = " /'' _   |  /'      \      /''\     |'      '\  /'     '||   _  '\   /    ' \    /    ' \  |/'| /  ') ";
    string banner3 = "(: ( \___) |:        |    /    \    (.  ___  :)(: ______)(. |_)  :) // ____  \  // ____  \ (: |/   /  ";
    string banner4 = " \/ \      |_____/   )   /' /\  \   |: \   ) || \/    |  |:     \/ /  /    ) :)/  /    ) :)|    __/   ";
    string banner5 = " //  \ ___  //      /   //  __'  \  (| (___\ || // ___)_ (|  _  \\(: (____/ //(: (____/ // (// _  \   ";
    string banner6 = "(:   _(  _||:  __   \  /   /  \\  \ |:       :)(:      '||| |_)  :)\        /  \        /  |: | \  \  ";
    string banner7 = " \_______) |__|  \___)(___/    \___)(________/  \_______)(_______/  \'_____/    \'_____/   (__|  \__) ";
    string banner8 = "                                                                                                      ";

    cout << banner1 << endl << banner2 << endl << banner3 << endl << banner4 << endl << banner5 << banner6 << endl << banner7 << endl << banner8;


    cout << "Enter your choice!" << endl;
    cout << "1.Do a test" << endl;
    cout << "2.Grade scale" << endl;
    cout << "3.Exit" << endl;


    int choise;
    cin >> choise;

    switch(choise){
        case 1:

    int score = 0;
    auto questions = generateQuestions();

    for (int i = 0; i < 3; i++)
    {
        askQuestion(questions[i], score);
    }

    vector<Question> generateQuestions() {
        return {
             {"Molly used to ... watching \n cartoons when she was young.",
            {"a) loving",
            "b) loved",
            "c) love",
            "d) have love"},
            2},
        };
        };

    cout << endl << "Score: " << score <<endl;



        break;

        case 2:
                
        break;

        
        case 3:
            return 0;
        break;

        default:
        cout << "Invalid option!";
        break;
    }


}