#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();

main()
{

printMaze();

int x = 31, y =10;
while(true)
{
     if(x == 85){
           x = 3;
}

gotoxy(x,y);
cout << " ";
x = x + 1;
if (x<85)
{
  cout << "P";

}
Sleep(100);
}
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()
{
system("cls");
cout << "#########################################################################################" << endl;
cout << "||.. ............................................................             .........|| " << endl;
cout << "||..          @@@@@@@@@@@@@@@@@@@       ...                    ..                     .|| " << endl;
cout << "||..                  ..|@| . |@|..  |@|...                    ..                ...  .|| " << endl;
cout << "||..                  ..|@| . |@|..  |@|...                    ..            @@@@     .|| " << endl;
cout << "||.. |@|..              @@@@@@@@@    |@|...    @@@@@@@@@@@@@@@ ..  ..|@|..   |@|      .|| " << endl;
cout << "||.. |@|..            ..|@| . |@|..  |@|...   |@|.         .|@|..  ..|@|..   |@|      .|| " << endl;
cout << "||.. |@|.. ...|@|...    @@@@@@@@@    |@|...   |@|...........|@|..  ..|@|..   |@|      .|| " << endl;
cout << "||.. |@|.. ...|@|...        ..|@|..           |@@@@@@@@@@@@@@@|..  ..|@|..   @@@@     .|| " << endl;
cout << "||   |@|   ...|@|...        ..|@|..       ...........          ..                     .|| " << endl;
cout << "||..       ...|@|...            p         @@@@@@@@@@           ..                      || " << endl;
cout << "||         ...|@|...                     .|@|.....             ..   .|@|.    @@@@ .    || " << endl;
cout << "||                                       .|@|.....|@|.         ..   .|@|.    |@|   .   || " << endl;
cout << "||                                           .....|@|.         ..   .|@|.    |@|   .   || " << endl;
cout << "||......................................  @@@@@@@@@@@          ..            |@| |@|   || " << endl;
cout << "||      ..............................................              .|@|.    |@|       || " << endl;
cout << "||         |@|@@@|@|              @@@@@@@@@@@@@@                    .|@|.    |@|       || " << endl;
cout << "||         |@|   |@|                         |@|                    .|@|.    |@@@@@@@| || " << endl;
cout << "||         |@|   |@|            ...          |@|@@@@@@@@@@@@                           || " << endl;
cout << "||                             .|@|.                           ..                     .|| " << endl;
cout << "||...|@|.. @@@@@@@@@@          .|@|...............             ..  ..|@|..            .|| " << endl;
cout << "||...|@|..    |@|        |@|   .|@@@@@@@@@@@@@@@|.             ..  ..|@|..   |@|      .|| " << endl;
cout << "||...|@|..    |@|        |@|   ...............|@|.             ..  ..|@|..   |@|      .|| " << endl;
cout << "||...|@|..    |@|        |@|                 .|@|.......       ..  ..|@|..   |@|      .|| " << endl;
cout << "||..                             G           .|@|@@@@@@@@      ..            |@|@@@@  .|| " << endl;
cout << "||..          @@@@@@@@@@@@@@                   .........       ..                     .|| " << endl;
cout << "||..  ....................................................     ..                     .|| " << endl;
cout << "||..  ....................................................     ..                     .|| " << endl;
cout << "#########################################################################################" << endl;


}