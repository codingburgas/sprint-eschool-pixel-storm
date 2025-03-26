// filepath: c:\Users\User\Documents\Visual Studio 2022\sprint-eschool-pixel-storm\main.cpp
#include "Question.h"
#include "Exams.h"
#include "Banner.h"
#include <random>

void askQuestion(Question q, int& score) {
    int answer;
    cout << q.text << endl;
    for (size_t i = 0; i < q.options.size(); i++) {
        cout << i + 1 << ". " << q.options[i] << endl;
    }
    cout << "Your answer: ";
    cin >> answer;

    if (answer - 1 == q.correct) {
        cout << "Correct!\n";
        score++;
    }
    else {
        cout << "Incorrect! The correct answer was " << q.options[q.correct] << ".\n";
    }
}

vector<Question> englishExam() {
    return {
        // ...existing questions...
    };
}

vector<Question> deutschExam() {
    return {
        // ...existing questions...
    };
}

vector<Question> spanishExam() {
    return {
        // ...existing questions...
    };
}

void displayBanner() {
    cout << "   ___ _          _   __ _                       " << endl;
    cout << "  / _ (_)_  _____| | / _\\ |_ ___  _ __ _ __ ___  " << endl;
    cout << " / /_)/ \\ \\/ / _ \\ | \\ \\| __/ _ \\| '__| '_ ` _ \\ " << endl;
    cout << "/ ___/| |>  <  __/ | _\\ \\ || (_) | |  | | | | | |" << endl;
    cout << "\\/    |_/_/\\_\\___|_| \\__/\\__\\___/|_|  |_| |_| |_|" << endl;
}

int main() {
    displayBanner();

    vector<int> gradesEnglish;
    vector<int> gradesDeutsch;
    vector<int> gradesSpanish;

    cout << "Enter your choice!" << endl;
    cout << "1.Do a test" << endl;
    cout << "2.Grade scale" << endl;
    cout << "3.Exit" << endl;

    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
    {
        cout << "Enter your choice!" << endl;
        cout << "1.English" << endl;
        cout << "2.German" << endl;
        cout << "3.Spanish" << endl;
        cout << "4.Exit" << endl;

        int languageChoice;
        cin >> languageChoice;

        // Create a random value
        random_device seed;  // Get a random seed from the device
        mt19937 gen(seed()); // MT generator
        uniform_int_distribution<> distrib(0, 29); // Distribution from 0 to 29

        int questionIndex = distrib(gen); // Create a variable with the seed and the limitations set

        switch (languageChoice) {
        case 1: {
            int score = 0;
            auto questions = englishExam();

            askQuestion(questions[questionIndex], score);

            cout << endl << "Score: " << score << endl;
            gradesEnglish.push_back(score);
            break;
        }
        case 2:
        {
            int score = 0;
            auto questions = deutschExam();

            askQuestion(questions[questionIndex], score);

            cout << endl << "Score: " << score << endl;
            gradesDeutsch.push_back(score);
            break;
        }
        case 3:
        {
            int score = 0;
            auto questions = spanishExam();

            askQuestion(questions[questionIndex], score);

            cout << endl << "Score: " << score << endl;
            gradesSpanish.push_back(score);
            break;
        }
        case 4:
        {
            return 0;
        }
        default:
        {
            cout << "Invalid choice!" << endl;
        }
        }
        break;
    }
    case 2:
    {
        cout << "Choose which subject do you want to review\n 1.English\n 2.Deutsch\n 3.Spanish\n 4.All subjects";
        int chosenSubject;
        cin >> chosenSubject;

        switch (chosenSubject) {
        case 1:
        {
            cout << "Your English grades are:";
            for (int i = 0; i < gradesEnglish.size(); i++) {
                cout << gradesEnglish[i] << " ";
            }
            cout << endl;
            break;
        }
        case 2:
        {
            cout << "Your Deutsch grades are:";
            for (int i = 0; i < gradesDeutsch.size(); i++) {
                cout << gradesDeutsch[i] << " ";
            }
            cout << endl;
            break;
        }
        case 3:
        {
            cout << "Your Spanish grades are:";
            for (int i = 0; i < gradesSpanish.size(); i++) {
                cout << gradesSpanish[i] << " ";
            }
            cout << endl;
            break;
        }
        case 4:
        {
            cout << "Your grades are:" << endl;
            cout << "English:";
            for (int i = 0; i < gradesEnglish.size(); i++) {
                cout << gradesEnglish[i] << " ";
            }
            cout << endl;
            cout << "Deutsch:";
            for (int i = 0; i < gradesDeutsch.size(); i++) {
                cout << gradesDeutsch[i] << " ";
            }
            cout << endl;
            cout << "Spanish:";
            for (int i = 0; i < gradesSpanish.size(); i++) {
                cout << gradesSpanish[i] << " ";
            }
            cout << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice!" << endl;
            break;
        }
        }
        break;
    }
    case 3:
    {
        return 0;
    }
    default:
        cout << "Invalid option!" << endl;
        break;
    }
    return 0;
}