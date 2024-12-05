// Copyrights 2024 Aatiho Nora.

// Libraries used.
#include <cstdio>
#include <cstdlib>
#include <iostream>

// Global variables.
using namespace std;
int gridSize = 10;

// Game Logic.
int main() {
  char name[50];
  int totalObjects = 10;
retry_name:
  cout << "What is your name, mighty warrior?" << endl;
  cin.getline(name, 50);
  if (strlen(name) < 3) {
    cout << "Name cannot be empty.\n" << endl;
    goto retry_name;
  } else {
  }
  cout << "You better move fast, " << name
       << ". The goblins are attacking the town." << endl;
  cout << "\n------------------Press any key to continue------------------"
       << endl;
  getchar();
  system("clear");
  int choiceOne_Path;
  cout << ">> What would you like to do?" << endl;
  cout << "\t —> Enter '1' to follow the Chief?" << endl;
  cout << "\t —> Enter '2' run toward a random path?" << endl;
retry:
  cout << "\nEnter your choice" << endl;
  cin >> choiceOne_Path;
  switch (choiceOne_Path) {
  case 1:
    cout << "\n------------------Prologue: Escape------------------" << endl;
    getchar();
    cout << "\nYou: Where are we going?" << endl;
    getchar();
    cout << "Chief: Soon you will know. Just follow me." << endl;
    getchar();
    cout << ">> You run behind the chief." << endl;
    getchar();
    cout
        << ">> After running for a few minutes, a goblin jumps out of the bush."
        << endl;
    getchar();
    cout << "Goblin: Got you." << endl;
    getchar();
    cout << "Chief: " << name
         << ", do you see that cave run toward it. I will follow you after "
            "finishing it off."
         << endl;
    getchar();
    cout << "You: Chief, let me help you." << endl;
    getchar();
    cout << "Chief: Don't be a fool, you will only slow me down. Now be own "
            "your way."
         << endl;
    getchar();
    cout << ">> You run toward the cave." << endl;
    getchar();
    cout << ">> You entered into the cave." << endl;
    getchar();
    cout << "\n------------------End of Prologue------------------" << endl;
    getchar();
    break;
  case 2:
    cout << "\n------------------Prologue: Escape------------------" << endl;
    getchar();
    cout << "\nYou: I am going to find a way out!" << endl;
    getchar();
    cout << "Jack: You are insane. You will get killed out there." << endl;
    getchar();
    cout << "You: I have my secrets and I know my way out." << endl;
    getchar();
    cout << ">> You jump over the nearby broken fence and run off towards the "
            "City Wall."
         << endl;
    getchar();
    cout << ">> You look back to assess the situation, and saw a human "
            "silhouette approaching you."
         << endl;
    getchar();
    cout << "Someone: " << name << ", wait for me, you idio..." << endl;
    getchar();
    cout << "You: It is Jack's voice.\n>> You wait for him." << endl;
    getchar();
    cout << "Jack: Finally, caught upto you, did you think I will let my idiot "
            "friend go alone."
         << endl;
    getchar();
    cout << "You: Stop with teasing, we need to find a place for shelter."
         << endl;
    getchar();
    cout << "Jack: I know a cave nearby, we guards use it as an "
            "outpost follow me."
         << endl;
    getchar();
    cout << ">> You start following Jack toward the cave.\n>> Suddenly! A "
            "goblin "
            "jumps out of the bush"
         << endl;
    getchar();
    cout << "Goblin: Got you." << endl;
    getchar();
    cout << "Jack: " << name
         << ", the cave is just around the corner run toward it. I will follow "
            "you after "
            "finishing it off."
         << endl;
    getchar();
    cout << "You: Jack, let me help you." << endl;
    getchar();
    cout << "Jack: Don't act like a child, you will only slow me down. Now be "
            "own "
            "your way."
         << endl;
    getchar();
    cout << ">> You run toward the cave." << endl;
    getchar();
    cout << ">> You entered into the cave." << endl;
    getchar();
    cout << "\n------------------End of Prologue------------------" << endl;
    getchar();
    break;
  default:
    cout << "You are doing it wrong, warrior! Press either '1' or '2', nothing "
            "else!"
         << endl;
    goto retry;
  }
  cout << "\n------------------Next Chapter------------------" << endl;
  getchar();
  int maxValue = gridSize - 2;
  srand((unsigned)time(NULL));
  int columnNumber = 1 + (rand() % (maxValue - 0 + 1));
  int rowNumber = 1 + (rand() % (maxValue - 1 + 1));
  char randomObject = '*';
  cout << "\n" << columnNumber << "\n" << rowNumber << "\n" << endl;
  for (int i = 0; i < gridSize; i++) {
    for (int j = 0; j < gridSize; j++) {
      if (j == 0) {
        cout << "│";
      } else if (i == columnNumber && j == rowNumber) {
        cout << " " << randomObject << " │";
      } else {
        cout << "   │";
      }
    }
    cout << "\n\n" << endl;
  }
  return 0;
}
