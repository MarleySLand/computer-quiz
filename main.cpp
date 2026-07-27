#include <iostream>

int main() {

    std::string questions[] = {"What does the term compiler do?",
    "Which of these is a statically typed programming language?",
    "What is the main purpose of a database index?",
    "What does HTTP stand for?"};

    std::string options[][4] = {{"A) Stores data permanently", "B) Converts source code into machine code", "C) Connects computers to a network", "D) Deletes unused files"},
    {"A) Python", "B) JavaScript", "C) Java", "D) Ruby"},
    {"A) To increase file size", "B) To speed up data retrieval", "C) To encrypt records", "D) To back up tables automatically"},
    {"A) HyperText Transfer Protocol", "B) High Transfer Text Process", "C) Hyper Tool Text Protocol", "D) Host Transfer Technical Program"}};

    char answers[] = {'B', 'C', 'B', 'A'};

    int score = 0;

    for (int i = 0; i < 4; i++) {
        char answer;
        std::cout << "*********************\n";
        std::cout << questions[i] << "\n";
        
        for (int j = 0; j < 4; j++) {
            std::cout << options[i][j] << std::endl;
        }

        std::cout << "> ";
        std::cin >> answer;

        if (toupper(answer) == answers[i]) {
            score++;
            std::cout << "Correct!\n";
        } else {
            std::cout << "Wrong. Correct answer: " << answers[i] << "\n";
        }
    }

    std::cout << "*********************\n";
    std::cout << "Your score: " << score << "/4";

    return 0;
}