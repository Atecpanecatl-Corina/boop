while True:
    try:
        base = float(input("ingresa los numeros para la base del triungulo: "))
        altura = float(input("ingresa los numeros para la altura del triángulo: "))
        
        area = (base * altura) / 2
        print(f"el area del triangulo es", {area})
        if area > 100:
            print("El área es grande")
        else:
            print("El área es pequeña")

        continuar = input("¿Quieres continuar? (escribe 'salir' para terminar): ").lower()
        if continuar == "salir":
            print("Programa terminado.")
            break
    except ValueError:
        print("Por favor, ingresa números válidos.")