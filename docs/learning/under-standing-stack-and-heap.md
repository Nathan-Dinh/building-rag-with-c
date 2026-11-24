## Asked:
What is the difference between stack and heap memory

## My initial guess:
Stack memory are local memory which include variables function calls. Wheres heap memory is dynamic memory.

## Answer:
    - malloc(), calloc(), realloc(), free()
    - Heap memory is dynamic allocated memory wheres stack memory is local
    - Use stack when you need temporary variables that are only needed while a function runs
    - Use heap when memory outlives a function, when its size is determined at runtime, or when you need to manage its lifetime yourself

## What I got wrong / what surprised me:
I was able to get high level understanding of it down. However there is still a lot that I don't know about memory

## Sources:

## New questions this raised:
- When to use molloc(), calloc(), realloc(), free()