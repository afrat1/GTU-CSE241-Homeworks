#include <iostream>
using namespace std;

#ifndef TETRIS
#define TETRIS


class tetris{
public:
    tetris(int, int);
    void getArray();
	void printArray(char **gameArea);
	int getRow(){return row;}
	int getColumn(){return column;}
    char** game_area;
	char **getarray() const {return array;}
	void tetraminoAtTop(char **gameArea,char **tetramino);
	void rotatedVersionAndMove(char **gameArea,char **tetramino,char moveDirection, int moveCount);
	void rotate_suitable(char **tetramino,char rotationDirection, int rotationCount);
	bool toCheckAnyTetramino(int *holder_value,char**gameArea,char moveDirection,int moveCount,char wordHolder);
	int whichRow(int *holder_value,char**gameArea,char moveDirection,int moveCount,char wordHolder);
	tetris& operator+=(const tetris& tet);

private:
    char** array;
	int row;
	int column;
};


#endif