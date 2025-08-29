#include <iostream>

void drawBoard(char spaces[]);
void playerMove(char spaces[], char player );
void computerMove(char spaces[], char computer);
void checkWin(char spaces[]);
int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    
    int userInput;
    int index;
    std::cout << "********************* TIC TAC TOE *********************\n";
    char player = 'X';
    char computer = 'O';
    
drawBoard(spaces);
playerMove(spaces, player);
drawBoard(spaces);
computerMove(spaces, computer);        
drawBoard(spaces);
  
    
    return 0;
}


void drawBoard(char spaces[]){
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[0]<<"  |  "<< spaces[1]<<"  |  "<< spaces[2] <<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[3]<<"  |  "<< spaces[4]<<"  |  "<< spaces[5] <<"  \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "  "<< spaces[0]<<"  |  "<< spaces[1]<<"  |  "<< spaces[2] <<"  \n";
    std::cout << "     |     |     \n";
}


void playerMove(char spaces[],char player){
    int number;
    do{
        std::cout << "Enter Your Move (1-9)\n";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
        }
        
    }while(!number>= 1 && !number <= 9);

}

void computerMove(char spaces[], char computer){
    srand(time(0));
    int number;
    do{
        number = (rand() % 9) + 1;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = computer;
        }   
    }while(!number>= 1 && !number <= 9);
    
}




