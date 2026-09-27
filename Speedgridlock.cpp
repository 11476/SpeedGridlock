#include <iostream>
using namespace std;
struct speedGridlock{
    enum cell{
        empty,
        wall,
        others,
        you
    };
    int w, h;
    int yourX, yourY;
    int numberOfOthers = 0;
    void setup(){

    }
    void update(){

    }
}
int main(){

}/*<@&567504742520193024> 
# ~~Gridlock 28~~ Speed Gridlock
## How to play
Every move, you can either move in a direction or strike in a direction. 
**Moving** means you can move either up, down, left, or right, as long as there isn't a player OR a black square one space in that direction. This moves your player one space depending on what direction you chose. 
**Striking horizontally** kills any player (other than you) who is in the same row as you. 
**Striking vertically** kills any player (other than you) who is in the same column as you. 
You can only strike **a maximum of two times in a row.** If you strike twice in a row, you HAVE to move on your next turn. **Note that player movement is calculated before strikes are.**
You cannot move and strike in the same turn, you have to pick one or the other.

After three moves, Spleef will kick in. This means that if a tile has already been stepped on from now on, it becomes a black tile and counts as a wall (strikes can sti*/
