# Trabajo 1 Sistope

## Descripción

Este repositorio contiene el código fuente de una aplicación en C++ para la asignatura de Sistemas Operativos. La aplicación está diseñada para realizar operaciones en un vector de valores enteros, utilizando comandos específicos al compilar y ejecutar el programa. Ademas de operaciones relacionadas a leer y escribir en archivos txt.

## Compilación

Para compilar el programa, asegúrate de tener instalado un compilador de C++ en tu sistema. Utiliza el siguiente comando en la terminal:

```bash
make
```


## Ejecución

Después de compilar correctamente, puedes ejecutar el programa utilizando el siguiente comando:

```bash
./prog -u Usuario -v 1,2,3,4 -f $HOME/Escritorio/Universidad,hola.txt -t soyTexto -i $HOME/Escritorio/Universidad,input.txt -o $HOME/Escritorio/Universidad,output.txt
```

- Reemplaza `Usuario` con el nombre del usuario que deseas utilizar.
- Reemplaza `1,2,3,4` con los valores enteros separados por comas para el vector.
- Reemplaza `$HOME/Escritorio/Universidad,hola.txt` con la ubicacion y nombre del nuevo archivo a crear en la opcion 5. Donde '$HOME/Escritorio/Universidad' corresponde al path y 'hola.txt' corresponde al nombre del archivo a crear. La separacion viene dada por una coma.
- Reemplaza `soyTexto` por el texto a escribir dentro del archivo antes creado.
- Reemplaza `$HOME/Escritorio/Universidad,input.txt` con la ubicacion y nombre del nuevo archivo a buscar en la opcion 7 (Contar palabaras). Donde '$HOME/Escritorio/Universidad' corresponde al path e 'input.txt' corresponde al nombre del archivo a leer. La separacion viene dada por una coma.
- Reemplaza `$HOME/Escritorio/Universidad,output.txt` con la ubicacion y nombre del nuevo archivo a crear en la opcion 7 (Contar palabras) . Donde '$HOME/Escritorio/Universidad' corresponde al path y 'output.txt' corresponde al nombre del archivo a crear. La separacion viene dada por una coma.

## Base de Datos de usuarios

La información de los usuarios y sus permisos se lee desde un archivo de una base de datos llamada "usuarios.txt" en el siguiente formato:

Matias;admin 
Luis;userRookie
Mateo;userGeneral


- Cada línea representa un usuario con su nombre seguido de un punto y coma `;` y luego el perfil correspondiente al usuario.
- Los permisos relacionados a los valores vienen dados por otra base de datos llamada "perfiles.txt"

## Base de Datos de los perfiles

La información de los perfiles y sus permisos se lee desde un archivo de una base de datos llamada "perfiles.txt" en el siguiente formato:

admin;0,1,2,3,4,5,6,7  
userGeneral;0,1,2,3,4  
userRookie;0,1,4  

- Cada línea representa un perfil con seguido de un punto y coma `;` y luego los permisos correspondientes.

## Base de Datos del menu
La opciones desplegadas en el menu se leen desde una base de datos llamada "menu.txt" en el siguiente formato:

0,Salir,0  
1,Realizar sumatoria del vector,1  
2,Realizar promedio del vector,2  



- Cada línea representa una opcion del menu, en donde los valores estan separados por comas.
- El primer numero antes de la coma representa el numero de la opcion en el menu, el string siguiente la opcion del menu, mientras que el ultimo numero viene asociado a la funcion que se debe ejecutar en el codigo para dicha opcion.

## Archivo configuracion.env  

Archivo dedicado a la ruta de las bases de datos con la siguiente estructura, la cual es leida desde el programa:

MENU=/home/rodrigo/Escritorio/Universidad/6to/SO/Tarea03/Bases de datos/menu.txt  

PERFILES=/home/rodrigo/Escritorio/Universidad/6to/SO/Tarea03/Bases de datos/perfiles.txt  

USUARIOS=/home/rodrigo/Escritorio/Universidad/6to/SO/Tarea03/Bases de datos/usuarios.txt  

-En donde se encuentran las rutas de las base de datos menu.txt,perfiles.txt y usuarios.txt.
