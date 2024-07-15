#include<iostream>
#include<fstream>
#include<math.h>
#include<windows.h>
using namespace std;
void data_into_file(string& data)
{
    ofstream outputFile("conversions.txt",ios::app);

    if(!outputFile.is_open())
    {
        cerr<<"Error opening file."<<endl;
        return;
    }
    outputFile<<data<<endl;

    outputFile.close();
}
class Design{
    char ch; int choices;
public:
    void Start_page();
    void Length_page();
    void Mass_page();
    void Volume_page();
    void Temperature_page();
    void retry();
};

class Converter{

public:
    int choice;
    long double value;
    virtual void convert()=0;
};
class Length_converter: public Converter,public Design
{
    public:
        void convert();
};

class Mass_converter: public Converter, public Design
{
    public:
    void convert();
};
class Volume_converter: public Converter, public Design
{
    public:
    void convert();

};
class Temperature_converter: public Converter, public Design
{
public:
    void convert();
};

int main()
{
    int choice;
    Design D1;
    Length_converter ob;
    Mass_converter ob1;
    Volume_converter ob2;
    Temperature_converter ob3;

    label1:
    system("cls");
    D1.Start_page();
    cin>>choice;
    switch(choice)
    {
      case 1:
          D1.Length_page();
          ob.convert();
        break;
    case 2:
        D1.Mass_page();
        ob1.convert();
        break;
    case 3:
        D1.Volume_page();
        ob2.convert();
        break;
    case 4:
        D1.Temperature_page();
        ob3.convert();
        break;
    case 5:

        break;
    default:
        D1.retry();
        goto label1;
        break;

    }
    return 0;



}
void Design::Start_page(){
    system("color 0A");
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|        WELCOME TO THE UNIT CONVERTER APP        |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  You can convert any unit to your desired unit  |"<<endl;
    cout<<"|        Select from the options below.           |"<<endl;
    cout<<"|     E.G.(Press 1 for Length Conversions)        |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"| 1. Length Conversion                            |"<<endl;
    cout<<"| 2. Mass Conversion                              |"<<endl;
    cout<<"| 3. Volume Conversion                            |"<<endl;
    cout<<"| 4. Temperature Conversion                       |"<<endl;
    cout<<"| 5. PRESS 5 TO SEE PREVIOUS CONVERSIONS          |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"| Select type of conversion: "<<endl;
    }
    void Design::Length_page()
    {
    system("cls");
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|                LENGTH CONVERSIONS               |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  You can convert any unit to your desired unit  |"<<endl;
    cout<<"|        Select from the options below.           |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"| 1. Meters to Kilometers                         |"<<endl;
    cout<<"| 2. Kilometers to Meters                         |"<<endl;
    cout<<"| 3. Centimeters to Meters                        |"<<endl;
    cout<<"| 4. Meters to Centimeters                        |"<<endl;
    cout<<"| 5. Millimeters to Meters                        |"<<endl;
    cout<<"| 6. Meters to Millimeters                        |"<<endl;
    cout<<"| 7. Inches to Centimeters                        |"<<endl;
    cout<<"| 8. Centimeters to inches                        |"<<endl;
    cout<<"| 9. Feet to Meters                               |"<<endl;
    cout<<"|10. Meters to Feet                               |"<<endl;
    cout<<"|11. Yards to Meters                              |"<<endl;
    cout<<"|12. Meters to Yards                              |"<<endl;
    cout<<"|13. Miles to Kilometers                          |"<<endl;
    cout<<"|14. Kilometers to Miles                          |"<<endl;
    cout<<"|15. Nautical Miles to Kilometers                 |"<<endl;
    cout<<"|16. Kilometers to Nautical Miles                 |"<<endl;
    cout<<"|17. Light Years to Kilometers                    |"<<endl;
    cout<<"|18. Kilometers to Light years                    |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    }
    void Design:: Mass_page()
    {
    system("cls");
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|                 MASS CONVERSIONS                |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  You can convert any unit to your desired unit  |"<<endl;
    cout<<"|        Select from the options below.           |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"| 1  Grams to Kilograms                           |"<<endl;
    cout<<"| 2. Kilograms to Grams                           |"<<endl;
    cout<<"| 3. Milligrams to Grams                          |"<<endl;
    cout<<"| 4. Grams to Milligrams                          |"<<endl;
    cout<<"| 5. Micrograms to Milligram                      |"<<endl;
    cout<<"| 6. Milligrams to Micrograms                     |"<<endl;
    cout<<"| 7. Ounces to Grams                              |"<<endl;
    cout<<"| 8. Grams to Ounces                              |"<<endl;
    cout<<"| 9. Pounds to Kilograms                          |"<<endl;
    cout<<"|10. Kilograms to Pounds                          |"<<endl;
    cout<<"|11. Tons to Kilograms                            |"<<endl;
    cout<<"|12. Kilograms to Tons                            |"<<endl;
    cout<<"|13. Grains to Grams                              |"<<endl;
    cout<<"|14. Grams to Grains                              |"<<endl;
    cout<<"|15. Stone to Kilograms                           |"<<endl;
    cout<<"|16. Kilograms to Stones                          |"<<endl;
    cout<<"|17. Carats to Grams                              |"<<endl;
    cout<<"|18. Grams to Carats                              |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|Enter your choice: ";
    }
    void Design:: Volume_page()
    {
    system("cls");
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|                VOLUME CONVERSIONS               |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  You can convert any unit to your desired unit  |"<<endl;
    cout<<"|        Select from the options below.           |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"| 1  Liters to Milliliters                        |"<<endl;
    cout<<"| 2. Milliliters to Liter                         |"<<endl;
    cout<<"| 3. Cubic Centimeters to Milliliters             |"<<endl;
    cout<<"| 4. Milliliters to Cubic Centimeters             |"<<endl;
    cout<<"| 5. Cubic Meters to Liters                       |"<<endl;
    cout<<"| 6. Liters to Cubic Meters                       |"<<endl;
    cout<<"| 7. Cubic Inches to Milliliters                  |"<<endl;
    cout<<"| 8. Milliliters to Cubic Inches                  |"<<endl;
    cout<<"| 9. Cubic Feet to Liters                         |"<<endl;
    cout<<"|10. Liters to Cubic Feet                         |"<<endl;
    cout<<"|11. Gallons to Liters                            |"<<endl;
    cout<<"|12. Liters to Gallons                            |"<<endl;
    cout<<"|13. Fluid Ounces to Milliliters                  |"<<endl;
    cout<<"|14. Milliliters to Fluid Ounces                  |"<<endl;
    cout<<"|15. Pints to Liters                              |"<<endl;
    cout<<"|16. Liters to Pints                              |"<<endl;
    cout<<"|17. Quarts to Liters                             |"<<endl;
    cout<<"|18. Liters to Quarts                             |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|Enter your choice: ";
    }
    void Design::Temperature_page()
    {
    system("cls");
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|             TEMPERATURE CONVERSIONS             |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  You can convert any unit to your desired unit  |"<<endl;
    cout<<"|        Select from the options below.           |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"| 1  Celsius to Fahrenheit                        |"<<endl;
    cout<<"| 2. Fahrenheit to Celsius                        |"<<endl;
    cout<<"| 3. Celsius to Kelvin                            |"<<endl;
    cout<<"| 4. Kelvin to Celsius                            |"<<endl;
    cout<<"| 5. Fahrenheit to Kelvin                         |"<<endl;
    cout<<"| 6. Kelvin to Fahrenheit                         |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|Enter your choice: ";
    }
    void Design::retry()
{
    system("cls");
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"| YOU ENTERED AN INVALID KEY..............        |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"| PLEASE ENTER ANY KEY TO GO BACK.........        |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"| OR ENTER 0 KEY TO EXIT THE APP..........        |"<<endl;
    cout<<"|-------------------------------------------------|"<<endl;
    cin>>ch;
    if(ch=='0')
    {
        exit(0);
    }else{
       system("cls");
       Sleep(1000);
       Start_page();
    }
}
void Length_converter::convert()
    {
    cin>>choice;
    system("cls");
    switch(choice)
    {
    case 1:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN METERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" METER = "<<value/1000<<" KILOMETER |"<<endl;
    break;
        }

        case 2:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN KILOMETERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" KILOMETER = "<<value*1000<<" METER |"<<endl;
    break;
        }

        case 3:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN CENTIMETERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" CENTIMETER = "<<value/100<<" METER |"<<endl;

    break;
        }

        case 4:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN METERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" METER = "<<value*100<<" CENTIMETERS|"<<endl;

    break;
        }

        case 5:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN MILLIMETERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" MILLIMETER = "<<value/1000<<" METER|"<<endl;
    break;
        }

        case 6:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN METERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" METER = "<<value*1000<<" MILLIMETER|"<<endl;
    break;
        }

        case 7:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN INCHES: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" INCH = "<<value*2.54<<" CENTIMETER  |"<<endl;

    break;
        }

        case 8:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN CENTIMETERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" CNTIMETER = "<<value/2.54<<" INCH |"<<endl;

    break;
        }

         case 9:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN FEETS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" FEET = "<<value*0.3048<<" METER |"<<endl;
    break;
        }

        case 10:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN METERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" METER = "<<value*3.2808<<" FEET |"<<endl;
    break;
        }

        case 11:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN YARDS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" YARD = "<<value*0.9144<<" METER |"<<endl;

    break;
        }

        case 12:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN METERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" METER = "<<value*1.0936<<" YARDS |"<<endl;

    break;
        }

        case 13:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN MILES: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" MILE = "<<value*1.6093<<" KILOMETER|"<<endl;
    break;
        }

        case 14:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN KILOMETERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" KILOMETER = "<<value*0.6214<<" MILE |"<<endl;
    break;
        }

        case 15:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN NAUTICAL MILES: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" NAUTICAL MILE = "<<value*1.852<<" KILOMETER |"<<endl;

    break;
        }

        case 16:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN KILOMETERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" KILOMETER = "<<value*0.5396<<" NAUTICAL MILE |"<<endl;

    break;
        }

        case 17:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN LIGHT YEARS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" LIGHTYEAR = "<<value*(9.461*(pow(10,12)))<<" KILOMETER |"<<endl;

    break;
        }

        case 18:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN KILOMETERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" KILOMETER = "<<value*(1.057*(pow(10,-13)))<<" LIGHT YEAR |"<<endl;

    break;
        }
        default:
            retry();
            break;

    }
    }
void Temperature_converter::convert()
{
    cin>>choice;
    system("cls");
    switch(choice)
    {
    case 1:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE TEMPERATURE IN CELSIUS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" DEGREE CELSIUS = "<<(value*(9.0/5.0))+32.0<<" DEGREE FAHRENHEIT |"<<endl;
    break;
        }

        case 2:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE TEMPERATURE IN FAHRENHEIT: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" DEGREE FAHRENHEIT = "<<(value-32.0)*(5.0/9.0)<<" DEGRE CELSIUS |"<<endl;
    break;
        }

        case 3:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE TEMPERATURE IN CELSIUS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" CELSIUS = "<<value+273.15<<" KELVIN |"<<endl;

    break;
        }

        case 4:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE TEMPATATURE IN KELVIN: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" KELVIN = "<<value-273.15<<" CELSIUS|"<<endl;

    break;
        }

        case 5:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE TEMPERATURE IN FAHRENHEIT: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" FAHRENHEIT = "<<(value+456.67)*(5.0/9.0)<<" KELVIN|"<<endl;
    break;
        }

        case 6:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE TEMPERATURE IN KELVIN: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" KELVIN = "<<(value*(9.0/5.0))-459.67<<" FAHRENHEIT|"<<endl;
    break;
        }
    }

}
void Volume_converter::convert()
{
    cin>>choice;
    system("cls");
    switch(choice)
    {
    case 1:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN LITERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" LITER = "<<value*1000<<" MILLILITER |"<<endl;
    break;
        }

        case 2:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN MILLILITERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" MILLILITER = "<<value*0.001<<" LITER |"<<endl;
    break;
        }

        case 3:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN CUBIC CENTIMETERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" CUBIC CENTIMETER = "<<value<<" MILLILITER |"<<endl;

    break;
        }

        case 4:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN MILLILITERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" MILLILITER = "<<value<<" CUBIC CENTIMETER|"<<endl;

    break;
        }

        case 5:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN CUBIC CENTIMETERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" CUBIC CENTIMETER = "<<value*1000<<" LITER|"<<endl;
    break;
        }

        case 6:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN LITERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" LITER = "<<value*0.001<<" CUBIC CENTIMETER|"<<endl;
    break;
        }

        case 7:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN CUBIC INCHES: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" CUBIC INCH = "<<value*16.3871<<" MILLILITER  |"<<endl;

    break;
        }

        case 8:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN MILLILITERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" MILLILITER = "<<value*0.0610<<" CUBIC INCH |"<<endl;

    break;
        }

         case 9:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN CUBIC FEET: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" CUBIC FEET = "<<value*28.3168<<" LITER |"<<endl;
    break;
        }

        case 10:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN LITERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" LITER = "<<value*0.0353<<" CUBIC FEET |"<<endl;
    break;
        }

        case 11:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN GALLONS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" GALLON = "<<value*3.7854<<" LITER |"<<endl;

    break;
        }

        case 12:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN LITERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" LITER = "<<value*0.2642<<" GALLON |"<<endl;

    break;
        }

        case 13:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN FLUID OUNCES: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" FLUID OUNCES = "<<value*29.5735<<" MILLILITER|"<<endl;
    break;
        }

        case 14:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN MILLILITERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" MILLILITER = "<<value*0.0338<<" FLUID OUNCES |"<<endl;
    break;
        }

        case 15:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN PINTS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" PINT = "<<value*0.4732<<" LITER |"<<endl;

    break;
        }

        case 16:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN LITERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" LITER = "<<value*2.1134<<" PINT |"<<endl;

    break;
        }

        case 17:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN LIGHT QUARTS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" QUART = "<<value*0.9464<<" LITER |"<<endl;

    break;
        }

        case 18:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN LITERS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" LITER = "<<value*1.0567<<" QUART |"<<endl;

    break;
        }

    }
}

void Mass_converter::convert()
{
    cin>>choice;
    system("cls");
    switch(choice)
    {
    case 1:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN GRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" GRAM = "<<value*0.001<<" KILOGRAM |"<<endl;
    break;
        }

        case 2:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN KILOGRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" KILOGRAM = "<<value*1000<<" GRAM |"<<endl;
    break;
        }

        case 3:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN MILLIGRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" MILLIGRAM = "<<value*0.001<<" GRAM |"<<endl;

    break;
        }

        case 4:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN GRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" GRAM = "<<value*1000<<" MILLIGRAM|"<<endl;

    break;
        }

        case 5:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN MICROGRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" MICROGRAM = "<<value*0.001<<" MILLIGRAM|"<<endl;
    break;
        }

        case 6:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN MILLIGRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" MILLIGRAM = "<<value*1000<<" MICROGRAM|"<<endl;
    break;
        }

        case 7:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN OUNCES: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" OUNCE = "<<value*28.3495<<" GRAM  |"<<endl;

    break;
        }

        case 8:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN GRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" GRAM = "<<value*0.0353<<" OUNCES |"<<endl;

    break;
        }

         case 9:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN POUNDS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" POUND = "<<value*0.4536<<" KILOGRAM |"<<endl;
    break;
        }

        case 10:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN KILOGRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" KILOGRAM = "<<value*2.2046<<" POUND |"<<endl;
    break;
        }

        case 11:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN TONS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" TON = "<<value*1000<<" KILOGRAM |"<<endl;

    break;
        }

        case 12:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN KILOGRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" KILOGRAM = "<<value*0.001<<" TON |"<<endl;

    break;
        }

        case 13:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN GRAINS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" GRAIN = "<<value*0.0648<<" GRAM|"<<endl;
    break;
        }

        case 14:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN GRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" GRAM = "<<value*15.4324<<" GRAIN |"<<endl;
    break;
        }

        case 15:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN STONE: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" STONE = "<<value*6.3503<<" KILOGRAMS |"<<endl;

    break;
        }

        case 16:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN KILOGRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" KILOGRAM = "<<value*0.1575<<" STONE |"<<endl;

    break;
        }

        case 17:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN CARATS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" CARAT = "<<value*0.2<<" GRAM |"<<endl;

    break;
        }

        case 18:
        {
    cout<<"|-------------------------------------------------|-"<<endl;
    cout<<"|  ENTER THE VALUE IN GRAMS: "; cin>>value;
    cout<<"|-------------------------------------------------|"<<endl;
    cout<<"|  "<<value<<" GRAM = "<<value*5<<" CARAT |"<<endl;

    break;
        }

    }
}







