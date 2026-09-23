# age_converter
C Program To Convert Your Age into Days, Hours and Minutes
# Age to Time Converter

A simple C program that takes your age in years and calculates approximately how many **days, hours, and minutes** you have lived.

## Features

* Takes age as input in years.
* Converts years into days.
* Converts days into hours.
* Converts hours into minutes.
* Displays all calculated values.

## How It Works

The program uses these conversions:

* `1 Year = 365 Days`
* `1 Day = 24 Hours`
* `1 Hour = 60 Minutes`

### Example

```text
Enter Your age: 20
You have lived 20 Years or 7300 Days or 175200 Hours or 10512000 Minutes
```

## Requirements

* C compiler
* Any C-supported IDE or text editor

## How to Run

Compile the program:

```bash
gcc main.c -o age_converter
```

Run it:

```bash
./age_converter
```

## Note

The calculation assumes every year has **365 days**, so leap years are
