/* EJERCICIOS DE PARCIAL  */

package holamundo;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int opcion;
        final int cotizacion = 1234;


        do {
            System.out.println("Elegir una opcion\n\n");
            System.out.print("1. Consultar saldo\n2. Ingresar dinero\n3. Extraer dinero\n4. Dolar\n5. Salir");

            int saldo[] = {0, 0};

            opcion = sc.nextInt();

            switch( opcion ){
                case 1:
                    System.out.println("Tu saldo es: " + saldo[0]);
                    break;
                case 2:
                    System.out.println("Cuanto queres meter");
                    int debito = sc.nextInt();

                    if( debito < 1) {
                        System.out.println("Debito no valido");
                        break;
                    }

                    saldo[0] += debito;

                    break;
                case 3:
                    System.out.println("Cuanto queres sacar");
                    int extraccion = sc.nextInt();

                    if ( extraccion > saldo[0] ) {
                        System.out.println("Extraccion no valido");
                        break;
                    }

                    saldo[0] -= extraccion;

                    break;
                case 4:
                    System.out.println("La cotización del dólar a la fecha " + fecha + " es " + cotizacion)
                    System.out.println("Tenes " + saldo[1] + " dolares");
                    break;
                case 5:
                    System.out.println("Nos vemos");
                    return;
                default:
                    System.out.println("Opción incorrecta");
                    break;
            }


        } while (opcion != 5);

		sc.close();
	}

}