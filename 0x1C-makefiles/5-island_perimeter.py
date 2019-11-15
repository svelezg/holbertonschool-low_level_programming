#!/usr/bin/python3
"""
This is the 5-island_perimeter module.
It supplies one function, island_perimeter.
"""


def island_perimeter(grid):
    """ island_perimeter function """
    count = 0
    c_max = len(grid) - 1
    r_max = len(grid[1]) - 1

    for i in range(c_max):
        for j in range(r_max):
            elem = grid[i][j]
            elem_right = 0
            elem_down = 0

            if j <= c_max:
                elem_right = grid[i][j + 1]
            if i <= r_max:
                elem_down = grid[i + 1][j]

            if (i == 0 or i == r_max) and elem != 0:
                count = count + 1
                # print("* up")
            if (j == 0 or j == c_max) and elem != 0:
                count = count + 1
                # print("*left")

            if j != r_max:
                if elem != elem_right:
                    count = count + 1
                    # print("*right")

            if j != c_max:
                if elem != elem_down:
                    count = count + 1
                    # print("*down")
            # print("_____________")
    return count
