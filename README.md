# Hermes
Hermes is a console program to help the new users of the raspberry to improve his skills of terminal o console

# Inglés

## Installation

1. Update your system
```
sudo apt update
```

2. If you don't have the *ccp* compiler and the *wget* download

```
sudo apt-get install gcc g++ wget
```
3. Download the file of code of the *hermes*

```
wget https://github.com/JavierRibaldelRio/Hermes/releases/download/1.0/main.cpp
```
4. Compile c++ code

```
g++ -o hermes main.cpp
```

5. Make the file of *hermes* an executable file (may need "*sudo*")

```
chmod +x hermes
```

6. Copy Hermes to the directory of /usr/bin (may need "sudo")

```
cp hermes /usr/bin/
```

7. Be happy with Hermes,  to use you only have to put *hermes* in the command prompt ($)

```
hermes
```



## Uninstall

1. For uninstall the *Hermes* you have to remove the executable
``` 
cd /usr/bin/ && sudo rm hermes
```

## Bugs and mistakes

 If you have one error or bug using hermes. You can add me a issue in Git Hub: https://github.com/JavierRibaldelRio/Hermes .

And to cancel press Ctrl + Mayus + C , or close the terminal. if the problem persists reboot the raspberry.

---

# Español



## Instalación

1. Actuliza tu sistema

```
sudo apt update
```

2. Si no tienes el compilador de c++ y el wget installalos

```
sudo apt-get install gcc g++ wget
```

3. Descarga el codigo de *hermes*

```
wget https://github.com/JavierRibaldelRio/Hermes/releases/download/1.0/main.cpp
```

4. Compila el código de  c++ 

```
g++ -o hermes main.cpp
```

5. Haz un ejecutable de Hermes (puede que necesite "*sudo*")

```
chmod +x hermes
```

6. Copiar al directorio  /usr/bin el hermes (puede que necesite "sudo")

```
cp hermes /usr/bin/
```

7. Estate contento con, para usarlo solo tienes que poner *hermes* en la linea de la terminal ($)

```
hermes
```



## Desinsatalar

1. Para desinstalar *Hermes* tines que eliminar el archivo ejecutable

``` 
cd /usr/bin/ && sudo rm hermes
```

## Errores y problemas

Si tienes un error o problema usando  hermes. Puedes añadireme una issue en el repositorio de  Git Hub:  https://github.com/JavierRibaldelRio/Hermes .

Para cancelar el programa de manera forzosa presione  Ctrl + Mayús + C , o cierre la . Si el problema persiste reinicia la raspberry.







