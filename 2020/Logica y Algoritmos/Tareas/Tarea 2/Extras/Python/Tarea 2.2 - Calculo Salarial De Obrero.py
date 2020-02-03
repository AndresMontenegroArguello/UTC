
# Introducción
print("Logica y Algoritmos")
print("Andres Montenegro")
print("02/Febrero/2020")
print("Tarea 2.2")
print("Calculo Salarial De Obrero")
print("**********")

# Definición de variables
# Python es de tipado dinámico por lo que no es necesario declarar antes de asignar valor a las variables

# Ingreso de datos por el usuario
print("Ingrese el numero de horas trabajadas en la semana: ")
Horas = float(input())

# Procesamiento de datos
if Horas > 40:
	SalarioSemanal = (40 * 4000) + ((Horas - 40) * 5000)
else:
	SalarioSemanal = Horas * 40000

# Presentación de resultados
print("El salario semanal es de " + str(SalarioSemanal) + " Colones")

