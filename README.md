# Taller 1 - Estructura de Datos

## Integrantes
- **Constanza Araya** – **21.609.057-8** – **Bunnyybundy** – **ICCI**
- **Kevin Zamora** – **21.578.521-1** – **kivairou** – **ICCI**

---

##  Descripción
Este taller implementa un sistema de gestión hospitalaria utilizando **estructuras de datos en C++**.  
El programa permite:
- Ingresar pacientes a una **cola dinámica**.
- Atender pacientes y registrar su atención en una **pila de historial**.
- Mostrar los **servicios disponibles** del hospital.
- Consultar el historial de atenciones realizadas.

Las estructuras principales creadas son:
- **Hospital**: lista enlazada de servicios médicos.
- **ColaPacientes**: cola dinámica para administrar pacientes en espera.
- **PilaHistorial**: pila para registrar el historial de atenciones.
- **Persona / Paciente**: clases que representan individuos con atributos como ID, nombre, edad y servicio.

---

##  Instrucciones de Compilación

### Usando CLion
1. Abrir el proyecto en CLion.
2. Verificar que el archivo `CMakeLists.txt` incluya todos los `.cpp`.
3. Seleccionar **Build → Build Project** o presionar `Ctrl+F9`.

## Instrucciones de Compilación y Ejecución

> **Nota de desarrollo:** Este proyecto fue desarrollado y probado principalmente utilizando **CLion** como entorno de desarrollo integrado (IDE).
### 1. Entorno Principal: CLion (Recomendado)

#### Compilación:
1. Abrir el proyecto directamente en **CLion**.
2. Verificar que el archivo `CMakeLists.txt` incluya todos los archivos `.cpp`.
3. Seleccionar **Build → Build Project** o presionar `Ctrl+F9`.

#### Ejecución:
1. Asegúrate de que el archivo **`pacientes.txt`** esté en el directorio de trabajo del ejecutable dentro de CLion (o en la carpeta raíz del proyecto).
2. Presionar el botón **Run** (`Shift+F10`) en CLion.

---

### 2. Entorno Alternativo: Terminal Linux

Si se requiere compilar o ejecutar el proyecto desde la línea de comandos en Linux, se pueden utilizar cualquiera de las siguientes opciones:

#### Opción A: Mediante CMake
1. Abrir la terminal y navegar hasta la carpeta del proyecto:
   ```bash
   cd /ruta/a/tu/proyecto
   ```
2. Crear una carpeta de compilación y acceder a ella:
   ```bash
   mkdir build && cd build
   ```
3. Generar los archivos de compilación y compilar:
   ```bash
   cmake ..
   make
   ```
4. Copiar el archivo de datos y ejecutar:
   ```bash
   cp ../pacientes.txt .
   ./taller1
   ```

#### Opción B: Mediante `g++` directamente
Si prefieres compilar directamente utilizando el compilador de C++:
```bash
g++ -std=c++17 *.cpp -o taller1
./taller1
```

---

## Opciones del Menú
Al ejecutar el programa, se desplegará un menú interactivo con las siguientes opciones:
- Ingresar pacientes (desde teclado o cargando **`pacientes.txt`**)
- Mostrar servicios
- Mostrar historial
- Salir

---

## Observaciones
- Proyecto desarrollado y estructurado en **C++17**.
- Configuración nativa mediante **CMake** en CLion.
- Se aplican estructuras dinámicas (listas, colas y pilas) para simular los procesos del hospital.
- El archivo **`pacientes.txt`** es indispensable para realizar las pruebas con carga automática de datos.
