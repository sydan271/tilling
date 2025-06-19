# tilling

# G. Tiling

**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes  

You are planning a tiling task for a house owner. Your job is:

Given an `n × m` board (n rows and m columns), you need to cover the entire floor using square tiles of size `s × s` (where s ∈ ℤ⁺). You are allowed to use up to **380 tiles**, and the tiles **must not overlap**.

Each tile covers a square area of `s × s` and is labeled with a number from 1 to k, where k is the number of tiles used. You must find a way to tile the board using no more than 380 tiles, and output the tile number for each cell in the grid.

## Input
- Two positive integers `n`, `m` (1 ≤ n, m ≤ 20)

## Output
- First line: the number of tiles used (k), must not exceed 380.
- Next `n` lines, each containing `m` space-separated integers, representing the tile number (from 1 to k) assigned to each cell.

## Examples

### Input
2 3

### Output
6
1 2 3
4 5 6

### Input
3 3
1
1 1 1
1 1 1
1 1 1
