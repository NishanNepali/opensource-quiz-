#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // Include ctype.h for string manipulation functions
#include<time.h>

void setGreenColor() {
   printf("\033[0;32;22m"); // 0;32;22m sets a dark green color 
}


// Function to set text color to red
void setRedColor() {
    printf("\033[0;31m"); // 0;31m sets the color to red
}

// Function to reset text color to the default
void resetColor() {
    printf("\033[0m"); // Resets the color to default
}


struct Question {
    char text[100];
    char answer[50];
};

// Function to convert a string to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
 //clrscr();
    srand(time(NULL));

    char name[30];
    char enter[4];

    printf("Enter your name:\n >>");
    scanf("%29s", name);
    getchar(); // Consume the newline character

printf("Hello, %s. Do you want to play a quiz game with 50 questions? (yes/no)\n >>", name);

    scanf("%3s", enter);
    getchar(); // Consume the newline character

    if (strcmp(enter, "yes") == 0) {
        printf("That's nice, %s. Let's start the game...\n", name);

        struct Question questions[100]; // Create an array to hold questions

        // Populate the array with questions and answers (as many  questions as possible)
 strcpy(questions[0].text, "Question 1: What is the capital of France?");
strcpy(questions[0].answer, "paris");

strcpy(questions[1].text, "Question 2: Who wrote 'Romeo and Juliet'?");
strcpy(questions[1].answer, "william shakespeare");

strcpy(questions[2].text, "Question 3: What is the largest planet in our solar system?");
strcpy(questions[2].answer, "jupiter");

strcpy(questions[3].text, "Question 4: How many continents are there on Earth?");
strcpy(questions[3].answer, "7");

strcpy(questions[4].text, "Question 5: Who painted the Mona Lisa?");
strcpy(questions[4].answer, "leonardo da vinci");

strcpy(questions[5].text, "Question 6: Which gas do plants absorb from the atmosphere?");
strcpy(questions[5].answer, "carbon dioxide");

strcpy(questions[6].text, "Question 7: What is the chemical symbol for gold?");
strcpy(questions[6].answer, "au");

strcpy(questions[7].text, "Question 8: What is the largest living species on Earth?");
strcpy(questions[7].answer, "blue whale");


strcpy(questions[8].text, "Question 9: What is the largest mammal on Earth?");
strcpy(questions[8].answer, "blue whale");

strcpy(questions[9].text, "Question 10: In which year did the Titanic sink?");
strcpy(questions[9].answer, "1912");

strcpy(questions[10].text, "Question 11: Who is the author of 'To Kill a Mockingbird'?");
strcpy(questions[10].answer, "harper lee");

strcpy(questions[11].text, "Question 12: What is the chemical symbol for water?");
strcpy(questions[11].answer, "h2o");

strcpy(questions[12].text, "Question 13: What is the largest ocean in the world?");
strcpy(questions[12].answer, "pacific");

strcpy(questions[13].text, "Question 14: Which planet is known as the 'Red Planet'?");
strcpy(questions[13].answer, "mars");

strcpy(questions[14].text, "Question 15: Who is often credited with inventing the light bulb?");
strcpy(questions[14].answer, "thomas edison");

strcpy(questions[15].text, "Question 16: In which city is the famous Taj Mahal located?");
strcpy(questions[15].answer, "agra");

strcpy(questions[16].text, "Question 17: What gas do humans breathe out when they exhale?");
strcpy(questions[16].answer, "carbon dioxide");

strcpy(questions[17].text, "Question 18: What is the currency of Japan?");
strcpy(questions[17].answer, "yen");

strcpy(questions[18].text, "Question 19: Who is the author of '1984'?");
strcpy(questions[18].answer, "george orwell");

strcpy(questions[19].text, "Question 20: What is the largest desert in the world?");
strcpy(questions[19].answer, "antarctica");

strcpy(questions[20].text, "Question 21: What is the largest mammal in the ocean?");
strcpy(questions[20].answer, "blue whale");

strcpy(questions[21].text, "Question 22: Who is the current Prime Minister of the United Kingdom (as of September 2021)?");
strcpy(questions[21].answer, "boris johnson");

strcpy(questions[22].text, "Question 23: What is the tallest mountain in the world?");
strcpy(questions[22].answer, "mount everest");

strcpy(questions[23].text, "Question 24: In which country was the game of chess believed to have originated?");
strcpy(questions[23].answer, "india");

strcpy(questions[24].text, "Question 25: Who painted the 'Starry Night'?");
strcpy(questions[24].answer, "vincent van gogh");

strcpy(questions[25].text, "Question 26: Which gas makes up the majority of Earth's atmosphere?");
strcpy(questions[25].answer, "nitrogen");

strcpy(questions[26].text, "Question 27: What is the smallest planet in our solar system?");
strcpy(questions[26].answer, "mercury");

strcpy(questions[27].text, "Question 28: Who was the first woman to fly solo across the Atlantic?");
strcpy(questions[27].answer, "amelia earhart");

strcpy(questions[28].text, "Question 29: What is the largest bird in the world?");
strcpy(questions[28].answer, "ostrich");

strcpy(questions[29].text, "Question 30: What is the currency of Canada?");
strcpy(questions[29].answer, "canadian dollar");

strcpy(questions[30].text, "Question 31: Who is the author of 'The Great Gatsby'?");
strcpy(questions[30].answer, "f. scott fitzgerald");

strcpy(questions[31].text, "Question 32: What is the chemical symbol for oxygen?");
strcpy(questions[31].answer, "o");

strcpy(questions[32].text, "Question 33: What is the smallest continent on Earth?");
strcpy(questions[32].answer, "australia");

strcpy(questions[33].text, "Question 34: Which planet is known as the 'Morning Star' or 'Evening Star'?");
strcpy(questions[33].answer, "venus");

strcpy(questions[34].text, "Question 35: Who wrote the 'Harry Potter' book series?");
strcpy(questions[34].answer, "j.k. rowling");

strcpy(questions[35].text, "Question 36: In which country is the Pyramids of Giza located?");
strcpy(questions[35].answer, "egypt");

strcpy(questions[36].text, "Question 37: What gas is used by plants in photosynthesis?");
strcpy(questions[36].answer, "carbon dioxide");

strcpy(questions[37].text, "Question 38: What is the currency of Brazil?");
strcpy(questions[37].answer, "brazilian real");

strcpy(questions[38].text, "Question 39: Who wrote 'War and Peace'?");
strcpy(questions[38].answer, "leo tolstoy");

strcpy(questions[39].text, "Question 40: What is the world's second-largest ocean?");
strcpy(questions[39].answer, "atlantic");

strcpy(questions[40].text, "Question 41: Who was the first President of the United States?");
strcpy(questions[40].answer, "george washington");

strcpy(questions[41].text, "Question 42: In which year did World War II end?");
strcpy(questions[41].answer, "1945");

strcpy(questions[42].text, "Question 43: Who is the current Chancellor of Germany (as of September 2021)?");
strcpy(questions[42].answer, "angela merkel");

strcpy(questions[43].text, "Question 44: Who is the current Prime Minister of India (as of September 2021)?");
strcpy(questions[43].answer, "narendra modi");

strcpy(questions[44].text, "Question 45: What is the United Nations' highest decision-making body?");
strcpy(questions[44].answer, "general assembly");

strcpy(questions[45].text, "Question 46: Who was the first woman to fly in space?");
strcpy(questions[45].answer, "valentina tereshkova");

strcpy(questions[46].text, "Question 47: In which year did the Berlin Wall fall?");
strcpy(questions[46].answer, "1989");

strcpy(questions[47].text, "Question 48: Who is known as the 'Father of the Nation' in India?");
strcpy(questions[47].answer, "mahatma gandhi");

strcpy(questions[48].text, "Question 49: Which country is the world's largest democracy?");
strcpy(questions[48].answer, "india");

strcpy(questions[49].text, "Question 50: Who is the current President of the United States (as of September 2021)?");
strcpy(questions[49].answer, "joe biden");

strcpy(questions[50].text, "Question 51: Who was the first woman to serve as the Prime Minister of the United Kingdom?");
strcpy(questions[50].answer, "margaret thatcher");

strcpy(questions[51].text, "Question 52: Which U.S. president signed the Emancipation Proclamation?");
strcpy(questions[51].answer, "abraham lincoln");

strcpy(questions[52].text, "Question 53: In which year did the Cuban Missile Crisis occur?");
strcpy(questions[52].answer, "1962");

strcpy(questions[53].text, "Question 54: Who is the current President of Russia (as of September 2021)?");
strcpy(questions[53].answer, "vladimir putin");

strcpy(questions[54].text, "Question 55: Which country is often referred to as the 'Land of the Rising Sun'?");
strcpy(questions[54].answer, "japan");

strcpy(questions[55].text, "Question 56: What is the longest river in the world?");
strcpy(questions[55].answer, "nile");

strcpy(questions[56].text, "Question 57: Who wrote 'The Art of War'?");
strcpy(questions[56].answer, "sun tzu");

strcpy(questions[57].text, "Question 58: In which city did the 2020 Summer Olympics take place?");
strcpy(questions[57].answer, "tokyo");

strcpy(questions[58].text, "Question 59: Who is the current Prime Minister of Canada (as of September 2021)?");
strcpy(questions[58].answer, "justin trudeau");

strcpy(questions[59].text, "Question 60: What is the European Union's currency?");
strcpy(questions[59].answer, "euro");

strcpy(questions[60].text, "Question 61: Who is the author of 'The Catcher in the Rye'?");
strcpy(questions[60].answer, "j.d. salinger");

strcpy(questions[61].text, "Question 62: What is the largest mammal on land?");
strcpy(questions[61].answer, "african elephant");

strcpy(questions[62].text, "Question 63: Who is the current President of France (as of September 2021)?");
strcpy(questions[62].answer, "emmanuel macron");

strcpy(questions[63].text, "Question 64: What is the currency of Australia?");
strcpy(questions[63].answer, "australian dollar");

strcpy(questions[64].text, "Question 65: Who painted 'The Persistence of Memory'?");
strcpy(questions[64].answer, "salvador dali");

strcpy(questions[65].text, "Question 66: In which year did the American Civil War begin?");
strcpy(questions[65].answer, "1861");

strcpy(questions[66].text, "Question 67: What is the largest moon of Saturn?");
strcpy(questions[66].answer, "titan");

strcpy(questions[67].text, "Question 68: Who is the current Prime Minister of Japan (as of September 2021)?");
strcpy(questions[67].answer, "yoshihide suga");

strcpy(questions[68].text, "Question 69: In which country is the Great Wall located?");
strcpy(questions[68].answer, "china");

strcpy(questions[69].text, "Question 70: What is the chemical symbol for silver?");
strcpy(questions[69].answer, "ag");

strcpy(questions[70].text, "Question 71: Who wrote 'Pride and Prejudice'?");
strcpy(questions[70].answer, "jane austen");

strcpy(questions[71].text, "Question 72: What is the currency of South Africa?");
strcpy(questions[71].answer, "south african rand");

strcpy(questions[72].text, "Question 73: Which gas do humans breathe in to survive?");
strcpy(questions[72].answer, "oxygen");

strcpy(questions[73].text, "Question 74: What is the national flower of Japan?");
strcpy(questions[73].answer, "cherry blossom");

strcpy(questions[74].text, "Question 75: In which city is the Louvre Museum located?");
strcpy(questions[74].answer, "paris");

strcpy(questions[75].text, "Question 76: Who is known as the 'Iron Lady'?");
strcpy(questions[75].answer, "margaret thatcher");

strcpy(questions[76].text, "Question 77: In which year did the American Revolution begin?");
strcpy(questions[76].answer, "1775");

strcpy(questions[77].text, "Question 78: What is the currency of Mexico?");
strcpy(questions[77].answer, "mexican peso");

strcpy(questions[78].text, "Question 79: Who wrote 'The Odyssey'?");
strcpy(questions[78].answer, "homer");

strcpy(questions[79].text, "Question 80: What is the largest volcano in the solar system?");
strcpy(questions[79].answer, "olympus mons");


strcpy(questions[80].text, "Question 81: Who wrote 'The Iliad'?");
strcpy(questions[80].answer, "homer");

strcpy(questions[81].text, "Question 82: Which planet is known as the 'Red Planet'?");
strcpy(questions[81].answer, "mars");

strcpy(questions[82].text, "Question 83: Who was the first woman to win a Nobel Prize?");
strcpy(questions[82].answer, "marie curie");

strcpy(questions[83].text, "Question 84: In which country is the Pyramids of Giza located?");
strcpy(questions[83].answer, "egypt");

strcpy(questions[84].text, "Question 85: Who is the current Prime Minister of Canada (as of September 2021)?");
strcpy(questions[84].answer, "justin trudeau");

strcpy(questions[85].text, "Question 86: What is the largest bird of prey in the world?");
strcpy(questions[85].answer, "andean condor");

strcpy(questions[86].text, "Question 87: In which year did the Apollo 11 mission land on the Moon?");
strcpy(questions[86].answer, "1969");

strcpy(questions[87].text, "Question 88: Who is the current President of Brazil (as of September 2021)?");
strcpy(questions[87].answer, "jair bolsonaro");

strcpy(questions[88].text, "Question 89: Which element is a noble gas and makes up about 1% of the Earth's atmosphere?");
strcpy(questions[88].answer, "argon");

strcpy(questions[89].text, "Question 90: What is the currency of South Korea?");
strcpy(questions[89].answer, "south korean won");

strcpy(questions[90].text, "Question 91: Who is known as the 'Iron Chancellor'?");
strcpy(questions[90].answer, "otto von bismarck");

strcpy(questions[91].text, "Question 92: What is the smallest planet in our solar system?");
strcpy(questions[91].answer, "mercury");

strcpy(questions[92].text, "Question 93: In which country is the ancient city of Petra located?");
strcpy(questions[92].answer, "jordan");

strcpy(questions[93].text, "Question 94: What is the currency of Russia?");
strcpy(questions[93].answer, "russian ruble");

strcpy(questions[94].text, "Question 95: Who was the first woman to fly solo across the Atlantic?");
strcpy(questions[94].answer, "amelia earhart");

strcpy(questions[95].text, "Question 96: In which year did the Titanic sink?");
strcpy(questions[95].answer, "1912");

strcpy(questions[96].text, "Question 97: What is the currency of Argentina?");
strcpy(questions[96].answer, "argentine peso");

strcpy(questions[97].text, "Question 98: Who is the current Prime Minister of Australia (as of September 2021)?");
strcpy(questions[97].answer, "scott morrison");

strcpy(questions[98].text, "Question 99: What is the only word in the English language that has three consecutive vowels?");
strcpy(questions[98].answer, "queue");

strcpy(questions[99].text, "Question 100: What is the national flower of the United States?");
strcpy(questions[99].answer, "rose");




        // Add more questions here (repeat this block for each question)
        // strcpy(questions[100].text, "Question 3: ...");
        // strcpy(questions[100].answer, "...");

        int numQuestions = 100; // Update to the number of questions

        int questionsOrder[100]; // Create an array to store the order of questions

        for (int i = 0; i < numQuestions; i++) {
            questionsOrder[i] = i;
        }

        for (int i = numQuestions - 1; i > 0; i--) {
            int j = rand() % (i + 1);
            int temp = questionsOrder[i];
            questionsOrder[i] = questionsOrder[j];
            questionsOrder[j] = temp;
        }

        int score = 0; // Initialize the score

        for (int i = 0; i < numQuestions; i++) {
            int index = questionsOrder[i];
            char answer[100]; // Increase the buffer size to handle answers with spaces
            printf("%s\n >>", questions[index].text);

            // Use fgets to read the entire line of text, including spaces
            fgets(answer, sizeof(answer), stdin);

            toLowerCase(answer); // Convert the user's answer to lowercase
            toLowerCase(questions[index].answer); // Convert the correct answer to lowercase

            answer[strcspn(answer, "\n")] = 0; // Remove the newline character

            if (strcmp(answer, questions[index].answer) == 0) {
                 setGreenColor(); // Set text color to green for correct answer
            printf("Correct!\n");
            resetColor(); // Reset text color to default
            score++;
                
            } else {
                setRedColor(); // Set text color to red for incorrect answer
            printf("Sorry, %s is the correct answer, Dear %s.\n", questions[index].answer, name);
            resetColor(); // Reset text color to default
            }
        }

        printf("Well played, %s! Your score is: %d out of %d\n", name, score, numQuestions);
    } else if (strcmp(enter, "no") == 0) {
        printf("That's nice of you, %s.\n", name);
    } else {
        printf("Okay, %s.\n", name);
    }

    return 0;
}
