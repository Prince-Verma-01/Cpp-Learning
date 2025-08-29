#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits>

/////////////////////// FUNCTIONS DECLARATION ////////////////////////

void drawBoard(char spaces[]);
void playerMove(char spaces[], char player );
void computerMove(char spaces[], char computer);
bool checkDraw(char spaces[]);
bool checkWin(char spaces[], char player);
void clearScreen();

//////////////////////////////////////////////////////////////////////

int main()
{
    srand(time(0));
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    
    int userInput;
    int index;
    std::cout << "********************* TIC TAC TOE *********************\n";
    drawBoard(spaces);
    char player = 'X';
    char computer = 'O';
    
    while(true){
        playerMove(spaces, player); 
        if(checkWin(spaces, player)){
            clearScreen();
            drawBoard(spaces);
            std::cout << "You Win :)\n";
            break;
        } 
        else if(checkDraw(spaces)){
            clearScreen();
            drawBoard(spaces);
            std::cout << "It's a Tie\n";
            break;
        }
        
        computerMove(spaces, computer);
        clearScreen();
        drawBoard(spaces);
        if(checkWin(spaces, computer)){
            clearScreen();
            drawBoard(spaces);
            std::cout << "Computer Wins :(\n";
            break;
        }
        else if(checkDraw(spaces)){
            clearScreen();
            drawBoard(spaces);
            std::cout << "It's a draw\n";
            break;
        }
        
    }

    return 0;
}

/////////////////////// FUNCTIONS DEFINATIONS ////////////////////////

void drawBoard(char spaces[]){
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[0]<<"  |  "<< spaces[1]<<"  |  "<< spaces[2] <<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[3]<<"  |  "<< spaces[4]<<"  |  "<< spaces[5] <<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[6]<<"  |  "<< spaces[7]<<"  |  "<< spaces[8] <<"  \n";
    std::cout << "     |     |     \n";
}


void playerMove(char spaces[],char player){
    int number;
    do{
        std::cout << "Enter Your Move (1-9)\n";
        std::cin >> number;
        number--;
        
    } while( number < 0 || number > 8 || spaces[number] != ' ');
    spaces[number] = player;
}

void computerMove(char spaces[], char computer){
    int number;
    
    do{
        number = rand() % 9;    
    } while(spaces[number] != ' ');
        spaces[number] = computer;
}

bool checkWin(char spaces[], char player){
    // HORIZONTAL
    if(spaces[0] == player && spaces[1] == player && spaces[2] == player){
        return true;
    }
    if(spaces[3] == player && spaces[4] == player && spaces[5] == player){
        return true;
    }
    if(spaces[6] == player && spaces[7] == player && spaces[8] == player){
        return true;
    }
    
    // VERTICAL 
    if(spaces[0] == player && spaces[3] == player && spaces[6] == player){
        return true;
    } 
    if(spaces[1] == player && spaces[4] == player && spaces[7] == player){
        return true;
    } 
    if(spaces[2] == player && spaces[5] == player && spaces[8] == player){
        return true;
    }
    
    // DIAGONAL 
    if(spaces[0] == player && spaces[4] == player && spaces[8] == player){
        return true;
    }
    if(spaces[2] == player && spaces[4] == player && spaces[6] == player){
        return true;
    } 
    return false;
}

bool checkDraw(char spaces[]){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' ') return false;
    }
    return true;
}

void clearScreen() {
     for (int i = 0; i < 30; i++) std::cout << "\n";
}
