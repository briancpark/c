# c
The C Programming Language Examples. A playground to exercise my proficiency in C.

## Some tips and tricks 

### Compiling
Don't just do the regular `gcc program.c` command as that will always compile an executable to `a.out`. Instead, name your executable:
```
$ gcc -o program program.c
```
and you can easily organize and run your program by `./program`!

### Multithreaded Compiling
If you have a `Makefile`, speed up compiling by multithreading it:
```
$ make -j
```

### See the Results of Preprocessing
You can directly view the results of preprocessing before it is inputted into the compiler as a `.i` file. It will also give you the produced assembly `.s` file.
```
$ gcc -save-temps -o program program.c
```

### See the Assembly Code
This compiler flag will output just the `.s` file.
```
$ gcc -Wall -S program.c
```
