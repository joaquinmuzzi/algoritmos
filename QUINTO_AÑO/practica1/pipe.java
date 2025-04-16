package pipe;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int saldo = 2700;
        int monto = 0;
        int extraer = 0;
        int dolar = 500;
        int numero = 0;
        int acomprar = 0;
        int dolar_mios = 0;

        String nada = "dsa";

        do {
            System.out.println("1. Consultar ");
            System.out.println("2. Ingresar ");
            System.out.println("3. Extraer");
            System.out.println("4. Dolar ");
            System.out.println("5. Salir ");

            String opcion = sc.next();

            switch (opcion) {
                case "1":
                    System.out.println("Consultar Saldo");
                    System.out.println("Su saldo es de un total de: " + saldo + " pesos");
                    System.out.println("Su saldo es de un total de: " + dolar_mios + " dolares");

                    System.out.println("Toque una tecla para salir");
                    nada = sc.next();
                    break;

                case "2":
                    System.out.println("Ingresar Saldo");
                    System.out.print("Monto a ingresar: ");
                    monto = sc.nextInt();

                    if (monto > 0) {
                        saldo += monto;
                        System.out.println("Monto sumado");
                    }

                    System.out.println("Toque una tecla para salir");
                    nada = sc.next();
                    break;

                case "3":
                    System.out.println("Extraer Dinero");
                    System.out.println("Extraer saldo");
                    System.out.print("Cantidad a extraer: ");
                    extraer = sc.nextInt();

                    if (saldo > extraer) {
                        saldo -= extraer;
                        System.out.println("Saldo extraido");
                    }

                    System.out.println("Toque una tecla para salir");
                    nada = sc.next();
                    break;

                case "4":
                    System.out.println("Dolar");

                    System.out.println("El dolar actualmente cotiza en " + dolar);
                    System.out.print("Cantidad de dolares a comprar: ");
                    acomprar = sc.nextInt();

                    if (acomprar * dolar < saldo) {
                        dolar_mios += acomprar;
                        saldo -= acomprar * dolar;
                        System.out.println("Comprados con exito");
                    } else {
                        System.out.println("No tiene dinero suficiente para esa cantidad de dolares");
                    }

                    System.out.println("Toque una tecla para salir");
                    nada = sc.next();
                    break;

                case "5":
                    System.out.println("Salir");
                    return;
                default:
                    System.out.println("Opcion incorrecta");
                    break;
            } while (opcion < 5);
        }
    }
}
