#include <iostream>

//function to calculate word Length
int wordLength(char word[]) {
    int wordLength = 0;
    while(word[wordLength] != '\0') {
        ++wordLength;
    }
    return wordLength;
}

int main() {

    //inputing name and surname
    char name[100], surname[100];
    std::cout << "Enter your name: ";
    std::cin.getline(name, 100);
    std::cout << "Enter your surname: ";
    std::cin.getline(surname, 100);

    //creating new char array and putting the name and surname in that array
    char person[2][100];
    for(int i = 0; i < wordLength(name); ++i) {
        person[0][i] = name[i];
    }
    for(int i = 0; i < wordLength(surname); ++i) {
        person[1][i] = surname[i];
    }

    //output
    std::cout << "Hello, ";
    for(int i = 0; i < wordLength(name); ++i) {
        std::cout << person[0][i];
    }
    std::cout << " ";
    for(int i = 0; i < wordLength(surname); ++i) {
        std::cout << person[1][i];
    }
    std::cout << "!" << std::endl;

    return 0;
}