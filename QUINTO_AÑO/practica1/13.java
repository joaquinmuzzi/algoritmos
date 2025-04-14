/* 3 Agregar un bucle do-while para que el menu se repita, tambien agrega la opcion 4 para salir del menu  */

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("INGRESAR PRIMER NUMERO");
		int num1 = sc.nextInt();
		System.out.println("INGRESAR SEGUNDO NUMERO");
		int num2 = sc.nextInt();
		System.out.println("INGRESAR OPERACION: 1.SUMAR 2.RESTAR 3.MULTIPLICAR 4.SALIR");
		char operacion = sc.nextInt();

		do{
			switch(operacion) {
				case 1: 
					System.out.println(num1+num2);
					break;
				case 2: 
					System.out.println(num1-num2);
					break;
				case 3: 
					System.out.println(num1*num2);
					break;
				case 4: 
					break;
				default: 
					System.out.println("INGRESE UN COSO VALIDO");
					break;
			}
		} while (operacion != 4);


		sc.close();
	}

}