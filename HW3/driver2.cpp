#include "tetris.cpp"
#include "tetramino.cpp"
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int row,column;
    cout << "Enter the row and column dimensions of the array:\n";
    cin >> row >> column;

    tetris *arr1 = new tetris(row, column);
 
    arr1->getArray();    

    char tetramino_type;

    bool flag = true;
    while(flag){      
        cout << "Enter the tetramino type! You can enter R for random tetramino, Q for quit!" << endl;
        cin >> tetramino_type;

        if(tetramino_type == 'Q' || tetramino_type == 'q'){
            cout << "Exited the program!\n";
            flag = false;
        }
        
        else if(tetramino_type == 'R'){
            tetramino t(1);
            int rand_ = rand() % 7 + 1; 
            if(rand_ == 1){
                tetramino_type = 'T';
                t.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
                arr1->tetraminoAtTop(arr1->game_area,t.arr); //en üstteki tetraminoyu oluşturuyor

                char rotationDirection, moveDirection;
                int rotationCount, moveCount;
                cout << "Enter the rotation direction! (R for right(clockwise) or L for left(counterclockwise)): ";
                cin >> rotationDirection;
                cout << "Enter the rotation count!";
                cin >> rotationCount;

                arr1->rotate_suitable(t.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
                arr1->tetraminoAtTop(arr1->game_area,t.arr);
            
                cout << "Enter the move direction! (R for right or L for left): ";
                cin >> moveDirection;
                cout << "Enter the move count!";
                cin >> moveCount;
                arr1->rotatedVersionAndMove(arr1->game_area,t.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
            }
            else if(rand_ == 2){
                tetramino_type = 'L';
                t.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
                arr1->tetraminoAtTop(arr1->game_area,t.arr); //en üstteki tetraminoyu oluşturuyor

                char rotationDirection, moveDirection;
                int rotationCount, moveCount;
                cout << "Enter the rotation direction! (R for right(clockwise) or L for left(counterclockwise)): ";
                cin >> rotationDirection;
                cout << "Enter the rotation count!";
                cin >> rotationCount;

                arr1->rotate_suitable(t.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
                arr1->tetraminoAtTop(arr1->game_area,t.arr);
            
                cout << "Enter the move direction! (R for right or L for left): ";
                cin >> moveDirection;
                cout << "Enter the move count!";
                cin >> moveCount;
                arr1->rotatedVersionAndMove(arr1->game_area,t.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
            }
            else if(rand_ == 3){
                tetramino_type = 'I';
                t.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
                arr1->tetraminoAtTop(arr1->game_area,t.arr); //en üstteki tetraminoyu oluşturuyor

                char rotationDirection, moveDirection;
                int rotationCount, moveCount;
                cout << "Enter the rotation direction! (R for right(clockwise) or L for left(counterclockwise)): ";
                cin >> rotationDirection;
                cout << "Enter the rotation count!";
                cin >> rotationCount;

                arr1->rotate_suitable(t.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
                arr1->tetraminoAtTop(arr1->game_area,t.arr);
            
                cout << "Enter the move direction! (R for right or L for left): ";
                cin >> moveDirection;
                cout << "Enter the move count!";
                cin >> moveCount;
                arr1->rotatedVersionAndMove(arr1->game_area,t.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
            }
            else if(rand_ == 4){
                tetramino_type = 'O';
                t.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
                arr1->tetraminoAtTop(arr1->game_area,t.arr); //en üstteki tetraminoyu oluşturuyor

                char rotationDirection, moveDirection;
                int rotationCount, moveCount;
                cout << "Enter the rotation direction! (R for right(clockwise) or L for left(counterclockwise)): ";
                cin >> rotationDirection;
                cout << "Enter the rotation count!";
                cin >> rotationCount;

                arr1->rotate_suitable(t.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
                arr1->tetraminoAtTop(arr1->game_area,t.arr);
            
                cout << "Enter the move direction! (R for right or L for left): ";
                cin >> moveDirection;
                cout << "Enter the move count!";
                cin >> moveCount;
                arr1->rotatedVersionAndMove(arr1->game_area,t.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
            }
            else if(rand_ == 5){
                tetramino_type = 'S';
                t.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
                arr1->tetraminoAtTop(arr1->game_area,t.arr); //en üstteki tetraminoyu oluşturuyor

                char rotationDirection, moveDirection;
                int rotationCount, moveCount;
                cout << "Enter the rotation direction! (R for right(clockwise) or L for left(counterclockwise)): ";
                cin >> rotationDirection;
                cout << "Enter the rotation count!";
                cin >> rotationCount;

                arr1->rotate_suitable(t.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
                arr1->tetraminoAtTop(arr1->game_area,t.arr);
            
                cout << "Enter the move direction! (R for right or L for left): ";
                cin >> moveDirection;
                cout << "Enter the move count!";
                cin >> moveCount;
                arr1->rotatedVersionAndMove(arr1->game_area,t.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
            }
            else if(rand_ == 6){
                tetramino_type = 'Z';
                t.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
                arr1->tetraminoAtTop(arr1->game_area,t.arr); //en üstteki tetraminoyu oluşturuyor

                char rotationDirection, moveDirection;
                int rotationCount, moveCount;
                cout << "Enter the rotation direction! (R for right(clockwise) or L for left(counterclockwise)): ";
                cin >> rotationDirection;
                cout << "Enter the rotation count!";
                cin >> rotationCount;

                arr1->rotate_suitable(t.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
                arr1->tetraminoAtTop(arr1->game_area,t.arr);
            
                cout << "Enter the move direction! (R for right or L for left): ";
                cin >> moveDirection;
                cout << "Enter the move count!";
                cin >> moveCount;
                arr1->rotatedVersionAndMove(arr1->game_area,t.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
            }
            else if(rand_ == 7){
                tetramino_type = 'J';
                t.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
                arr1->tetraminoAtTop(arr1->game_area,t.arr); //en üstteki tetraminoyu oluşturuyor

                char rotationDirection, moveDirection;
                int rotationCount, moveCount;
                cout << "Enter the rotation direction! (R for right(clockwise) or L for left(counterclockwise)): ";
                cin >> rotationDirection;
                cout << "Enter the rotation count!";
                cin >> rotationCount;

                arr1->rotate_suitable(t.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
                arr1->tetraminoAtTop(arr1->game_area,t.arr);
            
                cout << "Enter the move direction! (R for right or L for left): ";
                cin >> moveDirection;
                cout << "Enter the move count!";
                cin >> moveCount;
                arr1->rotatedVersionAndMove(arr1->game_area,t.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor
            }
        }

        else{
            tetramino t(1);
            t.assign_tetraminos(tetramino_type); //tetraminoları oluşturuyor
            arr1->tetraminoAtTop(arr1->game_area,t.arr); //en üstteki tetraminoyu oluşturuyor

            char rotationDirection, moveDirection;
            int rotationCount, moveCount;
            cout << "Enter the rotation direction! (R for right(clockwise) or L for left(counterclockwise)): ";
            cin >> rotationDirection;
            cout << "Enter the rotation count!";
            cin >> rotationCount;

            arr1->rotate_suitable(t.arr,rotationDirection,rotationCount); //döndürme işlemini yaptı
            arr1->tetraminoAtTop(arr1->game_area,t.arr);
            
            cout << "Enter the move direction! (R for right or L for left): ";
            cin >> moveDirection;
            cout << "Enter the move count!";
            cin >> moveCount;
            arr1->rotatedVersionAndMove(arr1->game_area,t.arr,moveDirection,moveCount); //sağa veya sola ilerliyor hem de aşağıya gidiyor

        }
        
    }

    return 0;
}