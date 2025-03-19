#include <iostream>
#include <vector>
using namespace std;

struct Question {
    string text;
    vector<string> options;
    int correct;
};

void askQuestion(Question q, int score) {
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

vector<Question> englishExam() {
    return {
         {"What is the capital of Spain?",
         {"a) Barcelona", "b) Madrid", "c) Seville", "d) Valencia"}, 1},
        {"How many colors does the Mexican flag have?",
         {"a) Two", "b) Three", "c) Four", "d) One"}, 1},
        {"Who wrote 'Don Quixote'?",
         {"a) Gabriel García Márquez", "b) Miguel de Cervantes", "c) Pablo Neruda", "d) Federico García Lorca"}, 1},
        {"On which continent is Argentina located?",
         {"a) Asia", "b) Europe", "c) America", "d) Africa"}, 2},
        {"What is the official language of Brazil?",
         {"a) Spanish", "b) English", "c) Portuguese", "d) French"}, 2},
        {"What is the longest river in the world?",
         {"a) Amazon", "b) Nile", "c) Yangtze", "d) Mississippi"}, 1},
        {"In what year did Christopher Columbus arrive in America?",
         {"a) 1492", "b) 1519", "c) 1776", "d) 1600"}, 0},
        {"What is the largest planet in the solar system?",
         {"a) Mars", "b) Jupiter", "c) Saturn", "d) Neptune"}, 1},
        {"Who painted the Mona Lisa?",
         {"a) Michelangelo", "b) Van Gogh", "c) Leonardo da Vinci", "d) Rembrandt"}, 2},
        {"Which instrument is associated with Mozart?",
         {"a) Guitar", "b) Violin", "c) Piano", "d) Trumpet"}, 2},
        {"What is the chemical symbol for water?",
         {"a) H2O", "b) CO2", "c) O2", "d) NH3"}, 0},
        {"In which country is the Eiffel Tower located?",
         {"a) Germany", "b) Italy", "c) France", "d) Spain"}, 2},
        {"What is the lightest metal?",
         {"a) Aluminum", "b) Lithium", "c) Iron", "d) Copper"}, 1},
        {"What is the largest ocean in the world?",
         {"a) Atlantic", "b) Indian", "c) Pacific", "d) Arctic"}, 2},
        {"Who was the first President of the United States?",
         {"a) Abraham Lincoln", "b) George Washington", "c) Thomas Jefferson", "d) John Adams"}, 1},
        {"What gas do humans mainly breathe?",
         {"a) Oxygen", "b) Nitrogen", "c) Carbon Dioxide", "d) Hydrogen"}, 0},
        {"How many bones are in the adult human body?",
         {"a) 206", "b) 195", "c) 220", "d) 250"}, 0},
        {"What is the official currency of Japan?",
         {"a) Yuan", "b) Peso", "c) Yen", "d) Dollar"}, 2},
        {"Which country has the largest population in the world?",
         {"a) China", "b) India", "c) United States", "d) Russia"}, 0},
        {"What is the fastest land animal?",
         {"a) Cheetah", "b) Lion", "c) Antelope", "d) Kangaroo"}, 0},
        {"Which country is famous for the tango?",
         {"a) Spain", "b) Argentina", "c) Mexico", "d) Brazil"}, 1},
        {"What is the longest bone in the human body?",
         {"a) Tibia", "b) Femur", "c) Radius", "d) Humerus"}, 1},
        {"In what year did World War II start?",
         {"a) 1939", "b) 1945", "c) 1914", "d) 1925"}, 0},
        {"What is the chemical symbol for gold?",
         {"a) Au", "b) Ag", "c) Pb", "d) Fe"}, 0},
        {"What is the result of 8 × 7?",
         {"a) 56", "b) 64", "c) 49", "d) 72"}, 0},
        {"What is the most spoken language in the world?",
         {"a) Spanish", "b) English", "c) Mandarin", "d) Arabic"}, 2},
        {"Who was the first man to walk on the Moon?",
         {"a) Buzz Aldrin", "b) Neil Armstrong", "c) Yuri Gagarin", "d) Michael Collins"}, 1},
        {"What is the capital of Italy?",
         {"a) Milan", "b) Rome", "c) Venice", "d) Naples"}, 1},
        {"What is the largest desert in the world?",
         {"a) Sahara", "b) Kalahari", "c) Gobi", "d) Atacama"}, 0},
        {"Which gas is known as 'laughing gas'?",
         {"a) Oxygen", "b) Helium", "c) Nitrogen", "d) Nitrous oxide"}, 3}
    };
};
vector<Question> deutschExam() {
    return {
          {"Was ist die Hauptstadt von Spanien?",
         {"a) Barcelona", "b) Madrid", "c) Sevilla", "d) Valencia"}, 1},
        {"Wie viele Farben hat die mexikanische Flagge?",
         {"a) Zwei", "b) Drei", "c) Vier", "d) Eine"}, 1},
        {"Wer schrieb 'Don Quijote'?",
         {"a) Gabriel García Márquez", "b) Miguel de Cervantes", "c) Pablo Neruda", "d) Federico García Lorca"}, 1},
        {"Auf welchem Kontinent liegt Argentinien?",
         {"a) Asien", "b) Europa", "c) Amerika", "d) Afrika"}, 2},
        {"Was ist die Amtssprache von Brasilien?",
         {"a) Spanisch", "b) Englisch", "c) Portugiesisch", "d) Französisch"}, 2},
        {"Welcher ist der längste Fluss der Welt?",
         {"a) Amazonas", "b) Nil", "c) Jangtse", "d) Mississippi"}, 1},
        {"In welchem Jahr kam Christoph Kolumbus nach Amerika?",
         {"a) 1492", "b) 1519", "c) 1776", "d) 1600"}, 0},
        {"Welcher ist der größte Planet im Sonnensystem?",
         {"a) Mars", "b) Jupiter", "c) Saturn", "d) Neptun"}, 1},
        {"Wer malte die Mona Lisa?",
         {"a) Michelangelo", "b) Van Gogh", "c) Leonardo da Vinci", "d) Rembrandt"}, 2},
        {"Welches Instrument ist mit Mozart verbunden?",
         {"a) Gitarre", "b) Violine", "c) Klavier", "d) Trompete"}, 2},
        {"Was ist das chemische Symbol für Wasser?",
         {"a) H2O", "b) CO2", "c) O2", "d) NH3"}, 0},
        {"In welchem Land befindet sich der Eiffelturm?",
         {"a) Deutschland", "b) Italien", "c) Frankreich", "d) Spanien"}, 2},
        {"Welches Metall ist das leichteste?",
         {"a) Aluminium", "b) Lithium", "c) Eisen", "d) Kupfer"}, 1},
        {"Welcher ist der größte Ozean der Welt?",
         {"a) Atlantik", "b) Indischer Ozean", "c) Pazifik", "d) Arktischer Ozean"}, 2},
        {"Wer war der erste Präsident der Vereinigten Staaten?",
         {"a) Abraham Lincoln", "b) George Washington", "c) Thomas Jefferson", "d) John Adams"}, 1},
        {"Welches Gas atmen Menschen hauptsächlich ein?",
         {"a) Sauerstoff", "b) Stickstoff", "c) Kohlendioxid", "d) Wasserstoff"}, 0},
        {"Wie viele Knochen hat der erwachsene menschliche Körper?",
         {"a) 206", "b) 195", "c) 220", "d) 250"}, 0},
        {"Was ist die offizielle Währung von Japan?",
         {"a) Yuan", "b) Peso", "c) Yen", "d) Dollar"}, 2},
        {"Welches Land hat die größte Bevölkerung der Welt?",
         {"a) China", "b) Indien", "c) Vereinigte Staaten", "d) Russland"}, 0},
        {"Welches ist das schnellste Landtier?",
         {"a) Gepard", "b) Löwe", "c) Antilope", "d) Känguru"}, 0},
        {"Welches Land ist berühmt für den Tango?",
         {"a) Spanien", "b) Argentinien", "c) Mexiko", "d) Brasilien"}, 1},
        {"Was ist der längste Knochen im menschlichen Körper?",
         {"a) Tibia", "b) Femur", "c) Radius", "d) Humerus"}, 1},
        {"In welchem Jahr begann der Zweite Weltkrieg?",
         {"a) 1939", "b) 1945", "c) 1914", "d) 1925"}, 0},
        {"Was ist das chemische Symbol für Gold?",
         {"a) Au", "b) Ag", "c) Pb", "d) Fe"}, 0},
        {"Was ergibt 8 × 7?",
         {"a) 56", "b) 64", "c) 49", "d) 72"}, 0},
        {"Welche Sprache wird weltweit am meisten gesprochen?",
         {"a) Spanisch", "b) Englisch", "c) Mandarin", "d) Arabisch"}, 2},
        {"Wer war der erste Mann auf dem Mond?",
         {"a) Buzz Aldrin", "b) Neil Armstrong", "c) Juri Gagarin", "d) Michael Collins"}, 1},
        {"Was ist die Hauptstadt von Italien?",
         {"a) Mailand", "b) Rom", "c) Venedig", "d) Neapel"}, 1},
        {"Welche ist die größte Wüste der Welt?",
         {"a) Sahara", "b) Kalahari", "c) Gobi", "d) Atacama"}, 0},
        {"Welches Gas ist als Lachgas bekannt?",
         {"a) Sauerstoff", "b) Helium", "c) Stickstoff", "d) Distickstoffoxid"}, 3}
    };
};
vector<Question>spanishExam() {
    return {
       {"¿Cuál es la capital de España?",
         {"a) Barcelona", "b) Madrid", "c) Sevilla", "d) Valencia"}, 1},
        {"¿Cuántos colores tiene la bandera de México?",
         {"a) Dos", "b) Tres", "c) Cuatro", "d) Uno"}, 1},
        {"¿Quién escribió 'Don Quijote de la Mancha'?",
         {"a) Gabriel García Márquez", "b) Miguel de Cervantes", "c) Pablo Neruda", "d) Federico García Lorca"}, 1},
        {"¿En qué continente se encuentra Argentina?",
         {"a) Asia", "b) Europa", "c) América", "d) África"}, 2},
        {"¿Cuál es el idioma oficial de Brasil?",
         {"a) Español", "b) Inglés", "c) Portugués", "d) Francés"}, 2},
        {"¿Cuál es el río más largo del mundo?",
         {"a) Amazonas", "b) Nilo", "c) Yangtsé", "d) Misisipi"}, 1},
        {"¿En qué año llegó Cristóbal Colón a América?",
         {"a) 1492", "b) 1519", "c) 1776", "d) 1600"}, 0},
        {"¿Cuál es el planeta más grande del sistema solar?",
         {"a) Marte", "b) Júpiter", "c) Saturno", "d) Neptuno"}, 1},
        {"¿Quién pintó la Mona Lisa?",
         {"a) Miguel Ángel", "b) Van Gogh", "c) Leonardo da Vinci", "d) Rembrandt"}, 2},
        {"¿Qué instrumento se asocia con Mozart?",
         {"a) Guitarra", "b) Violín", "c) Piano", "d) Trompeta"}, 2},
        {"¿Cuál es el símbolo químico del agua?",
         {"a) H2O", "b) CO2", "c) O2", "d) NH3"}, 0},
        {"¿En qué país se encuentra la Torre Eiffel?",
         {"a) Alemania", "b) Italia", "c) Francia", "d) España"}, 2},
        {"¿Cuál es el metal más ligero?",
         {"a) Aluminio", "b) Litio", "c) Hierro", "d) Cobre"}, 1},
        {"¿Cuál es el océano más grande del mundo?",
         {"a) Atlántico", "b) Índico", "c) Pacífico", "d) Ártico"}, 2},
        {"¿Quién fue el primer presidente de los Estados Unidos?",
         {"a) Abraham Lincoln", "b) George Washington", "c) Thomas Jefferson", "d) John Adams"}, 1},
        {"¿Qué gas respiran los seres humanos principalmente?",
         {"a) Oxígeno", "b) Nitrógeno", "c) Dióxido de carbono", "d) Hidrógeno"}, 0},
        {"¿Cuántos huesos tiene el cuerpo humano adulto?",
         {"a) 206", "b) 195", "c) 220", "d) 250"}, 0},
        {"¿Cuál es la moneda oficial de Japón?",
         {"a) Yuan", "b) Peso", "c) Yen", "d) Dólar"}, 2},
        {"¿Cuál es el país con mayor población del mundo?",
         {"a) China", "b) India", "c) Estados Unidos", "d) Rusia"}, 0},
        {"¿Cuál es el animal terrestre más rápido?",
         {"a) Guepardo", "b) León", "c) Antílope", "d) Canguro"}, 0},
        {"¿Qué país es famoso por el tango?",
         {"a) España", "b) Argentina", "c) México", "d) Brasil"}, 1},
        {"¿Cuál es el hueso más largo del cuerpo humano?",
         {"a) Tibia", "b) Fémur", "c) Radio", "d) Húmero"}, 1},
        {"¿En qué año comenzó la Segunda Guerra Mundial?",
         {"a) 1939", "b) 1945", "c) 1914", "d) 1925"}, 0},
        {"¿Cuál es el símbolo químico del oro?",
         {"a) Au", "b) Ag", "c) Pb", "d) Fe"}, 0},
        {"¿Cuál es el resultado de 8 × 7?",
         {"a) 56", "b) 64", "c) 49", "d) 72"}, 0},
        {"¿Cuál es el idioma más hablado en el mundo?",
         {"a) Español", "b) Inglés", "c) Mandarín", "d) Árabe"}, 2},
        {"¿Quién fue el primer hombre en pisar la Luna?",
         {"a) Buzz Aldrin", "b) Neil Armstrong", "c) Yuri Gagarin", "d) Michael Collins"}, 1},
        {"¿Cuál es la capital de Italia?",
         {"a) Milán", "b) Roma", "c) Venecia", "d) Nápoles"}, 1},
        {"¿Cuál es el desierto más grande del mundo?",
         {"a) Sahara", "b) Kalahari", "c) Gobi", "d) Atacama"}, 0},
        {"¿Qué gas es conocido como 'gas de la risa'?",
         {"a) Oxígeno", "b) Helio", "c) Nitrógeno", "d) Óxido nitroso"}, 3}
    };


}

void displayBanner() 
{
    cout << "   ___ _          _   __ _                       " << endl;
    cout << "  / _ (_)_  _____| | / _\\ |_ ___  _ __ _ __ ___  " << endl;
    cout << " / /_)/ \\ \\/ / _ \\ | \\ \\| __/ _ \\| '__| '_ ` _ \\ " << endl;
    cout << "/ ___/| |>  <  __/ | _\\ \\ || (_) | |  | | | | | |" << endl;
    cout << "\\/    |_/_/\\_\\___|_| \\__/\\__\\___/|_|  |_| |_| |_|" << endl;
}

int main() {
    displayBanner();

  


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
            auto questions = englishExam();

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
            auto questions = deutschExam();

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
            auto questions = spanishExam();

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