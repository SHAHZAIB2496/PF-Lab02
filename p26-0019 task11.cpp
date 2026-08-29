#include<stdio.h>
int  main()
{
	double tea_price=60.00,tea_subtotal,samosa_price=40.50,samosa_subtotal,chicken_roll_paratha_price=120.00,chicken_roll_paratha_subtotal;
	double bill_subtotal,gst,final_amount;
	int tea_quantity=3,samosa_quantity=4,chicken_roll_paratha_quantity=2;
    tea_subtotal = tea_quantity * tea_price;
    samosa_subtotal = samosa_price * samosa_quantity;
    chicken_roll_paratha_subtotal = chicken_roll_paratha_quantity * chicken_roll_paratha_price;
    bill_subtotal = tea_subtotal + samosa_subtotal + chicken_roll_paratha_subtotal;    
    gst= 0.16*bill_subtotal;
    final_amount= bill_subtotal+gst;
    printf("================FAST CAFETERIA RECEIPT========================\n");
    printf("Item\t\tQty\tUnit Price (PKR)\tSubtotal (PKR)\n");
	printf("-----------------------------------------------------------\n");
    printf("Item\t\tQty\tUnit Price (PKR)\tSubtotal (PKR)\n");
    printf("------------------------------------------------------------\n");
    printf("Tea\t\t%d\t%.2f\t\t\t%.2f\n",tea_quantity, tea_price, tea_subtotal);
    printf("Samosa\t\t%d\t%.2f\t\t\t%.2f\n",samosa_quantity, samosa_price, samosa_subtotal);
    printf("Chicken Roll\t%d\t%.2f\t\t\t%.2f\n",chicken_roll_paratha_quantity,chicken_roll_paratha_price,chicken_roll_paratha_subtotal);
    printf("------------------------------------------------------------\n");
    printf("Subtotal:\tPKR %.2f\n", bill_subtotal);
    printf("GST (16%%):\tPKR %.2f\n", gst);
    printf("------------------------------------------------------------\n");
    printf("Grand Total:\tPKR %.2f\n\n", final_amount);
    printf("================= THANK YOU FOR YOUR VISIT======================");  
    return 0;
}