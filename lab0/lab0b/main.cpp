#include "DistributionOfWords.h"

int main(int argc, char *argv[]) {
    if (argc <= 2) {
        std::cout << "Add at least two arguments with file names" << std::endl;
        return 0;
    }
    DistributionOfWords fileParser;
    try {
        for (int idx = 1; idx < argc - 1; ++idx) {
            fileParser.attachFile(argv[idx]);
        }
        fileParser.sendForOutputInCSV(argv[argc - 1]);
    }
    catch (std::exception &ex) {
        std::cerr << ex.what() << std::endl;
    }
}
