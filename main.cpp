#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 void
bool char
 wide char
int float
 double
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type
    
    bool isBool = true;
    bool isGoat = false;
    bool isDog = true;

    char firstInitial = 'a';
    char middleInitial = 'b';
    char lastInitial = 'c';

    int numDogs = 1;
    int numArms = 2;
    int fartFrequency = 3;

    float volume = 0.8f;
    float level = 0.5f;
    float preDelay = 200.f;

    double balance = 2456.32;
    double value = 65.8;
    double x = 83462.421;
    
    ignoreUnused( number,
        isBool, isGoat, isDog, 
        firstInitial, middleInitial,lastInitial,
        numDogs, numArms, fartFrequency,
        volume, level, preDelay,
        balance, value, x); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void
}

/*
 1)
 */
bool readyForRefresh()
{
    return {};
}

/*
 2)
 */
bool identical(char a, char b = 'a')
{
    ignoreUnused(a, b);

    return {};
}

/*
 3)
 */
void drinkWater(int waterType = 1)
{
    ignoreUnused(waterType);
}

/*
 4)
 */
int mix(int firstIngredientID, int secondIngredientID)
{
    ignoreUnused(firstIngredientID, secondIngredientID);

    return {};
}

/*
 5)
 */
int getFirstDigit(float num)
{
    ignoreUnused(num);

    return {};
}

/*
 6)
 */
float slowDivide(float dividend, float divisor)
{
    ignoreUnused(dividend, divisor);

    return {};
}

/*
 7)
 */
void doSomething(char something = 'z')
{
    ignoreUnused(something);
}

/*
 8)
 */
void walkTurtle(float distanceInFeet)
{
    ignoreUnused(distanceInFeet);
}


/*
 9)
 */
void dash(float x = 0, float y = 0)
{
    ignoreUnused(x, y);
}
 

/*
 10)
 */
int getNumChocolateChips(int numCookies, int chipsPerCookie = 1)
{
    ignoreUnused(numCookies, chipsPerCookie);

    return {};
}
    
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto isReadyForRefresh = readyForRefresh();
    //2)
    auto isIdentical = identical('a', 'a');
    //3)
    drinkWater();
    //4)
    auto mixResult = mix(1, 5);
    //5)
    auto firstDigit = getFirstDigit(257.2f);
    //6)
    auto quotient = slowDivide(42.3f, 8.f);
    //7)    doSomething();
    //8)
    dash(10.f, 20.f);
    //9)
    walkTurtle(40.6f);
    //10)
    auto numChocolateChips = getNumChocolateChips(12, 10);    

    
    ignoreUnused(carRented, 
        numChocolateChips,
        isReadyForRefresh,
        isIdentical,
        mixResult,
        firstDigit,
        quotient);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
