#!/usr/bin/python3
"""
    Module to calculate a perimeter of an island into an
    array
"""



def island_perimeter(grid):
    """ function to calculate the perimeter"""
    h = len(grid)
    w = len(grid[0])
    perimeter = 0

    if h == 0 or w == 0:
        return perimeter
    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                if i - 1 < 0:
                    perimeter += 1
                else:
                    if grid[i - 1][j] == 0:
                        perimeter += 1
                if i + 1 >= h:
                    perimeter += 1
                else:
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                if j - 1 < 0:
                    perimeter += 1
                else:
                    if grid[i][j - 1] == 0:
                        perimeter += 1
                if j + 1 >= w:
                    perimeter += 1
                else:
                    if grid[i][j - 1] == 0:
                        perimeter += 1
    return perimeter
