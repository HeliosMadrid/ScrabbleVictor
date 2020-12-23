#ifndef SCRABBLEVICTOR_CASE_H
#define SCRABBLEVICTOR_CASE_H


class Case {
    private:
        char value = ' ';

    public:
        Case();
        void printCase();
        void setValue(char value);
};


#endif
