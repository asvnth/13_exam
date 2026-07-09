# 13_exam

🔥 42 Core Patterns (the ones that repeat everywhere)
1. STRING SCAN PATTERN (the most important one)

Used in: strlen, strchr, strcspn, atoi, isalpha, etc.

Shape:
while (*s)
{
    // check or process
    s++;
}
Idea:

“I walk through a string until I stop”

2. SEARCH PATTERN (nested scan)

Used in: strstr, strcspn, strcmp (partial logic)

Shape:
while (s[i])
{
    j = 0;
    while (s[i + j])
    {
        if (match)
            return;
        j++;
    }
    i++;
}
Idea:

“For each character, I search something inside it”

3. ACCUMULATOR PATTERN (numbers)

Used in: atoi, itoa, parsing

Shape:
r = 0;
while (digit)
{
    r = r * 10 + (c - '0');
}
Idea:

“Build value step by step”

4. COPY PATTERN (strcpy, strdup)

Used in: strcpy, strdup, memcpy

Shape:
while (*src)
{
    *dst++ = *src++;
}
Idea:

“Two pointers move together”

5. COMPARE PATTERN (strcmp)

Used in: strcmp, sorting, checks

Shape:
while (*s1 && *s1 == *s2)
{
    s1++;
    s2++;
}
return (*s1 - *s2);
Idea:

“Stop at first difference”

6. FIND-FIRST PATTERN (very important)

Used in: strchr, strcspn, strpbrk

Shape:
while (*s)
{
    if (match)
        return (position);
    s++;
}
return (not found);
Idea:

“First match wins → exit immediately”

7. STATE VARIABLES PATTERN

Used in: atoi, parsing, flags

Shape:
int sign = 1;
int i = 0;

if (condition)
    sign = -1;
Idea:

“Track meaning while scanning”

8. MULTI-STEP MAIN PATTERN (do_op style)

Used in: do_op, small programs

Shape:
parse input
convert
compute
print
Idea:

“Pipeline thinking”

9. RECURSION OUTPUT PATTERN (ft_putnbr)

Used in: putnbr, tree-like printing

Shape:
if (n >= 10)
    recurse(n / 10);
print(n % 10);
Idea:

“Break number, then print back”

10. EDGE CASE PATTERN (what 42 always checks)

Always ask:

empty input?
negative numbers?
division by 0?
null pointer?
single character?
🧠 The REAL skill 42 tests

Not syntax.

It is this:

“Can you recognize which pattern applies instantly?”

⚡ How to train like a 42 student

When you see a problem, force this checklist:

Step 1:

Is it scanning?
→ string loop pattern

Step 2:

Is it building a value?
→ accumulator

Step 3:

Is it comparing?
→ strcmp pattern

Step 4:

Is it copying?
→ dual pointer copy

Step 5:

Is it searching?
→ nested loop or early return

🟢 Final truth (important)

If you master only these 5, you can pass most of the pool:

scan string
accumulator (atoi)
copy pointers
compare strings
nested search

Everything else is just variation.
