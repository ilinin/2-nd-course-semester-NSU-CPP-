#ifndef LAB0B_DISTRIBUTIONOFWORDS_H
#define LAB0B_DISTRIBUTIONOFWORDS_H


#include <iostream>
#include <vector>
#include <map>
#include <string>


class DistributionOfWords {
    std::map<std::string, int> repetitionsByWord;

    int wordsCounter;

    void parseLine(const std::string currentLine);

    void addDataToMultimapByRepetitions(std::multimap<int, std::string> &wordByRepetitions);

public:
    DistributionOfWords();

    void attachFile(const std::string &fileName);

    void sendForOutputInCSV(const std::string &fileName);
};


#endif //LAB0B_DISTRIBUTIONOFWORDS_H
