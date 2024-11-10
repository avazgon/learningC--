# 📚 C++ Learning Journey - Educational Applications 🌟

## 📋 Descripción del Proyecto
Bienvenido a mi repositorio de **aplicaciones didácticas en C++**. El objetivo de este repositorio es ayudarme (y a otros) a aprender y dominar los conceptos esenciales del lenguaje C++, desde lo básico hasta temas más avanzados como la programación orientada a objetos, gestión de memoria e interacción con el sistema operativo.

---

## 🚀 Aplicaciones y Ejercicios 📂

### 1. **Hola Mundo** 🌍
- **Descripción**: La clásica introducción a C++. Este ejecutable pregunta si puedes decir algo, para más tarde devolvértelo.
- **Objetivo**: Sintaxis básica, funciones de entrada/salida (`cin`, `cout`), compilación y ejecución.
- **Ejecución**:

```sh
cd learningC++/helloWorld && g++ index.cpp -o index && ./index
```

### 2. **Calculadora de Operaciones Básicas** ➕➖✖️➗
- **Descripción**: Una calculadora simple que permite realizar operaciones matemáticas básicas (suma, resta, multiplicación y división).
- **Objetivo**: Manipulación de variables y tipos de datos (int, float, double), operadores aritméticos.
- **Ejecución**:

```sh
cd learningC++/calc && g++ index.cpp -o index && ./index
```

### 3. **Juego de Adivinanza de Números** 🎲
- **Descripción**: Un juego donde el programa piensa un número y el usuario tiene que tratar de adivinarlo. Puede solicitar pistas: su paridad, algún múltiplo o divisor, la cantidad o la suma de sus digitos.
O- **Objetivo**: Uso de estructuras de control (if, else, switch, for, while), lógica básica.
- **Ejecución**:

```sh
cd learningC++/secretNum && g++ index.cpp -o index && ./index
```

### 4. **Factorial con Funciones** 🔢
- **Descripción**: Programa que calcula el factorial de un número introducido por el usuario mediante dos funciones, una mediante un bucle for y otra mediante recursividad. Se ejecutarán en paralelo para averiguar cual es más veloz e indicar el tiempo de calculo de ambas.
- **Objetivo**: Creación y uso de funciones, parámetros y valores de retorno.
- **Ejecución**:

```sh
cd learningC++/factoNum && g++ index.cpp -o index && ./index
```

### 5. **Gestión de Lista de la Compra** (POO) 🧑‍🤝‍🧑
- **Descripción**: Una aplicación que maneja una lista de la compra usando la programación orientada a objetos. Cada elemento tiene un nombre, cantidad y precio.
- **Objetivo**: Introducción a clases y objetos, constructores, destructores.
- **Ejecución**:

```sh
cd learningC++/shopList && g++ index.cpp -o index && ./index
```

### 6. **Animales** - Ejemplo de Herencia 🐾
- **Descripción**: Un juego donde tienes que detectar que animal es cual. Estos emiten un sonido caracteristico y debes reconocerlos.
- **Objetivo**: Comprensión de la herencia, el polimorfismo, y métodos virtuales.
- **Ejecución**:

```sh
cd learningC++/aniDet && g++ index.cpp -o index && ./index
```

### 7. **Array Dinámico de Números** 📊
- **Descripción**: Programa que pone a prueba la memoria del usuario. Por cada ronda se introduce un numero nuevo distinto a los anteriores y el usuario debe recordar cada uno en orden. Se podrá elegir si ordenarlos por salida o por el sistema decimal.
- **Objetivo**: Manejo de memoria dinámica con new y delete, uso de punteros.
- **Ejecución**:

```sh
cd learningC++/dinamicNums && g++ index.cpp -o index && ./index
```

### 8. Manejo de Archivos - **WORDLE** 📁
- **Descripción**: Juego típico Wordle, el cual elige una palabra al azar de un archivo, con todas las palabras a usar. No se puede volver a usar una palabra que haya surgido esta semana. El usuario solo tiene 5 intentos y se guardará un registro de las partidas.
- **Objetivo**: Lectura y escritura de archivos, manejo de fstream.
- **Ejecución**:

```sh
cd learningC++/wordle && g++ index.cpp -o index && ./index
```

## 📂 Estructura del Proyecto

```text
/
├── aniDet/
├── calc/
├── dinamicNums/
├── factoNum/
├── helloWorld/
│   └── index.cpp
├── secretNum/
├── shopList/
├── wordle/
├── .gitignore
└── readme.md
```

---

## ✨ Contribuciones y Mejoras

Esto es un proyecto de aprendizaje personal, ante cualquier sugerencia, tengo el repositorio abierto a todos los conocimientos que sean. Si deseas contribuir, no dudes en contactar conmigo, abrir un issue o un fork y comentar las ocurrencias que se le ocurran.

---

## 🏅 Créditos y Agradecimientos

Creado con ❤️ por Álvaro Vázquez González. Agradezco a todos los recursos en línea, tutoriales y foros que han contribuido a volverme loco con C++.