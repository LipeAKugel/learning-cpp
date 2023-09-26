// quiz program with questions.
#include <iostream>
using namespace std;

void showQuestion(string question, string options[], int num_options);
char getAnswer();
int getScore(char answer_sheet[], char answers[], int num_questions);

int main() {
    string questions[] = {"1. When was Python first launched?",
                          "2. Who invented Python?",
                          "3. Is Python a interpreted or compiled language?"};

    string options[][3] = {{"a. 1989", "b. 1995", "c. 1991"},
                           {"a. Guido van Rossum", "b. Dennis Ritchie", "c. James Gosling"},
                           {"a. Interpreted", "b. Compiled", "c. Neither"}};

    int num_questions = sizeof(questions)/sizeof(questions[0]);
    int num_options = sizeof(options[0])/sizeof(options[0][0]);
    int score;

    char answer_sheet[] = {'c', 'a', 'a'};
    char answers[num_questions];

    cout << "-----------\n";
    cout << "PYTHON QUIZ\n";
    cout << "-----------\n";

    for (int i = 0; i < num_questions; i++) {
        showQuestion(questions[i], options[i], num_options);
        answers[i] = getAnswer();
    }

    score = getScore(answer_sheet, answers, num_questions);
    cout << "You scored " << score << " out of " << num_questions << "!\n";

    return 0;
}

void showQuestion(string question, string options[], int num_options) {
    cout << "\n" << question << "\n";
    for (int i = 0; i < num_options; i++) {
        cout << options[i] << "  ";
    }
    cout << "\n";
}

char getAnswer() {
    char answer;

    cout << "Your answer: ";
    cin >> answer;
    cin.ignore();

    return answer;
}

int getScore(char answer_sheet[], char answers[], int num_questions) {
    int score = 0;
    
    for (int i = 0; i < num_questions; i++) {
        if (answers[i] == answer_sheet[i]) {
            score++;
        }
    }

    return score;
}