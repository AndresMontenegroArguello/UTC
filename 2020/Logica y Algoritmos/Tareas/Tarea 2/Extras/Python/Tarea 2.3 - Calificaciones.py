
# Introducción
print("Logica y Algoritmos")
print("Andres Montenegro")
print("02/Febrero/2020")
print("Tarea 2.3")
print("Calificaciones")
print("**********")

# Definición de variables
# Python es de tipado dinámico por lo que no es necesario declarar antes de asignar valor a las variables

# Ingreso de datos por el usuario
print("Ingrese la nota obtenida: ")
Nota = float(input())

# Procesamiento de datos
if Nota >= 60 and Nota < 70:
	Calificacion = "Insuficiente"
elif Nota >= 70 and Nota < 80:
	Calificacion = "Suficiente"
elif Nota >= 80 and Nota < 90:
	Calificacion = "Bien"
elif Nota >= 90 and Nota <= 100:
	Calificacion = "Sobresaliente"
else:
	Calificacion = "Indefinida"

# Presentación de resultados
print("Su Calificacion es " + Calificacion)

