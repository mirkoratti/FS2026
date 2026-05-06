arr.reshape(2, -1)     # View with new shape (-1 infers dimension)
arr.resize(2, 5)       # In-place shape modification
arr.flatten()          # Returns a 1D copy
arr.ravel()            # Returns a 1D view
arr[np.newaxis, :]     # Increases dimensions
np.tile(arr, (5, 2))   # Repeats the entire array
np.repeat(arr, 3)      # Repeats individual elements