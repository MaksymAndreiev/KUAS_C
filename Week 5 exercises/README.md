# Information Processing 2 — Week 5 exercises

## 1. Reading a single bit from an integer

Write a function int `getBit(int i, int p)` that returns the value (0 or 1) of the bit in position

p of the integer i. Hints:

1. Move the bit you want (at position p) right, to the least significant position, then
2. use the bit-wise and operator ‘&’ to isolate just the least significant bit, which is the result you want. Test your
   function using this program (download ‘05-01-getbit.c’ from Teams):

```
int main()
{
    unsigned int i = 0b10110011100011110000111110000011;
    for (int n = 0; n < 16; ++n) printf("%u\n", getBit(i, n));
    return 0;
}
```

Verify the output from the program is:    1 1 0 0 0 0 0 1 1 1 1 1 0 0 0 0

## 2. Setting a single bit in an integer

Write a function unsigned int `setBit(unsigned int i, int p)` that sets the bit at position
p in the integer i to 1.

```
int main()
{
    unsigned int i = 0;
    printf("%u\n", i = setBit(i, 1));
    printf("%u\n", i = setBit(i, 3));
    printf("%u\n", i = setBit(i, 5));
    return 0;
}
```

Verify that the output is:    2 10 42

## 3. Clearing a single bit in an integer

Write a function unsigned int `clearBit(unsigned int i, int p)` that sets the bit at position p in the integer i to 0.

```
int main()
{
    unsigned int i = 63;
    printf("%u\n", i = clearBit(i, 0)); 
    printf("%u\n", i = clearBit(i, 2)); 
    printf("%u\n", i = clearBit(i, 4));
    return 0;
}
```

Verify that the output from the program is:    62 58 42

## 4. Getting multiple bits from an integer

Write a function unsigned int `getBits(unsigned int i, int p, int n)` that returns n bits from the integer i, from bit
position p upwards, shifted right so that bit i is the least-significant bit of the result. For example, to obtain bits
8 through 11 of 0x1234 you would use

`int result = getBits(0x1234, 8, 4)`

and the result would be 0x0002. Hints: the easiest way to solve this is in two steps.

1. First, shift the integer i right so that bit position p is moved to the least significant bit (position 0).
2. Second, ‘mask’ off the lowest n bits using (1 << n) - 1 combined with the ‘and’ operator ‘&’.

```
int main()
{
    unsigned int i = 0b10110011100011110000111110000011;
    printf("%u\n", getBits(i, 0, 8));
    printf("%u\n", getBits(i, 16, 8));
    printf("%u\n", getBits(i, 28, 4));
    return 0;
}
```

Verify that the output from the program is:    131 143 11

## 5. Setting multiple bits in an integer

Write a function `unsigned int setBits(unsigned int i, int p, int n, int b)` that sets the n bits starting at position p
in the integer i to b. Hints:

1. A good first step is to extend clearBit() so that it can clear n bits starting at position p.
2. When that works, a good second step is to shift b left so that its least significant bit moves to the correct
   position p, and then insert it into i using the or operator ‘|’.
3. Finally, ensure that b does not set any bits in i outside the range of n bits starting at position p.

```
int main()
{
    unsigned int i = 0b10110011100011110000111110000011;
    printf("%u\n", i = setBits(i, 2, 30, 1)); // 7
    printf("%u\n", i = setBits(i, 6, 2, 7)); // 199
    printf("%u\n", i = setBits(i, 2, 4, 15)); // 255
    return 0;
}
```

(Note that i is updated inside each call to printf().) Verify that the output is: 7 199 255

## 6. Counting how many bits are set (the number of ‘1’s) in an integer

Write a function `int countBits(unsigned int n)` that counts how many bits in n are set (to 1). (For example,
`countBits(0b01100110)` is 4.) Hint: One way to do this is to add the least significant bit of n to the count, then
shift n right one bit, until n becomes zero.

```
int main()
{
   for (int i = 0; i <= 15; ++i) printf("%d\n", countBits(i));
   return 0;
}
```

Verify that the output is:    0 1 1 2 1 2 2 3 1 2 2 3 2 3 3 4

## 7. Converting the case of characters in a string

Write a function `void toLower(char s[]) `that converts all upper case letters in s to lower case. Hints:

1. an upper case character is in the range 'A'  <= c <= 'Z';
2. to convert an upper case character to lower case, add 32 to it;
3. the easiest solution is to write a function int `lower(int c)` that returns c converted to lower case if it is an
   upper
   case character, leaving it unchanged if not, and then overwrite each character in s with the result of calling
   `lower()` on it.

```
int main()
{
   char s[] = "Hello World How Are You?"; 
   toLower(s);
   printf("%s\n", s); return 0;
}
```

Verify that the output of the program is:  hello world how are you?

## 8. Detecting characters in strings

Write a function `int charIndex(char s[], int c)` that searches s for the first occurrence of the character c. The
result
of the function is the index of the first occurrence of c in s, or -1 if c is not found in s.

```
int main()
{
   char s[]= "Hello world, how are you?";
   printf("%d\n", charIndex(s, 'H'));
   printf("%d\n", charIndex(s, 'w'));
   printf("%d\n", charIndex(s, '?'));
   printf("%d\n", charIndex(s, 'q'));
   printf("%d\n", charIndex(s, '\0'));
   return 0;
}
```

Verify that the output printed is: 0 6 24 -1 -1

## 9. Removing characters from strings

Write a function called `void squeeze(char s[], int c)` that removes all occurrences of the character c from the string
s.

Hint: one way to do this is to copy s over itself, using two index variables. One index variable holds the position in s
of the character currently being tested. The other index variable holds the position in s to be overwritten with that
character, provided it is not equal to c. Don’t forget to stop when you reach the ‘nul’ character at the end of s. Also
don’t forget to terminate s again with a ‘nul’ character, since it might have shrunk.

```
int main()
{
   char s[]= "Hello world, how are you?";
   squeeze(s, 'o');
   printf("%s\n", s);
   return 0;
}
```

Verify that the result printed is:    Hell wrld, hw are yu?

## 1O. Removing sets of characters from strings

Write a function `void squeezeAll(char s[], char t[])` that removes all the characters in t from the string s. Hint:
modify
your `squeeze()` function to use your charIndex() function to test whether each successive character in s is found in t.

```
int main()
{
   int in = 0, out = 0;
   while (s[in]) {
      if (charIndex(t, s[in]) < 0) s[out++] = s[in];
      ++in;
   }
   s[out] = '\0';
}
```

Verify that the output is:

Hll wrld, hw r y? Hllwrldhwry? wrhwry?

## 11. Challenge: multiple-precision addition

There are ten digits in the decimal system. Each position in a decimal number is represented as one of those ten digits
with a value between 0 and 9. When adding two decimal numbers A and B together, the sum in each position i is:

<i>S<sub>i</sub></i> = (<i>A<sub>i</sub></i> + <i>B<sub>i</sub></i> +<i>C<sub>i</sub></i>) mod 10

and the carry out of that position into the position to its left is:

<i>C<sub>i</sub></i>+1</sub> = (<i>A<sub>i</sub></i> + <i>B<sub>i</sub></i>) <i>÷</i> 10

Similarly, each digit position in a base-256 number has a digit value between 0 and 255. When adding two base-256
numbers together the sum in each position i is:

<i>S<sub>i</sub></i> = (<i>A<sub>i</sub></i> + <i>B<sub>i</sub></i> +<i>C<sub>i</sub></i>) mod 256

and the carry out of that position into next more significant position is:

<i>C<sub>i</sub></i>+1</sub> = (<i>A<sub>i</sub></i> + <i>B<sub>i</sub></i>) <i>÷</i> 256

Using an array of unsigned char you can make a base-256 integer with as many digits as you need, and then implement the
usual arithmetic operations for those integers as functions.

Write a function `void add(unsigned char a[], unsigned char b[], unigned char s[], int n)` that adds two base-256
numbers stored in arrays a and b, each containing n digits, and places the sum in the n-digit
array s. The numbers are stored the least significant digit first (at index 0). Make sure your function handles carries
correctly. (The initial carry in to digit position 0, *C*<sub>0</sub>, should be 0.)

```
int main()
{
   unsigned char a[8] = { 0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70, 0x80 }; 
   unsigned char b[8] = { 0x90, 0xA0, 0xB0, 0xC0, 0xD0, 0xE0, 0xF0, 0x00 }; 
   unsigned char s[8];
   add(a, b, s, 8);
   for (int i= 7; i >= 0; --i) printf("%02x", s[i]);
   printf("\n");
   return 0;
}
```
Verify that the output is:    8161412100e0c0a0
