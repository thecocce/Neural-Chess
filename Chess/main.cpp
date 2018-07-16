#include "macros.h"
#include "game_board.h"
#include "player.h"
#include "winboard.h"

void winboard(board& b, Player& p) {
	winboard_loop(b, p);
}

int main() {
	board b;
	b.init_standard_game();
	Player p;
	return 0;
}