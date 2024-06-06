from collections import deque


def reachTheEnd(grid, maxTime):
    rows = len(grid)
    if rows == 0:
        return 'No'

    cols = len(grid[0])

    # Define the four possible directions (right, left, down, up)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    # Create a queue for BFS with initial position and time
    queue = deque([(0, 0, 0)])  # (row, col, time)

    while queue:
        row, col, time = queue.popleft()

        # Check if we reached the bottom-right cell within the given time
        if row == rows - 1 and col == cols - 1:
            return 'Yes' if time <= maxTime else 'No'

        # Explore all possible directions
        for dr, dc in directions:
            new_row, new_col = row + dr, col + dc

            # Check if the new position is within the grid boundaries
            if 0 <= new_row < rows and 0 <= new_col < cols:
                # Check if the new cell is unblocked ('.') and hasn't been visited before
                if grid[new_row][new_col] == '.':
                    # Add the new position and update the time
                    queue.append((new_row, new_col, time + 1))
                    # Mark the cell as visited by blocking it
                    grid[new_row] = grid[new_row][:new_col] + '#' + grid[new_row][new_col + 1:]

    # If the queue is empty and we haven't reached the bottom-right cell, return 'No'
    return 'No'


# Sample Input
grid = ['..', '..']
maxTime = 3

# Sample Output
print(reachTheEnd(grid, maxTime))
