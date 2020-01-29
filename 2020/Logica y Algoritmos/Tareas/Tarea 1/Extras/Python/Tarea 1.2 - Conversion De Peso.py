
# Introducción
print("Logica y Algoritmos")
print("Andres Montenegro")
print("28/Enero/2020")
print("Tarea 1.2")
print("Conversion de Peso")
print("**********")

# Definición de variables
# Python es de tipado dinámico por lo que no es necesario declarar antes de asignar valor a las variables

# Ingreso de datos por el usuario
print("Ingrese un peso en kilogramos (Kg): ")
Kg = float(input())

# Procesamiento de datos
Lb=Kg*2.205
Oz=Kg*35.274
Tn=Kg*0.0011
Gr=Kg*1000

# Presentación de resultados
print("Conversión de " + str(Kg) + "Kg")
print("Libras = " + str(Lb) + "Lb")
print("Onzas = " + str(Oz) + "Oz")
print("Toneladas = " + str(Tn) + "Tn")
print("Gramos = " + str(Gr) + "Gr")

