# 🧾 Tax Calculator – Nepal (FY 2080/81)

👨‍💻 Developed by: **Nirmal Sanjel**  
🎓 Program: Bachelors in Computer Application (BCA)  
🏫 Semester: 2 (Regular)  
🏢 Campus: Jana Bhawana Campus, Chapagaun, Lalitpur  
🆔 Roll No: 16  
📞 Contact: 9848744321  
📍 Address: Dhapakhel-24, Lalitpur   
🧑 Gender: Male  

---

## 📌 Project Overview

This is a **C language-based Tax Calculator** for **unmarried individuals** in Nepal, based on the official **Income Tax Slabs for FY 2080/81** published by the Government of Nepal.  
It calculates the **annual income tax** according to a progressive tax system.

---

## 🛠️ Features

- 📥 Accepts user inputs:
  - Full Name  
  - Contact Number  
  - Annual Salary  
- 📊 Computes income tax using official progressive slabs
- 🧮 Uses modular functions for each tax calculation step

---

## 💰 Nepal Income Tax Slabs (Unmarried – FY 2080/81)

| Income Range (NRs)               | Tax Rate                          |
|----------------------------------|-----------------------------------|
| Up to 500,000                    | 1% (Social Security Tax only)     |
| Next 200,000 (500,001 – 700,000) | 10%                               |
| Next 300,000 (700,001 – 1,000,000)| 20%                              |
| Above 1,000,000                  | 30%                               |

> ⚠️ The first NRs. 500,000 is always taxed at **1% only**. Progressive rates apply on income beyond that.

---

## 🧪 Sample Input & Output

### Input (Terminal):

PS C:\Users\delln\OneDrive\Desktop\Project.C\output> cd 'c:\Users\delln\OneDrive\Desktop\Project.C\output'
PS C:\Users\delln\OneDrive\Desktop\Project.C\output> & .\'taxfile.exe'
Enter your full name: Nirmal SANJEL
Enter your contact number: 9848744321
Enter your annual salary (in NRs): 6070876

### Output (Terminal):
--------------- Tax Summary ---------------
Name       : Nirmal SANJEL
Contact    : 9848744321
Salary     : NRs. 6070876.00
Tax Payable: NRs. 1606262.75
-------------------------------------------
Thank you for using the Income Tax Calculator!
-------------------------------------------
Your tax details have been saved to 'tax_records.csv'.
You can open this file in Microsoft Excel or Google Sheets.
Exiting the program. Goodbye!......
