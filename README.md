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

##  Instrucciones de Ejecución

- Asegúrate de que el archivo **`pacientes.txt`** esté en la misma carpeta que el ejecutable.  
  Este archivo contiene los datos de prueba para cargar pacientes automáticamente.

- Ejecuta el programa:

```bash
./taller1
````
El menú mostrará las opciones disponibles:

- Ingresar pacientes (desde teclado o cargando **`pacientes.txt`**)
- Mostrar servicios
- Mostrar historial
- Salir

---

##  Observaciones
- Proyecto desarrollado en **C++17**.
- Configuración mediante **CMake** en CLion.
- Se aplican estructuras dinámicas (listas, colas y pilas) para simular procesos hospitalarios.
- El archivo **`pacientes.txt`** es necesario para probar la carga automática de pacientes.

---
