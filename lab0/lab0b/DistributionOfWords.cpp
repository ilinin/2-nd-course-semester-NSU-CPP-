#include "DistributionOfWords.h"
#include <fstream>

DistributionOfWords::DistributionOfWords() {
    wordsCounter = 0;
}


void DistributionOfWords::parseLine(const std::string currentLine) {
    std::string currentWord;
    for (int idx = 0; idx <= (int) currentLine.length(); ++idx) {
        if (isalpha(currentLine[idx]) || isdigit(currentLine[idx])) {
            currentWord += currentLine[idx];
        } else {
            if (!currentWord.empty()) {
                ++repetitionsByWord[currentWord];
                ++wordsCounter;
                currentWord.clear();
            }
        }
    }
}


void DistributionOfWords::attachFile(const std::string &fileName) {
    std::ifstream input;
    input.open(fileName);

    if (!input) {
        throw std::invalid_argument("Can not open input file");
    }
    std::string line;
    while (getline(input, line)) {
        parseLine(line);
    }
    input.close();
}

void DistributionOfWords::addDataToMultimapByRepetitions(std::multimap<int, std::string> &wordByRepetitions) {
    for (auto currentRepetitionsByWord = repetitionsByWord.rbegin();
         currentRepetitionsByWord != repetitionsByWord.rend(); ++currentRepetitionsByWord) {
        wordByRepetitions.insert(
                std::pair<int, std::string>(currentRepetitionsByWord->second, currentRepetitionsByWord->first));
    }
    repetitionsByWord.clear();
}


void DistributionOfWords::sendForOutputInCSV(const std::string &fileName) {
    std::ofstream output;
    output.open(fileName);
    if (!output) {
        throw std::invalid_argument("Can not open output file");
    }
    std::multimap<int, std::string> wordByRepetitions;
    addDataToMultimapByRepetitions(wordByRepetitions);
    for (auto currentWordByRepetitions = wordByRepetitions.rbegin();
         currentWordByRepetitions != wordByRepetitions.rend(); ++currentWordByRepetitions) {
        output << currentWordByRepetitions->second << ',' << currentWordByRepetitions->first << ','
               << currentWordByRepetitions->first / (double) wordsCounter * 100 << '%'
               << std::endl;
    }
    output.close();
}