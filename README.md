# C/C++ Para Leigos

## Compilando seu primeiro código

```shell
 g++ programa.cpp -o programa
 g++ programa.cpp funcao.cpp -o programa
```

# Usando Python no C

Need python development tools

```shell
pip install python-dev-tools
```
### Windows:
```shell
 g++ pyWithC.cpp -o pyWithC -L C:\Users\Gabriel\AppData\Local\Programs\Python\Python312\libs -lpython312 -I C:\Users\Gabriel\AppData\Local\Programs\Python\Python312\include
```
### Linux
```shell
g++ pyWithC.cpp -o pyWithC.out -L /usr/lib/python3.6/config-3.6m-aarch64-linux-gnu -lpython3.6 -I /usr/include/python3.6m
```
