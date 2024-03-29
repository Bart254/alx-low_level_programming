#!/usr/bin/python3
"""Module creates function island_perimeter
"""


def island_perimeter(grid):
    """ Returns the perimeter of a grid island

        arg(list of lists): list made up of equal lists containing 0 or 1
    """
    rows, columns = len(grid), len(grid[0])
    length, col_len = 0, 0
    width, row_wid = 0, 0
    water = False
    for r in range(rows):
        for c in range(columns):
            if grid[r][c] == 1:
                if length == 0 and width == 0:
                    length += 1
                    width += 1
                    col_len = c
                    row_wid = r
                elif grid[r][c - 1] == 1:
                    if c > col_len:
                        length += 1
                        col_len = c
                elif grid[r - 1][c] == 1:
                    if r > row_wid:
                        width += 1
                        row_wid = r
                else:
                    return 0
            if grid[r][c] == 0:
                water = True
            if grid[r][c] == 0 and r < rows - 1 and c < columns - 1:
                if grid[r - 1][c] == 1 and grid[r + 1][c] == 1:
                    if grid[r][c + 1] == 1 and grid[r][c - 1] == 1:
                        return 0
    if water is False:
        return 0
    return 2 * (length + width)
