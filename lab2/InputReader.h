#ifndef LAB2_INPUTREADER_H
#define LAB2_INPUTREADER_H
#pragma once

class LineReader {
public:
    static void splitString(std::list <std::string>&, const std::string&);

    static bool readNextLine(std::istream& is, std::list <std::string>& args);
};

#endif //LAB2_INPUTREADER_H
