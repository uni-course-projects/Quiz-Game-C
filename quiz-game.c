#include <stdio.h>
#include <ctype.h>

// Structure to represent a question
typedef struct {
    char question[100];
    char options[4][50];
    int correctOption;
} Question;

// Function to display a question
void displayQuestion(Question q) {
    printf("%s\n", q.question);
    for (int i = 0; i < 4; i++) {
        printf("%s\n", q.options[i]);
    }

}

// Function to get user's answerr
char getUserAnswer() {
    char input[10];
    printf("Enter your choice (A, B, C, or D): ");
    fgets(input, sizeof(input), stdin);
    return toupper(input[0]);
}

// Function to check if the user's answer is correct
int isAnswerCorrect(Question q, char userAnswer) {
    return (toupper(userAnswer) == 'A' + q.correctOption);
}

int main() {
    int score = 0;

    // Array of questions
    Question questions[] = {
        {"What is the capital of France?", {"A. Berlin", "B. Paris", "C. Rome", "D. Madrid"}, 1},
        {"Which planet is known as the Red Planet?", {"A. Mars", "B. Venus", "C. Jupiter", "D. Saturn"}, 0},
        {"What is the largest mammal?", {"A. Elephant", "B. Blue Whale", "C. Giraffe", "D. Gorilla"}, 1},
        {"In which year did World War II end?", {"A. 1943", "B. 1945", "C. 1947", "D. 1950"}, 1},
        {"Who wrote 'Romeo and Juliet'?", {"A. Charles Dickens", "B. William Shakespeare", "C. Jane Austen", "D. Mark Twain"}, 1}
    };

    int numQuestions = sizeof(questions) / sizeof(questions[0]);

    // Iterate through each question
    for (int i = 0; i < numQuestions; i++) {
        printf("\nQuestion %d:\n", i + 1);
        displayQuestion(questions[i]);

        char userAnswer;
        do {
            userAnswer = getUserAnswer();
            if (userAnswer < 'A' || userAnswer > 'D') {
                printf("Invalid input. Please enter A, B, C, or D.\n");
            }
        } while (userAnswer < 'A' || userAnswer > 'D');

        if (isAnswerCorrect(questions[i], userAnswer)) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect! The correct answer was %c.\n", 'A' + questions[i].correctOption);
        }
    }

    printf("\nQuiz complete! Your score: %d/%d\n", score, numQuestions);

    return 0;
}
