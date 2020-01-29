# Introducción
print("Logica y Algoritmos")
print("Andres Montenegro")
print("28/Enero/2020")
print("Tarea 1.1")
print("Calculo  Salarial")
print("**********")

# Definición de variables
# Python es de tipado dinámico por lo que no es necesario declarar antes de asignar valor a las variables

# Ingreso de datos por el usuario
print("Ingrese el nombre del empleado: ")
Empleado = input()
print("Ingrese el numero de horas de trabajo diarias: ")
HorasDiarias = int(input())
print("Ingrese el salario por hora: ($) ")
SalarioHora = float(input())

# Procesamiento de datos
SalarioDiario=HorasDiarias*SalarioHora
SalarioSemanal=SalarioDiario*5
SalarioMensual=SalarioSemanal*4
SalarioAnual=SalarioMensual*12

# Presentación de resultados
print("Calculo Salarial de " + Empleado)
print("Salario/Dia: $" + str(SalarioDiario))
print("Salario/Semana: $" + str(SalarioSemanal))
print("Salario/Mes: $" + str(SalarioMensual))
print("Salario/Año: $" + str(SalarioAnual))
