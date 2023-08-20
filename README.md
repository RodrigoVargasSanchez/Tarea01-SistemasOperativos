# Trabajo 1 Sistope

## Descripción

Este repositorio contiene el código fuente de una aplicación en C++ para la asignatura de Sistemas Operativos. La aplicación está diseñada para realizar operaciones en un vector de valores enteros, utilizando comandos específicos al compilar y ejecutar el programa.

## Funcionalidades

La aplicación permite a los usuarios realizar operaciones en un vector de valores enteros, leyendo la información de una base de datos en forma de archivo de texto. Las principales funcionalidades son:

1. **Realizar Sumatoria del Vector**
   - Calcula y muestra la suma de todos los elementos en el vector.

2. **Realizar Promedio del Vector**
   - Calcula y muestra el promedio de los elementos en el vector.

3. **Realizar Moda del Vector**
   - Calcula y muestra la moda (valor más frecuente) en el vector.

4. **Contar Elementos del Vector**
   - Cuenta y muestra la cantidad de elementos en el vector.
  
5. **Crear archivo**
   - Crea un nuevo archivo ".txt" en la ruta y nombre especificados al ejecutar.

6. **Agregar nuevo texto a archivo**
   - Escribe el texto especificado al ejecutar en la ultima linea del archivo creado en la opcion 5.


## Compilación

Para compilar el programa, asegúrate de tener instalado un compilador de C++ en tu sistema. Utiliza el siguiente comando en la terminal:

```bash
make
```


## Ejecución

Después de compilar correctamente, puedes ejecutar el programa utilizando el siguiente comando:

```bash
./prog -u Usuario -v 1,2,3,4 -f $HOME/Escritorio/Universidad,hola.txt -t soyTexto
```

- Reemplaza `Usuario` con el nombre del usuario que deseas utilizar.
- Reemplaza `1,2,3,4` con los valores enteros separados por comas para el vector.
- Reemplaza `$HOME/Escritorio/Universidad,hola.txt` con la ubicacion y nombre del nuevo archivo a crear en la opcion 5. Donde '$HOME/Escritorio/Universidad' corresponde al path y 'hola.txt' corresponde al nombre del archivo a crear. La separacion viene dada por una coma.
- Reemplaza `soyTexto` por el texto a escribir dentro del archivo antes creado.

## Base de Datos de usuarios

La información de los usuarios y sus permisos se lee desde un archivo de texto en el siguiente formato:

Matias;1,2,3,4  

Luis;1,2,3  

Mateo;2,3


- Cada línea representa un usuario con su nombre seguido de un punto y coma `;` y luego los permisos separados por comas.
- Los permisos son valores enteros que representan el acceso del usuario a ciertas funcionalidades.

## Base de Datos del menu
La opciones desplegadas en el menu se leen desde un archivo de texto en el siguiente formato:

0,Salir,0  
1,Realizar sumatoria del vector,1  
2,Realizar promedio del vector,2  



- Cada línea representa una opcion del menu, en donde los valores estan separados por comas.
- El primer numero antes de la coma representa el numero de la opcion en el menu, el string siguiente la opcion del menu, mientras que el ultimo numero viene asociado a la funcion que se debe ejecutar en el codigo para dicha opcion.
