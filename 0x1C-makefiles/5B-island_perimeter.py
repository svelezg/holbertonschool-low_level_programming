#!/usr/bin/python3
"""
This is the 5-island_perimeter module.
It supplies one function, island_perimeter.
"""


def island_perimeter(grid):
    """ island_perimeter function """
    max_row = 0
    max_col = 0
    sum_col = []

    for row in grid:
        sum_row = 0
        for index in range(len(row)):
            sum_row = sum_row + row[index]
            if sum_row > max_row:
                max_row = sum_row
            sum_col.append(0)

    for row in grid:
        for index in range(len(row)):
            sum_col[index] = sum_col[index] + row[index]

        for elem in sum_col:
            if elem > max_col:
                max_col = elem

    perimeter = 2 * (max_row + max_col)
    return perimeter
