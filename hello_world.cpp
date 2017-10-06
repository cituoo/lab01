#include <iostream>

int transfer(char charfield)
{
    if (charfield == 'a'){ return 1;};
    if (charfield == 'b'){ return 2;};
    if (charfield == 'c'){ return 3;};
    if (charfield == 'd'){ return 4;};
    if (charfield == 'e'){ return 5;};
    if (charfield == 'f'){ return 6;};
    if (charfield == 'g'){ return 7;};
    if (charfield == 'h'){ return 8;};
}

int main()
{
    //initialization
    std::cout << "What chess piece?" << std::endl;
    char chessType = 0;
    std::cin >> chessType;
    std::cout << "initial coordinate?" << std::endl;
    std::pair<char, int> initialCoordinate;
    std::cin >> initialCoordinate.first >> initialCoordinate.second;
    std::pair<char, int> nextCoordinate;
    std::cout << "next coordinate?" << std::endl;
    std::cin >> nextCoordinate.first >> nextCoordinate.second;
    std::pair<char, int> staticChess;
    staticChess.first = 'd';
    staticChess.second = '3';
    initialCoordinate.first = (char) transfer(initialCoordinate.first);
    nextCoordinate.first = (char) transfer(nextCoordinate.first);
    staticChess.first = (char) transfer(staticChess.first);

    //4pawn
    if (chessType == 'P')
    {
        int pawnStep = 1;
        if (nextCoordinate == staticChess)
        {
            std::cout << "False." << std::endl;
        }
        else
        {
            if (initialCoordinate.second == 2)
            {
                pawnStep = 2;
            }

            if ((initialCoordinate.first == nextCoordinate.first) &&
                ((initialCoordinate.second + pawnStep == nextCoordinate.second) ||
                 (initialCoordinate.second + 1 == nextCoordinate.second)))
            {
                std::cout << "True." << std::endl;
            }
            else
            {
                std::cout << "False." << std::endl;
            }
        }
    }

    //4boat
    if (chessType == 'R')
    {
        if (nextCoordinate == staticChess)
        {
            std::cout << "False." << std::endl;
        }
        else if ((initialCoordinate.second < staticChess.second) && (nextCoordinate.second > staticChess.second) ||
                (initialCoordinate.second > staticChess.second) && (nextCoordinate.second < staticChess.second))
        {
            std::cout << "False." << std::endl;
        }
        else if ((initialCoordinate.first < staticChess.first) && (nextCoordinate.first > staticChess.first) ||
                (initialCoordinate.first > staticChess.first) && (nextCoordinate.first < staticChess.first))
        {
            std::cout << "False." << std::endl;
        }
        else
        {
            if ((initialCoordinate.second == nextCoordinate.second)||
                (initialCoordinate.first == nextCoordinate.first))
            {
                std::cout << "True." << std::endl;
            }
            else
            {
                std::cout << "False." << std::endl;
            }
        }
    }

    //elephant
    if (chessType == 'B')
    {
        if (nextCoordinate == staticChess)
        {
            std::cout << "False." << std::endl;
        }
        else
        {
            if (abs(initialCoordinate.first-nextCoordinate.first)==abs(initialCoordinate.second-nextCoordinate.second))
            {
                std::cout << "True." << std::endl;
            }
            else
            {
                std::cout << "False." << std::endl;
            }
        }

    }


}
