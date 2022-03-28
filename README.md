# This is my own printf function

This repo contains a my own printf function that choose the correct function to print based on the adjacent character of '%' character

* %c - allows you to print a sinlge character
* %s - allows you to print an entire string
* %% - allows to print a single '%' character
* %i - allows you to print an integer
* %d - allows you to print an decimal in base 10 integer

## Example of its use whit %c

```
char a = 'b';

_printf("%c is a character", a);
```

## Output

```
b is a character
```

## Example of its use whit %s

```
char *str = "Hi, im a string!"

_printf("%s is a string", str);
```

## Output
```
Hi, im a string! is a string
```

## Example of its use whit %%

```
_printf("Use double %% to print a single %%");
```

## Output
```
Use double % to print a single %
```

## Example of its use whit %i

```
int i = 1024;

_printf("%i is an integer");
```

## Output

```
1024 is an integer
```
