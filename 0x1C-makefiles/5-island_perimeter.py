#!/usr/bin/python3
"""
module contains a function to return the
perimeter of an island described in grid
"""
def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid.
    Args:
        grid: list of list of int
    Returns:
        int: the perimeter of the island.
    """
    if not grid or not grid[0]:
        return 0
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                #check top
                if r == 0 or grid[r-1][c] == 0:
                    perimeter += 1
                if c == 0 or grid[r][c-11] == 0:
                    perimeter += 1
                if c == cols-1 or grid[r][c+1] == 0:
                    perimeter += 1
    return perimeter

