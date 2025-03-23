#include <iostream>
#include <vector>
#include <random>
 
using namespace std;
 
struct Question {
    string text;
    vector<string> options;
    int correct; // Index of correct option
};
 
// Function to display a banner
void displayBanner() {
    cout << "----------------------------\n";
    cout << "Welcome to the Quiz System!\n";
    cout << "----------------------------\n";
}
 
// Function to generate English exam questions
vector<Question> englishExam() {
    return {
        {"What is the capital of England?", {"London", "Paris", "Berlin", "Madrid"}, 0},
        {"What is 2 + 2?", {"3", "4", "5", "6"}, 1},
        // Add more questions as needed
    };
}
 
// Function to generate German exam questions
vector<Question> deutschExam() {
    return {
        {"Was ist die Hauptstadt von Deutschland?", {"Berlin", "Paris", "London", "Madrid"}, 0},
        {"Was ist 3 + 3?", {"5", "6", "7", "8"}, 1},
        // Add more questions as needed
    };
}
 
// Function to generate Spanish exam questions
vector<Question> spanishExam() {
    return {
        {"¿Cuál es la capital de España?", {"Madrid", "Barcelona", "Sevilla", "Valencia"}, 0},
        {"¿Cuánto es 5 + 5?", {"8", "9", "10", "11"}, 2},
        // Add more questions as needed
    };
}
 
// Function to ask a question and track the score
void askQuestion(Question q, int& score) { // Pass score by reference
    int answer;
    cout << q.text << endl;
    for (size_t i = 0; i < q.options.size(); i++) {
        cout << i + 1 << ". " << q.options[i] << endl;
    }
    cout << "Your answer: ";
    cin >> answer;
 
    if (answer - 1 == q.correct) {
        score++;
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong! The correct answer was: " << q.options[q.correct] << endl;
    }
}
 
int main() {
    displayBanner();
 
    vector<int> gradesEnglish;
    vector<int> gradesDeutsch;
    vector<int> gradesSpanish;
 
    cout << "Enter your choice!" << endl;
    cout << "1. Do a test" << endl;
    cout << "2. Grade scale" << endl;
    cout << "3. Exit" << endl;
 
    int choise;
    cin >> choise;
 
    switch (choise) {
    case 1:
        cout << "Enter your choice!" << endl;
        cout << "1. English" << endl;
        cout << "2. German" << endl;
        cout << "3. Spanish" << endl;
        cout << "4. Exit" << endl;
 
        int languageChoice;
        cin >> languageChoice;
 
        // Random value generation
        random_device seed;  
        mt19937 gen(seed()); 
        uniform_int_distribution<> distrib(0, 29); // Fixed range to match vector size
 
        int questionIndex = distrib(gen);
 
        int score = 0;
 
        switch (languageChoice) {
        case 1: {
            auto questions = englishExam();
            askQuestion(questions[questionIndex], score);
            gradesEnglish.push_back(score);
            break;
        }
        case 2: {
            auto questions = deutschExam();
            askQuestion(questions[questionIndex], score);
            gradesDeutsch.push_back(score);
            break;
        }
        case 3: {
            auto questions = spanishExam();
            askQuestion(questions[questionIndex], score);
            gradesSpanish.push_back(score);
            break;
        }
        case 4:
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
 
        cout << "\nScore: " << score << endl;
        break;
 
    case 2:
        cout << "Choose which subject you want to review\n1. English\n2. German\n3. Spanish\n";
        break;
 
    case 3:
        return 0;
 
    default:
        cout << "Invalid choice!" << endl;
    }
 
    return 0;
}