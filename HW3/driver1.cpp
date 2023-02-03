#include "tetris.cpp"
#include "tetramino.cpp"
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    
    int row,column;
    //cout << "The size of board is 9x9!:\n";
    row = 9;
    column = 9;

    tetris *arr1 = new tetris(row, column);

    arr1->getArray();

    char rotationDirection, moveDirection;
    int rotationCount, moveCount;

    char tetramino_type;

    //cout << "The Tetramino type is T" << endl;
    tetramino t(1);
    tetramino_type = 'T';
    t.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,t.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'R';
    rotationCount = 2;

    arr1->rotate_suitable(t.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,t.arr);
            
    moveDirection = 'R';
    moveCount = 3;
    arr1->rotatedVersionAndMove(arr1->game_area,t.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor

    this_thread::sleep_for(chrono::milliseconds(50));


    //cout << "The Tetramino type is I" << endl;
    tetramino a(1);
    tetramino_type = 'I';
    a.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,a.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'R';
    rotationCount = 1;

    arr1->rotate_suitable(a.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,a.arr);
            
    moveDirection = 'R';
    moveCount = 3;
    arr1->rotatedVersionAndMove(arr1->game_area,a.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor

    this_thread::sleep_for(chrono::milliseconds(50));

    //cout << "The Tetramino type is O" << endl;
    tetramino c(1);
    tetramino_type = 'O';
    c.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,c.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'L';
    rotationCount = 4;

    arr1->rotate_suitable(c.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,c.arr);
            
    moveDirection = 'L';
    moveCount = 3;
    arr1->rotatedVersionAndMove(arr1->game_area,c.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor

this_thread::sleep_for(chrono::milliseconds(50));

    //cout << "The Tetramino type is T" << endl;
    tetramino e(1);
    tetramino_type = 'T';
    e.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,e.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'L';
    rotationCount = 2;

    arr1->rotate_suitable(e.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,e.arr);
            
    moveDirection = 'L';
    moveCount = 1;
    arr1->rotatedVersionAndMove(arr1->game_area,e.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor

this_thread::sleep_for(chrono::milliseconds(50));

    //cout << "The Tetramino type is J" << endl;
    tetramino f(1);
    tetramino_type = 'J';
    f.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,f.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'L';
    rotationCount = 4;

    arr1->rotate_suitable(f.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,f.arr);
            
    moveDirection = 'R';
    moveCount = 2;
    arr1->rotatedVersionAndMove(arr1->game_area,f.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
this_thread::sleep_for(chrono::milliseconds(50));

    //cout << "The Tetramino type is L" << endl;
    tetramino b(1);
    tetramino_type = 'L';
    b.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,b.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'L';
    rotationCount = 3;

    arr1->rotate_suitable(b.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,b.arr);
            
    moveDirection = 'L';
    moveCount = 3;
    arr1->rotatedVersionAndMove(arr1->game_area,b.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
this_thread::sleep_for(chrono::milliseconds(50));

    //cout << "The Tetramino type is S" << endl;
    tetramino g(1);
    tetramino_type = 'S';
    g.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,g.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'L';
    rotationCount = 3;

    arr1->rotate_suitable(g.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,g.arr);
            
    moveDirection = 'L';
    moveCount = 4;
    arr1->rotatedVersionAndMove(arr1->game_area,g.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor

this_thread::sleep_for(chrono::milliseconds(50));

    //cout << "The Tetramino type is O" << endl;
    tetramino k(1);
    tetramino_type = 'O';
    k.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,k.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'L';
    rotationCount = 4;

    arr1->rotate_suitable(k.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,k.arr);
            
    moveDirection = 'R';
    moveCount = 1;
    arr1->rotatedVersionAndMove(arr1->game_area,k.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
this_thread::sleep_for(chrono::milliseconds(50));


    //cout << "The Tetramino type is S" << endl;
    tetramino s(1);
    tetramino_type = 'S';
    s.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,s.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'R';
    rotationCount = 4;

    arr1->rotate_suitable(s.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,s.arr);
            
    moveDirection = 'L';
    moveCount = 1;
    arr1->rotatedVersionAndMove(arr1->game_area,s.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor

this_thread::sleep_for(chrono::milliseconds(50));

    //cout << "The Tetramino type is Z" << endl;
    tetramino l(1);
    tetramino_type = 'Z';
    l.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,k.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'R';
    rotationCount = 1;

    arr1->rotate_suitable(l.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,l.arr);
            
    moveDirection = 'L';
    moveCount = 3;
    arr1->rotatedVersionAndMove(arr1->game_area,l.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
this_thread::sleep_for(chrono::milliseconds(50));

    //cout << "The Tetramino type is I" << endl;
    tetramino z(1);
    tetramino_type = 'I';
    z.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,z.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'R';
    rotationCount = 1;

    arr1->rotate_suitable(z.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,z.arr);
            
    moveDirection = 'R';
    moveCount = 2;
    arr1->rotatedVersionAndMove(arr1->game_area,z.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
this_thread::sleep_for(chrono::milliseconds(50));


    //cout << "The Tetramino type is O" << endl;
    tetramino p(1);
    tetramino_type = 'O';
    p.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
    arr1->tetraminoAtTop(arr1->game_area,p.arr); //en üstteki tetraminoyu oluşturuyor

    rotationDirection = 'R';
    rotationCount = 4;

    arr1->rotate_suitable(p.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
    arr1->tetraminoAtTop(arr1->game_area,p.arr);
            
    moveDirection = 'R';
    moveCount = 2;
    arr1->rotatedVersionAndMove(arr1->game_area,p.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
this_thread::sleep_for(chrono::milliseconds(50));
    return 0;
}