
#include <stdio.h>
#include <stdlib.h>

// Define the size of the map
#define SIZE 4

// Function to check if a placement is valid
int is_valid(int map[SIZE][SIZE], int row, int col, int height) {
	// Check the row and column for the same height
	for (int i = 0; i < SIZE; i++) {
		if (map[i][col] == height || map[row][i] == height) {
			return 0;
		}
	}
	return 1;
}

// Function to solve the puzzle
int solve(int map[SIZE][SIZE], int col_up[SIZE], int col_down[SIZE], int row_left[SIZE], int row_right[SIZE], int row, int col) {
	// If we have placed all the boxes, return success
	if (row == SIZE) {
		return 1;
	}

	// Calculate the next row and column
	int next_row = (col == SIZE - 1) ? row + 1 : row;
	int next_col = (col + 1) % SIZE;

	// Try placing boxes of different heights
	for (int height = 1; height <= SIZE; height++) {
		// Check if the placement is valid
		if (is_valid(map, row, col, height)) {
			// Place the box
			map[row][col] = height;

			// Check if the constraints of the views are satisfied
			if (row_left[row] == 0 || map[row][col] > map[row_left[row] - 1][col]) {
				if (row_right[row] == 0 || map[row][col] > map[row_right[row] - 1][col]) {
					if (col_up[col] == 0 || map[row][col] > map[row][col_up[col] - 1]) {
						if (col_down[col] == 0 || map[row][col] > map[row][col_down[col] - 1]) {
							// Recursively solve the next position
							if (solve(map, col_up, col_down, row_left, row_right, next_row, next_col)) {
								return 1;
							}
						}
					}
				}
			}

			// Remove the box if the placement doesn't lead to a solution
			map[row][col] = 0;
		}
	}

	return 0;
}

int main(int argc, char *argv[]) {
	if (argc != 17) {
		printf("Error\n");
		return 1;
	}

	int col_up[SIZE];
	int col_down[SIZE];
	int row_left[SIZE];
	int row_right[SIZE];

	// Parse the command line arguments
	for (int i = 1; i <= 16; i++) {
		int value = atoi(argv[i]);
		if (value < 1 || value > SIZE) {
			printf("Error\n");
			return 1;
		}

		if (i <= 4) {
			col_up[i - 1] = value;
		} else if (i <= 8) {
			col_down[i - 5] = value;
		} else if (i <= 12) {
			row_left[i - 9] = value;
		} else {
			row_right[i - 13] = value;
		}
	}

	int map[SIZE][SIZE] = {0}; // Initialize the map with zeros

	// Solve the puzzle
	if (solve(map, col_up, col_down, row_left, row_right, 0, 0)) {
		// Print the solution
		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				printf("%d ", map[i][j]);
			}
			printf("\n");
		}
	} else {
		printf("Error\n");
		return 1;
	}

	return 0;
}
