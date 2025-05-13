#include <iostream>
#include "../include/user_solver.h"

void UserSolver::solve(Board &board) {
    const size_t x = board.getX();
const size_t y = board.getY();
for (size_t i = 0; i < x; ++i) {
    for (size_t j = 0; j < y; ++j) {
        guess(i, j, board);
    }
}
    ReturnType t = guess(1, 1, board);
    std::cout << t << std::endl;
}
