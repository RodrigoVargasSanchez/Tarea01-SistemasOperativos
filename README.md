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

## Compilación

Para compilar el programa, asegúrate de tener instalado un compilador de C++ en tu sistema. Utiliza el siguiente comando en la terminal:

```bash
make
```


## Ejecución

Después de compilar correctamente, puedes ejecutar el programa utilizando el siguiente comando:

```bash
./prog -u Usuario -v 1,2,3,4
```

- Reemplaza `Usuario` con el nombre del usuario que deseas utilizar.
- Reemplaza `1,2,3,4` con los valores enteros separados por comas para el vector.

## Base de Datos

La información de los usuarios y sus permisos se lee desde un archivo de texto en el siguiente formato:

Matias;1,2,3,4
Luis;1,2,3
Mateo;2,3


- Cada línea representa un usuario con su nombre seguido de un punto y coma `;` y luego los permisos separados por comas.
- Los permisos son valores enteros que representan el acceso del usuario a ciertas funcionalidades.
