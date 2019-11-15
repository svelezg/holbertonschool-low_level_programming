#!/usr/bin/python3
"""
This is the 5-island_perimeter module.
It supplies one function, island_perimeter.
"""


def island_perimeter(grid):
    """ island_perimeter function """
    count = 0
    i_max = len(grid)
    j_max = len(grid[0])

    for i in range(i_max):
        for j in range(j_max):
            elem = grid[i][j]
            elem_right = 0
            elem_down = 0
            # print("{} {}------------".format(i, j))
            if j < j_max - 1:
                elem_right = grid[i][j + 1]
            if i < i_max - 1:
                elem_down = grid[i + 1][j]

            if (i == 0 or i == i_max - 1) and elem != 0:
                count = count + 1
                # print("* up")
            if (j == 0 or j == j_max - 1) and elem != 0:
                count = count + 1
                # print("*left")

            if j != j_max - 1:
                if elem != elem_right:
                    count = count + 1
                    # print("*right")

            if i != i_max - 1:
                if elem != elem_down:
                    count = count + 1
                    # print("*down")

    return count
