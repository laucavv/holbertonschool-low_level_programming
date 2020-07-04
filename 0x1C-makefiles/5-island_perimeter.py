#!/usr/bin/python3
"""
    function that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
        0 represents a water zone
        1 represents a land zone
    """
    pos = 0
    side = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                pos += 1
                if j > 0 and grid[i][j - 1] == 1:
                    side += 1
                if i > 0 and grid[i - 1][j] == 1:
                    side += 1
    perimeter = (pos * 4) - (side * 2)
    return perimeter
