#!/usr/bin/python3
""" define the perimeter of the island described in grid
 where the grid represents water by 0 and land by 1.
"""


def island_perimeter(grid):

    lenght = 0
    wdth = 0

    for i in range((len(grid))):
        for j in range((len(grid[0]))):
            if grid[i][j] == 1:
                lenght += 1
                if(j > 0 and grid[i][j - 1] == 1):
                    wdth += 1
                if(i > 0 and grid[i - 1][j] == 1):
                    wdth += 1
    return(lenght * 4 - wdth * 2)
