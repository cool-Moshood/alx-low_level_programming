#!/usr/bin/python3
""" define the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """ return the perimeter of the island describe
        where the grid represents water by 0 and land by 1.

        Args:
            grid(list): list of an intger
        Returns:
            the perimeter of the island
    """

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
