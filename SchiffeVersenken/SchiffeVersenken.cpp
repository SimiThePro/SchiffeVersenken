#include <iostream>
#include <time.h>
#include <string>

#define EINERSCHIFF 1
#define ZWEIERSCHIFF 2
#define DREIERSCHIFFF 3

using namespace std;

void newRandoms(int &posx, int &posy);

int main()
{
    int schifffeld[10][10];
    int posx, posy;

    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            schifffeld[x][y] = 0;
        }
    }

    srand(time(NULL));
    posx = (rand() % 10);
    posy = (rand() % 10);
    bool hororvert = rand() % 2;

    int placedx = 0, placedy = 0;
    for (int i = 0; i < DREIERSCHIFFF; i++) {
        if (hororvert)
            placedy++;
        else placedx++;

        while ((hororvert ? posx : posy) + DREIERSCHIFFF > 10) {
            newRandoms(posx, posy);
        }

        schifffeld[posx+placedx][posy+placedy] = 1;
        
        
    }

    for (int y = 0; y < 10; y++) {
        cout << "\n";
        for (int x = 0; x < 10; x++) {
            cout << schifffeld[x][y] << " ";
        }
    }

}

void newRandoms(int &posx, int &posy) {
    posx = (rand() % 10);
    posy = (rand() % 10);
}

