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
    cout << q.text << endl;
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

void spanishExam() {
    Question questions[MAXQUESTIONS] = {
        {"¿Cuál es la capital de España?",
         {"a) Barcelona", "b) Madrid", "c) Sevilla", "d) Valencia"}, 1},
        {"¿Cuántos colores tiene la bandera de México?",
         {"a) Dos", "b) Tres", "c) Cuatro", "d) Uno"}, 1},
        {"¿Quién escribió 'Don Quijote de la Mancha'?",
         {"a) Gabriel García Márquez", "b) Miguel de Cervantes", "c) Pablo Neruda", "d) Federico García Lorca"}, 1},
        {"¿En qué continente se encuentra Argentina?",
         {"a) Asia", "b) Europa", "c) América", "d) África"}, 2},
        {"¿Cuál es el idioma oficial de Brasil?",
         {"a) Español", "b) Inglés", "c) Portugués", "d) Francés"}, 2}
    };
    int count = 1;
    int currentQuestion = GetRandomValue(0, 4);
    int selectedOption = -1;
    bool answered = false;
    int score = 0;
    EnableCursor();
    while (!WindowShouldClose()) {
        if (!answered) {
            for (int i = 0; i < MAXOPTIONS; i++) {
                if (CheckMouseClickOnOption(i, GetMouseY())) {
                    selectedOption = i;
                    break;
                }
            }
            if (selectedOption >= 0) {
                if (selectedOption == questions[currentQuestion].correctOption) {
                    score++;
                }
                answered = true;
                count++;
            }
        }
        if (answered && IsKeyPressed(KEY_ENTER)) {
            currentQuestion = GetRandomValue(0, 4);
            selectedOption = -1;
            answered = false;
        }
        if (count >= 10) {
            string subject = "spanish";
            DataAccess accessData;
            int grade = gradeSystem(score);
            accessData.addGrade(subject, to_string(grade));
            spanish();
            break;
        }
        SetExitKey(KEY_APOSTROPHE);
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

    switch (choise) {
    case 1:
        cout << "Enter your choice!" << endl;
        cout << "1.English" << endl;
        cout << "2.German" << endl;
        cout << "3.Spanish" << endl;
        cout << "4.Exit" << endl;

        int languagechoice;
        cin >> languagechoice;

        switch (languagechoice) {
        case 1: {
            int score = 0;
            auto questions = generateQuestions();

            for (int i = 0; i < questions.size(); i++) 
            {
                askQuestion(questions[i], score);
            }

            cout << endl << "Score: " << score << endl;
            break;
        }
        case 2:
        {
            int score = 0;
            auto questions = generateQuestions();

            for (int i = 0; i < questions.size(); i++)
            {
                askQuestion(questions[i], score);
            }

            cout << endl << "Score: " << score << endl;
            break;
        }
            break;
        case 3:
        {
            int score = 0;
            auto questions = generateQuestions();

            for (int i = 0; i < questions.size(); i++)
            {
                askQuestion(questions[i], score);
            }

            cout << endl << "Score: " << score << endl;
            break;
        }
            break;
        case 4:
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
       

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