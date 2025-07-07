/* 
================================================================================
🧾 Project Title : Income Tax Calculator (Nepal - FY 2080/81)
👨‍💻 Author        : Nirmal Sanjel
🎓 Semester      : BCA Second Semester
🏫 Institution   : Jana Bhawana Campus, Godawari-11, Lalitpur
📄 File Name     : taxfile.c
📅 Created On    : 06-07-2025
================================================================================
*/

#include <stdio.h> // Standard Input Output header
#include <stdlib.h> // Standard Library header for general functions
#include <conio.h> // Console Input Output header for console operations

//Functions to calculate different tax slabs

// Calculate Social Security Tax
float csst(float salary) {
    return salary * 0.01; // Calculate 1% Social Security Tax up to 500,000
}

// Calculate 10 Percent Tax
float c10(float amount) {
    return amount * 0.10; // Calculate 10% Tax up to 700,000
}

// Calculate 20 Percent Tax
float c20(float amount) {
    return amount * 0.20; // Calculate 20% Tax up to 1,000,000
}

// Calculate 30 Percent Tax
float c30(float amount) {
    return amount * 0.30; // Calculate 30% Tax above 1,000,000
}


// Main Section where code is written.
int main() {
    char name[50], contact[20]; // User details
    float salary, tax = 0;      // Salary and Tax variables

    // Input user details
    printf("Enter your full name: "); // Prompt for full name
    fgets(name, sizeof(name), stdin); // It reads the full name including spaces

    printf("Enter your contact number: "); // Prompt for contact number
    fgets(contact, sizeof(contact), stdin); // It reads the contact number including spaces

    printf("Enter your annual salary (in NRs): "); // Prompt for annual salary
    scanf("%f", &salary);                          // It reads the annual salary

    // Calculate tax based on salary slabs
    if (salary <= 500000) { 
        tax = csst(salary);             // Calculate tax for salary up to 500,000
    } 
    else if (salary <= 700000) {
        tax = csst(500000);             // Calculate tax for salary between 500,001 and 700,000
        tax += c10(salary - 500000);
    } 
    else if (salary <= 1000000) {
        tax = csst(500000);             // Calculate tax for salary between 700,001 and 1,000,000
        tax += c10(200000);
        tax += c20(salary - 700000);
    } 
    else {
        tax = csst(500000);             // Calculate tax for salary above 1,000,000
        tax += c10(200000);
        tax += c20(300000);
        tax += c30(salary - 1000000);
    }

    // Display tax summary
    printf("\n--------------- Tax Summary ---------------\n");
    printf("Name       : %s", name);
    printf("Contact    : %s", contact);
    printf("Salary     : NRs. %.2f\n", salary);
    printf("Tax Payable: NRs. %.2f\n", tax);
    printf("-------------------------------------------\n");
    printf("Thank you for using the Income Tax Calculator!\n");
    printf("-------------------------------------------\n");

    // Save data to excel-compatible CSV file
    FILE *file = fopen("tax_records.csv", "a"); // Open file in append mode
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1; // Exit if file cannot be opened
    }

    // Write user data to the CSV file
    fprintf(file, "Name,Contact,Salary,Tax\n");
    fprintf(file, "%s,%s,%.2f,%.2f\n", name, contact, salary, tax);
    fclose(file); // Close the file

    // Notify user about the saved file
    printf("Your tax details have been saved to 'tax_records.csv'.\n"); 
    printf("You can open this file in Microsoft Excel or Google Sheets.\n");
    printf("Exiting the program. Goodbye!......\n");

    // Wait for user input before exiting
    printf("Press any key to exit...\n");
    getch(); // Wait for a key press
    return 0;

}
