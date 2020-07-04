#!/usr/bin/python3
"""
    Module to calculate a perimeter of an island into an
    array
"""

def len_height(grid=[[]]):
    """ """
    if grid != [[]]:
        for i in range(len(grid)):
            i
        return i + 1
    return 0

def len_width(grid=[[]]):
    """ """
    if grid != [[]]:
        for i in grid:
            for j in range(len(i)):
                j
        return j + 1
    return 0


def island_perimeter(grid):
    """ function to calculate the perimeter"""
    h = len_height(grid)
    w = len_width(grid)
    perimeter = 0

    if  h == 0 or w == 0:
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
