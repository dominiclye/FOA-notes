- The hexadecimal number system is a base-16 number system where each hexadecimal digit corresponds to four binary digits (bits).
- The hex symbols are:
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
- Hexadecimal is used for [[Memory]] addresses.
- To convert hexadecimal to base 10, we begin at the rightmost hex symbol. Each digit represents a power of 16, so the rightmost hex symbol is 16^0. Multiply each corresponding hex symbol value by its positional power of 16, summing the results of each symbol.
  **Example with 0x1A3**
  3 * 16^0 = 3
  A (10) * 16^1 = 160
  1 * 16^2 = 256
  = 419
-