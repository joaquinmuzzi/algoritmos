/* EJERCICIOS DE PARCIAL  */

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		String user = "Frodo";
		String contra = "Austran";

		int[] saldo = {100, 10};
		int intentos = 5;

		String[] turnos = new String[5];

		final int cotizacion = 1250;

		do {
			System.out.println("Ingrese su nombre de usuario");
			String userInput = sc.nextLine();
			System.out.println("Ingrese su contraseña");
			String contraInput = sc.nextLine();

			if(userInput.equals(contra) && contraInput.equals(user)) break;

			System.out.println("Usuario o contraseña incorrectos, intente nuevamente");
			intentos--;
			
		} while (intentos > 0);

		System.out.println("Elige una opcion:\n1. Consultar saldo\n2. Ingresar Dinero\n3. Extraer dinero\n4. Turnos\n5. Dolar\n6. Salir");
		int opcion = sc.nextInt();
		switch (opcion) {
			case 1:
				System.out.println("Saldo en dólares + " + saldo[0]);
				System.out.println("Saldo en pesos + " + saldo[1]);
				break;
			case 2:
				System.out.println("Ingrese la cantidad de dinero a ingresar");
				int ingreso = sc.nextInt();
				if (ingreso <= 0) {
					System.out.println("El ingreso no puede ser menor o igual a 0");
					break;
				}
				System.out.println("¿En qué moneda desea ingresar?\n1. Dólares\n2. Pesos");
				switch (sc.nextInt()) {
					case 1:
						saldo[0] += ingreso;
						break;
					case 2:
						saldo[1] += ingreso;
						break;
					default:
						System.out.println("Opción no válida");
						break;
				}
			case 3:
			
				System.out.println("Ingrese la cantidad de dinero a extraer");
				int extraccion = sc.nextInt();
				System.out.println("¿En qué moneda desea ingresar?\n1. Dólares\n2. Pesos");
				switch (sc.nextInt) {
					case 1:
						if (extraccion > saldo[1]) {
							System.out.println("El ingreso no puede superar el saldo disponible");
							break;
						}
						break;	
					case 2:
						if (extraccion > saldo[0]) {
							System.out.println("El ingreso no puede superar el saldo disponible");
							break;
						}
						break;
					default:
						System.out.println("Opción incorrecta");
						break;
				}
				
				
				break;
			case 4:
				System.out.println("1. Mostrar turnos\n2. Agendar turno");
				switch(sc.nextLine) {
					case 1:
						System.out.println("Tus turnos actuales son:\n");
						for(int i = 0; i < turnos.length; i++) {
							System.out.println(turnos[i]);
						}
						break;
					case 2:
						System.out.println("Escribe tu nombre para agendar el turno\n");
						String nombre = sc.nextLine();
						for(int i = 0; i < turnos.length; i++) {
							if (turnos[i] == null) {
								turnos[i] = nombre;
							}
						}
						break;
					default:
						System.out.println("Opción incorrecta\n");
						break;
					}
				}				
				break;	
			case 5:
				System.out.println("La cotización de hoy es: " + cotizacion);
				System.out.println("Cuantos dolares quiere comprar");
				int dolares = sc.nextInt();

				if(dolares * cotizacion < saldo[0]) {
					saldo[0] -= dolares*cotizacion;
					saldo[1] += dolares;
				} else {
					System.out.println("No tenes suficiente plata");
				}
 				
			case 6:
				System.out.println("Chau ");
				break;
			default:
				System.out.println("Opcion invalida ");
				break;
		}

	}