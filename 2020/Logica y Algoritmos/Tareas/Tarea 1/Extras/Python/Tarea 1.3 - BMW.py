
# Introducción
print("Logica y Algoritmos")
print("Andres Montenegro")
print("28/Enero/2020")
print("Tarea 1.3")
print("BMW Costa Rica")
print("**********")

# Definición de variables
# Python es de tipado dinámico por lo que no es necesario declarar antes de asignar valor a las variables

# Ingreso de datos por el usuario
print("Ingrese el nombre del empleado: ")
Empleado = input()
print("Ingrese el numero de ventas realizadas en el mes: ")
Ventas = int(input())
ComisionBase = 0
ComisionPorcentaje = 0

for n in range(0, Ventas):
	print("Ingrese el total de la venta #" + str(n+1) + " en Colones: ")
	TotalVenta = float(input())
	ComisionBase=ComisionBase + 100000
	ComisionPorcentaje=ComisionPorcentaje + (TotalVenta * 0.10)
	print("Comisión por venta: " + str(ComisionBase + ComisionPorcentaje) + "Colones (" + str(ComisionBase) + " + " + str(ComisionPorcentaje) + ")")

# Procesamiento de datos
Salario = 800000 + ComisionBase + ComisionPorcentaje

# Presentación de resultados
print("El Salario del Mes de " + Empleado + " es de " + str(Salario) + "Colones")

