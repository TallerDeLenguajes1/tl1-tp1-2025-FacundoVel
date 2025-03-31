[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)


# ¿Que es el archivo .gitignore?

El archivo **.gitignore** es un archivo de texto que le indica a git que archivos o carpetas debe ignorar y no inluir en el repositorio.

## ¿Por qué es conveniento Incluirlo?

1. Evita subir archivos innecesarios
	- Archivos temporales, logs, cachés y binarios que no son necesarios en el repositorio.
2. Protege informacion sensible
	- Contraseñas, credencias, claves API o archivos de configuracion local.
3. Mejora la organizacion y rendimiento
	- Evita que Git rastree archivos generados automáticamente que no deben estar en el control de versiones

## ¿Cuándo se debe hacer?

Siempre al iniciar un nuevo proyecto con Git.
Es recomendable agregar un **.gitignore** antes del primer *commit* para evitar que archivos innecesarios terminen en el repositorio

## ¿Cómo configurar .gitignore?

el **.gitignore** se configura con reglas simples. Cada línea representa un archivo o carpeta a ignorar. por ej:

### Archivos del Sistema (windows, macOS y linux)

.DS_Store
Thumbs.db
desktop.ini

### Archivos de logs y bases de datos temporales
*.log
*.sqlite
*.db
*.bak

### Archivos compilados (C, C++, Go, Java, etc.)
*.o
*.out
*.a
*.so
*.exe
*.class
*.jar


## Como ignorar un archivo llamado "ignorado.txt"

Para ignorar un archivo especifico llamado ignorado.txt en tu repositorio, seguir estos pasos:

1. ### Agregar la regla en .gitignore
	- Abrir el archivo **.gitignore** (o crearlo si no existe) y agregar al archivo ignorado.txt
2. ### Verificar que Git lo este ignorando
	- Utilizando git status verificaremos que efectivamente este siendo ignorado.
3. ### Confirmar los cambios
	- con git commit -m "mensaje representativo" (por ej: "se agrega a.ignore el archivo ignorado.txt") y luego el comando git push origin main para subir los cambios a GitHub


