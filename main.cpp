 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have 'unused parameter' warnings, you aren't using one of your function parameters in your implementation.
    Solution: use the parameter in your implementation.

    If you have 'shadows a field of <classname>' warnings, a local variable in the function has the same name as a class member.  
    This local variable could also be a function parameter with the same name as the class member.
    Solution: change the local variable's name so it is different from the class member variable's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 If your code produces -Wconversion warnings, do NOT use static_cast<> to solve the warnings.  
 Casting has not been covered yet.
 Change your code so that no warnings are produced WITHOUT using casting.
 This usually means you have to use identical types for all variables used in an expression that is producing that conversion warning.
 */

/*
paste your code below
*/
    struct Gym
    {
    //Thing 1) gym
    //5 properties: 
        //1) number of employees (int)
        int numEmployees = 12;
        //2) amount of treadmills (int)
        int numTreadmills = 10;
        //3) number of daily classes (int)
        int numDailyClasses = 16;
        //4) number of clients (int)
        int numClient = 116;
        //5) range of weights (int)
        int rangeOfWeight = 100; //I actually can't think of a way to represent this in one line. so the range is 100.
        struct Human
        {
            std::string humanName = "Jesse";
            bool isMale = true;
            int age = 35;
            int weightInLbs = 175;
            float mileRunTime = 6.57f;   

            bool checkValidMembershipStatus(bool isMember, bool paidCurrentMonth);
            int deadLift(int weightInLbs, int numReps);
            int benchPress(int weightInLbs, int numReps);
        };

        void personalTrainer(Human customer);
        Human strengthTraining;
    //3 things it can do:
        //1) charge customers
        float chargeCustomers(float discountedSalePrice);
        //2) burn calories
        float burnCalories();
        //3) build muscle
        void buildMuscle();
    };

    struct GroceryStore
    {
    //Thing 2) grocery store
    //5 properties:
        //1) amount of produce (float)
        float amountOfProduceInLbs = 813.4f;
        //2) number of registers (int)
        float numRegisters = 12;
        //3) number of carts (int)
        int numCart = 70;
        //4) number of employees (int)
        int numEmployees = 50;
        //5) number of doors (int)
        int numDoors = 4;
    //3 things it can do:
        //1) sell food
        float sellFood(float totalDailyFoodSales);
        //2) sell alcohol
        float sellAlcohol(float totalDailyAlcoholSales);
        //3) give free samples
        void giveFreeSamples();
    };

    struct CountyFair
    {
    //Thing 3) county fair
    //5 properties:
        //1) number of rides (int)
        int numRides = 16;
        //2) number of food vendors (int)
        int numFoodVendors = 14;
        //3) number of attendees (int)
        int numAttendees = 2000;
        //4) number of games (int)
        int numGames = 30;
        //5) location (std::string)
        std::string location = "Orange County Fairgrounds";
    //3 things it can do:
        //1) entertain a large group of people
        void entertainLargeGroup(int numAttendees, int numComplaints);
        //2) create memories
        void createMemories();
        //3) showcase uncommon animals
        void showcaseUncommonAnimals();
    };

    struct Arcade
    {
    //Thing 4) arcade
    //5 properties:
        //1) number of games (int)
        int numGames = 33;
        //2) number of credits paid per game (float)
        float numCreditsToPlayGame = 7.5f;
        //3) number of customers (int)
        int numCustomers = 90;
        //4) hours of operation (int)
        int hoursOfOperation = 800; //military opening time. I couldn't think of a way to represent open and closing times in one line
        //5) annual cost of wear and tear in USD (float)
        float annualCostOfWearAndTear = 7658.79f;
        struct Customer
        {
            int customerNumber = 1316425;
            bool customerisOver21 = true;
            std::string customerFavoriteGame = "Pac Man";
            int favoriteGameHighScore = 999999;
            float customerAvailableCredits = 652.5f;

            int playPacMan(int numGamesPlayedToday, int todaysHighScore);
            int playGalaga(int numGamesPlayedToday, int todaysHighScore);
            int playAirHockey(int numGamesWon, int numGamesLost);
        };    

        void competitiveGamerProfile(Customer customer);
        Customer newHighScore;

    //3 things it can do:
        //1) create hours of entertainment
        float TimeSpentGaming();
        //2) sell refreshments
        float sellRefreshments(float dailyFoodAndBeverageSales);
        //3) cause motion sickness
        void causeMotionSickness();
    };

    struct Keyboard
    {
    //Thing 5) keyboard
    //5 properties:
       //1) number of keys (int)
        int numKeys = 104;
       //2) depth of keys in millimeters (float)
        float depthOfKeysInMm = 1.09f;
       //3) width of keyboard in inches (float)
        float widthOfKeyboardInInches = 11.75f;
       //4) amount of noise made per key press in dB (float)
        float volumeOfKeyPressedInDb = 32.2f;
       //5) number of special keys (int)
        int numSpecialKeys = 13;
    //3 things it can do:
       //1) type letters
        void typeLetters();
       //2) raise computer volume
        float raiseVolumeAmountInDb(float volumeInDb);    
       //3) raise and dim the screen brightnes
        float changeScreenBrightness(float amtInNits);
    };

    struct TrackPad
    {
    //Thing 6) trackpad
    //5 properties:
       //1) number of buttons (int)
        int numButtons = 1;
       //2) width of trackpad (float)
        float widthOfTrackPadInInches = 3.9f;
       //3) sensitivity of trackpad (double)
        double trackPadSensitivityValue = 3.0089;
       //4) color of trackpad (std::string)
        std::string colorOfTrackpad = "Navy Blue";
       //5) number of available "gesures" (int)
        int numAvailableGestures = 7;
    //3 things it can do:
       //1) control computer navigation
        void controlComputerNavigation();
       //2) track physical movement when touched
        float trackPadChangeMousePosition(float x, float y);
       //3) scroll the screen 
        void scrollScreen();
    };

    struct ComputerScreen
    {
    //Thing 7) screen
    //5 properties:
       //1) available visible screen space in inches (float)
        float numAvailableScreenSpaceInInches = 13.6f;
       //2) amount of brightness in nits (float)
        float amtOfBrightnessInNits = 1400.5f;
       //3) width of screen (float)
        float widthOfLaptopScreenInInches = 11.97f; 
       //4) aspect ratio (float)
        float aspectRatio = 1.78f;
       //5) refresh rate in hz (int)
        int refreshRateInHz = 60;
    //3 things it can do:
       //1) display graphics
        void displayGraphics();
       //2) display text
        void displayText();
       //3) generate heat
        float generateHeat(float amtOfDegreesInFahrenheit);
    };

    struct ComputerCharger
    {
    //Thing 8) charger
    //5 properties:
       //1) name of input type (std::string)
        std::string magSafeCharger = "Mag Safe Charger";
       //2) speed of charging (float)
        float speedOfChargingInHours = 2.5f;
       //3) input voltage (float)
        float inputVoltageInVolts = 110.0f;
       //4) length of cord (float)
        float lengthOfChordInFeet = 5.5;
       //5) amount of wattage required to run (float)
        float amountOfWattage = 5.0f;
    //3 things it can do:
       //1) charge laptop
        float chargeLaptop(float energyConsumedInJoules);
       //2) charge phone
        float chargePhone(float energyConsumedInJoules);
       //3) explode
        void explode(float splOfExplosionInDb);
    };

    struct ExternalHardDrive
    {
    //Thing 9) external hard drive
    //5 properties:
       //1) amount of storage in gigabytes(int)
        int amountOfStorageInGb = 250;
       //2) speed of data transfer in Mb per sec (float)
        float speedOfDataTransferInMbps = 500.0f;
       //3) physical size of drive (float)
        float hardDrivePhysicalSize = 2.5f;
       //4) amount of voltage needed to run (float)
        float amtVoltageToRunHardDrive = 12.5;
       //5) number of partitions (int)
        int numPartitions = 3;
    //3 things it can do:
       //1) store data
        float storeData(int amountOfDataInGb);
       //2) transfer data
        float transferData(int amountOfDataInGb);
       //3) use energy
        float useEnergy(float energyConsumedInJoules);
    };

    struct Laptop
    {
    //Thing 10) laptop
    //5 properties:
       //1) keyboard
        Keyboard keyboard;
       //2) trackpad
        TrackPad trackpad;
       //3) screen
        ComputerScreen screen;
       //4) charger
        ComputerCharger charger;
       //5) external hard drive
        ExternalHardDrive externalHardDrive;
    //3 things it can do:
       //1) store data
        float storeDataInGb(float amountOfDataInGb);
       //2) run applications
        void runApplications();
       //3) connect to the internet
        void connectToInternet();
    };








int main()
{
    std::cout << "good to go!" << std::endl;
}
