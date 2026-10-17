# Caso: Asistencia y Examen Final

## Descripción
Este programa en C++ ayuda a determinar si un estudiante cumple con el requisito mínimo de asistencia para presentar su examen final. El sistema solicita el porcentaje de asistencia por consola y evalúa si alcanza el 80% requerido.

## Funcionamiento y Lógica
1. **Entrada de datos:** Se utiliza `cin` para leer el porcentaje de asistencia ingresado por el usuario.
2. **Evaluación condicional (`if - else`):** Se emplea el operador de comparación mayor o igual que (`>=`):
   - Si el porcentaje es **80 o más** (`>= 80`), el programa indica que el estudiante **puede presentar el examen**.
   - De lo contrario (`else`), muestra que el estudiante **debe reponer clases**.

## Casos de Prueba
El programa fue validado con los siguientes valores requeridos:

| Entrada (Porcentaje) | Salida Esperada |
| :---: | :--- |
| `80` | Puede presentar el examen |
| `79` | Debe reponer clases |
| `100` | Puede presentar el examen |

## Cómo ejecutar el programa
1. Clona este repositorio o descarga el archivo `.cpp`.
2. Abre el archivo en tu entorno de desarrollo (como Visual Studio) o compílalo desde la terminal:
   ```bash
   g++ "Caso - asitencia y examen final.cpp" -o asistencia
   ./asistencia
