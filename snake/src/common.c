#include "common.h"

#include <stdlib.h>

// TODO: define global variables needed for your snake! (part 1A)

// Definition of global variables for game status.
int g_game_over;
int g_score;
//Definition of global variables for snake head pos and direction of movement
//I'll need a function to go from move in 2d to 1d rep, I want that function
//to be somewhere for least redundancy..
int g_snek_pos;
enum g_snek_dir {LEFT, RIGHT, UP, DOWN};

/** Sets the seed for random number generation.
 * Arguments:
 *  - `seed`: the seed.
 */
void set_seed(unsigned seed) {
    /* DO NOT MODIFY THIS FUNCTION */
    srand(seed);
    /* DO NOT MODIFY THIS FUNCTION */
}

/** Returns a random index in [0, size)
 * Arguments:
 *  - `size`: the upper bound for the generated value (exclusive).
 */
unsigned generate_index(unsigned size) {
    /* DO NOT MODIFY THIS FUNCTION */
    return rand() % size;
    /* DO NOT MODIFY THIS FUNCTION */
}
