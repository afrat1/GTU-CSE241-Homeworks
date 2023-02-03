#include <iostream>
using namespace std;

#ifndef TETRAMINOS
#define TETRAMINOS

enum class tets{ //enum definition
    T, L, I, O, S, Z, J
};

class tetramino{
public:
    tetramino(int a);
    void assign_tetraminos(char tetraminoType);
    void rotate(char **tetramino);
    void printArray(char **gameArea);
    char** arr;
private:
    char** array;
};
#endif