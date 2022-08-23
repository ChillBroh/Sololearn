import java.util.Scanner;

public class RoomChargeCalculatorMain {
    //main method
    public static void main(String[] args) {

        String balcony, parking, tv, kitchen, wifi, garden, ac; //declare variables to store the user selection
        boolean confirmBalcony, confirmParking, confirmTv, confirmKitchen, confirmWifi, confirmGarden, confirmac;
        int charge,total_charge;
        String addService;

        Scanner val = new Scanner(System.in);
        RoomChargeCalculator cal= new RoomChargeCalculator();

        System.out.println("***Room Charge Calculator**\n");
        System.out.println("---Please Choose a room that you want to pay for----");
        System.out.println("1.Delux Double Room");
        System.out.println("2.Standard Family Room");
        System.out.println("3.Standard Single Room");
        System.out.println("4.Quit");
        System.out.print("Please Enter Number (1-4): ");
        int number = val.nextInt();

        //user chosen option check
        switch(number) {
            case 1 :
                System.out.println();
                System.out.println("Delux Double Room Price : " + cal.Deluxdouble);
                System.out.println();

                //show additional services
                System.out.println("*** Our Additional Services ***");
                System.out.println("For Balcony : " + cal.balconyPrice);
                System.out.println("For Parking : " + cal.parkingPrice);
                System.out.println("For TV : " + cal.tvPrice);
                System.out.println("For Kitchen : " + cal.kitchenPrice);
                System.out.println("For WiFi : " + cal.wifiPrice);
                System.out.println("*******************************");
                System.out.println();
                //ask if want those additional options
                System.out.print("Do You Need Additional Services ? (Yes/No) : ");
                addService = val.next().toLowerCase();

                if(addService.equals("yes")) {

                    //ask about the addition services one by one
                    System.out.print("Do you need to add Balcony? (Yes/No) : ");
                    balcony = val.next().toLowerCase();
                    confirmBalcony = cal.confirmation(balcony);

                    System.out.print("Do you need to add Parking? (Yes/No): ");
                    parking = val.next().toLowerCase();
                    confirmParking = cal.confirmation(parking);

                    System.out.print("Do you need to add TV? (Yes/No): ");
                    tv = val.next().toLowerCase();
                    confirmTv = cal.confirmation(tv);

                    System.out.print("Do you need to add Kitchen? (Yes/No): ");
                    kitchen = val.next().toLowerCase();
                    confirmKitchen = cal.confirmation(kitchen);

                    System.out.print("Do you need to add WIFI? (Yes/No): ");
                    wifi = val.next().toLowerCase();
                    confirmWifi = cal.confirmation(wifi);

                    //calculate total charge for additional services
                    charge = cal.getChargeDeluxDouble(confirmBalcony, confirmParking, confirmTv, confirmKitchen, confirmWifi);

                    //calculate total charge for the room
                    total_charge = charge + cal.Deluxdouble;
                    //print the total charge
                    System.out.println("Your Total Price For Delux Double Room is " + total_charge);

                }else {
                    //print total charge without additional services
                    System.out.println("\nYour Total Price For Delux Double Room is " + cal.Deluxdouble);
                }
                break;
            case 2 :
                System.out.println();
                System.out.println("Standard Family Room Price : " + cal.StandardFamily);
                System.out.println();

                //show additional services
                System.out.println("*** Our Additional Services ***");
                System.out.println("For Parking : " + cal.parkingPrice);
                System.out.println("For Kitchen : " + cal.kitchenPrice2);
                System.out.println("For Garden : " + cal.gardenPrice);
                System.out.println("*******************************");
                System.out.println();
                //ask if want those additional options
                System.out.print("**** Do You Need Additional Services ? (Yes/No) : ");
                addService = val.next().toLowerCase();

                if(addService.equals("yes")) {

                    //ask about the addition services one by one
                    System.out.print("Do you need to add Parking? (Yes/No): ");
                    parking = val.next().toLowerCase();
                    confirmParking = cal.confirmation(parking);

                    System.out.print("Do you need to add Kitchen? (Yes/No): ");
                    kitchen = val.next().toLowerCase();
                    confirmKitchen = cal.confirmation(kitchen);

                    System.out.print("Do you need to add Garden? (Yes/No): ");
                    garden = val.next().toLowerCase();
                    confirmGarden = cal.confirmation(garden);

                    //calculate total charge for additional services
                    charge = cal.getChargeStandardFamily(confirmParking, confirmKitchen, confirmGarden);

                    //calculate total charge for the room
                    total_charge = charge + cal.StandardFamily;
                    //print the total charge
                    System.out.println("Your Total Price For Delux Double Room is " + total_charge);

                }else {
                    //print total charge without additional services
                    System.out.println("\nYour Total Price For Delux Double Room is " + cal.StandardFamily);
                }
                break;

            case 3 :
                System.out.println();
                System.out.println("Standard Single Room Price : " + cal.StandardSingle);
                System.out.println();

                //show additional services
                System.out.println("*** Our Additional Services ***");
                System.out.println("For Parking : " + cal.parkingPrice);
                System.out.println("For AC : " + cal.acPrice);
                System.out.println("For WiFi : " + cal.wifiPrice);
                System.out.println("*******************************");
                System.out.println();
                //ask if want those additional options
                System.out.print("**** Do You Need Additional Services ? (Yes/No) : ");
                addService = val.next().toLowerCase();

                if(addService.equals("yes")) {

                    //ask about the addition services one by one
                    System.out.print("Do you need to add Parking? (Yes/No): ");
                    parking = val.next().toLowerCase();
                    confirmParking = cal.confirmation(parking);

                    System.out.print("Do you need to add AC? (Yes/No): ");
                    ac = val.next().toLowerCase();
                    confirmac = cal.confirmation(ac);

                    System.out.print("Do you need to add WiFi? (Yes/No): ");
                    wifi = val.next().toLowerCase();
                    confirmWifi = cal.confirmation(wifi);

                    //calculate total charge for additional services
                    charge = cal.getChargeStandardSingle(confirmParking, confirmac, confirmWifi);

                    //calculate total charge for the room
                    total_charge = charge + cal.StandardSingle;
                    //print the total charge
                    System.out.println("Your Total Price For Delux Double Room is " + total_charge);

                }else {
                    //print total charge without additional services
                    System.out.println("\nYour Total Price For Delux Double Room is " + cal.StandardSingle);
                }
                break;

            case 4:
                System.out.println("*** Sad to See you leave *** ");
                System.out.println("*** Have a Nice Day!!! ***");
                break;

            default :
                System.out.println();
                System.out.println("It Seems You have entered an incorrect input!");


        }
    }
}

