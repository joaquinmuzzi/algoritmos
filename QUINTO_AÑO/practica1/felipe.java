package HOLA;

import java.util.Scanner;
import java.time.LocalDate;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String usuarioguardado = "felipe22";
        String contraseñaguardada = "hola123";

        for (int i = 4; i >= 0; i--) {
            System.out.println("Ingrese su usuario: ");
            String usuario = sc.next();

            System.out.println("Ingrese su contraseña: ");
            String contraseña = sc.next();

            if (contraseña.length() < 6) {
                System.out.println("La contraseña debe contener al menos 6 caracteres");
            }

            if (contraseña.equals(contraseñaguardada) && usuario.equals(usuarioguardado)) {

                double dolarHoy = 1140;
                double saldo = 50350.2;
                double saldoDolar = 12;
                int opcion = 1;
                LocalDate hoy = LocalDate.now();
                double[] array = {saldo, saldoDolar};
                String[] turnos = new String[5];

                do {
                    System.out.println("1. Consultar Saldo\n2. Ingresar Dinero\n3. Extraer Dinero\n4. Dólar\n5. Turnos\n6. Salir");
                    opcion = sc.nextInt();

                    switch (opcion) {
                        case 1:
                            System.out.println("Su saldo actual en pesos es: " + array[0] + 
                                               "\nSu saldo actual en dólares es: " + array[1]);
                            break;

                        case 2:
                            System.out.println("Ingrese un monto: ");
                            double ingreso = sc.nextDouble();
                            if (ingreso > 0) {
                                array[0] += ingreso;
                            } else {
                                System.out.println("Ingrese un monto válido");
                            }
                            break;

                        case 3:
                            System.out.println("Ingrese el monto que quiera retirar: ");
                            double retiro = sc.nextDouble();
                            if (retiro > 0 && retiro <= array[0]) {
                                array[0] -= retiro;
                            } else {
                                System.out.println("Ingrese un monto válido");
                            }
                            break;

                        case 4:
                            System.out.println("La cotización del dólar hoy (" + hoy + ") es: " + dolarHoy);
                            while (true) {
                                System.out.println("¿Quiere comprar dólares? S/N");
                                String sn = sc.next();

                                if (sn.equalsIgnoreCase("S")) {
                                    System.out.println("Ingrese la cantidad de dólares que quiere comprar: ");
                                    double dolares = sc.nextDouble();
                                    if (dolares * dolarHoy <= array[0]) {
                                        array[0] -= dolares * dolarHoy;
                                        array[1] += dolares;
                                    } else {
                                        System.out.println("Ingrese un monto válido");
                                    }
                                    break;

                                } else if (sn.equalsIgnoreCase("N")) {
                                    System.out.println("Volviendo al menú");
                                    break;

                                } else {
                                    System.out.println("Ingrese S o N");
                                }
                            }
                            break;

                        case 5:
                            for (int j = 0; j < turnos.length; j++) {
                                System.out.println((j + 1) + ". " + turnos[j]);
                            }

                            System.out.println("¿Desea agendar un turno? S/N");
                            String turno = sc.next();

                            if (turno.equalsIgnoreCase("S")) {
                                System.out.println("Ingrese su nombre para agendarlo: ");
                                String nombre = sc.next();

                                for (int t = 0; t < turnos.length; t++) {
                                    if (turnos[t] == null) {
                                        turnos[t] = nombre;
                                        break;
                                    }
                                }

                            } else if (turno.equalsIgnoreCase("N")) {
                                System.out.println("Volviendo al menú");
                            } else {
                                System.out.println("Ingrese S o N");
                            }
                            break;
                    }

                } while (opcion != 6);

                System.out.println("Saliendo");
                break;

            } else if (i == 0) {
                System.out.println("Saliendo");
                break;

            } else {
                System.out.println("Contraseña/usuario incorrecto, te quedan " + i + " intento/s");
            }
        }

        sc.close();
    }
}
