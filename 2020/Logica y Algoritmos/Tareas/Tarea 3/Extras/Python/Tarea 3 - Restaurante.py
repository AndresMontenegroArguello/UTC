
# Introducción
print("Logica y Algoritmos")
print("Andres Montenegro")
print("29/Febrero/2020")
print("Tarea 3")
print("Restaurante")
print("**********")

# Definición de variables
Continuar = 1
Refresco = 0
Total = 0
Precio1 = 3000
Precio2 = 2500
Precio3 = 3500
Precio4 = 2000
PrecioR = 600

# Ingreso de datos por el usuario + Procesamiento de datos
print("Bienvenido a Restaurante X")
print("**********")
print("Menu")
print("**********")
print("Refresco - c600")
print("Opciones:")
print("1) Pizza - c3000")
print("2) Pollo - c2500")
print("3) Hamburguesa - c3500")
print("4) Tacos - c2000")

while (Continuar == 1):
	print("Que desea ordenar? (Escriba el numero de la opcion)")
	Orden = int(input())
	if Orden == 1:
		PrecioOrden = Precio1
	elif Orden == 2:
		PrecioOrden = Precio2
	elif Orden == 3:
		PrecioOrden = Precio3
	elif Orden == 4:
		PrecioOrden = Precio4
	else:
		PrecioOrden = 0
		print("Opcion Incorrecta")

	Total = Total + PrecioOrden

	print("Desea Agregar Refresco? (Si = 1, No = 0)")
	Refresco = int(input())

	if Refresco == 1:
		Total = Total + PrecioR

	print("Desea Ordenar Algo Mas? (Si = 1, No = 0)")
	Continuar = int(input())

print("El Total es " + str(Total) + " Colones")
print("Desea Pagar con Tarjeta o en Efectivo? (Tarjeta = 1, Efectivo = 0)")
Tarjeta = int(input())

if Tarjeta == 1:
	print("Monto de tarjeta: ")
	MontoTarjeta = float(input())

	if MontoTarjeta > Total:
		Descuento = Total * (0.10)
		Total = Total - Descuento
		print("Pago Realizado.")
		print("Descuento del 5%: c" + str(Descuento))
		print("Total Con Descuento: c" + str(Total))
	else:
		print("Pago Denegado.")
else:
	print("Monto en efectivo: ")
	MontoEfectivo = float(input())

	if MontoEfectivo > Total:
		Vuelto = MontoEfectivo - Total
		print("Pago Realizado.")
		print("Vuelto: c" + str(Vuelto))
	else:
		print("Pago Denegado.")

# Presentación de resultados
print("El Total es " + str(Total) + " Colones")
print("Muchas Gracias Por Preferirnos")
