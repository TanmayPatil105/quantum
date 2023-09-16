# Simplifying quantum mechanics concepts through simple code

## Quantum entaglement

quantum entaglement simply means two particles are connected with each other and affect one another even if they are separated by vast distances

### Code
In `entaglement.c` we have two variables `a` and `b`
- We assign variable `a` a `rand()` value
- and `b` is `a` plus 1

So if `a` is even, we know that `b` is going to be odd and if `a` is odd, `b` is going to be even.
They are connected with each other. Quantum Entaglment!!

### Try it out
```
% make
% ./entaglement
A is even therefore B is odd
% ./entaglement
A is odd therefore B is even
``` 
