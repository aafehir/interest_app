# interest_app

## Summarize the project and what problem it was solving.

The goal in this project was to create a compound interest calculator which takes the initial investment amount, monthly deposit amount, and number of years as parameters. The interest is compounded monthly. The user is prompted for the parameters and two tables are displayed. One table shows how the investment will grow overtime if no additional monthly deposits are made and the other takes the monthly deposits into consideration.

## What did you do particularly well?

The program works as intended and calculates interest accurately. It also nicely displays readable side by side tables for easy comparison.

## Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

The program checks that user input is valid, but if the input is invalid, the program exits. Using appropriate loops and catch clauses in addition to the throw clauses in the DisplayMenu class would allow for users to be prompted to re-enter valid input rather than exiting the program.

## Did you find writing any piece of this code challenging, and how did you overcome this? What tools and/or resources are you adding to your support network?

I had some initial difficulty with crafting appropriate formulas to display accurate results. But that was only because I was compunded the interest annually rather than monthly. The problem was easily corrected once I re-read the requirements and thought about it a little more. If I were to have problems with getting the code itself working I would first review previous similar tasks and see if I can figure it out on my own, and if not, post a query on Stackoverflow as I have done in the past for different projects.

## What skills from this project will be particularly transferable to other projects and/or course work?

Many skills gained in the course of this project are transferrable to future work. Breaking up work into appropriate classes and header files, formatting spacing for numbers and table elements, utilizing static variables and functions, working with user input, and throwing appropriate exception messages are all valuable skills that will undoubtedly be applicable to projects to come. 

## How did you make this program maintainable, readable, and adaptable?

In-line comments help with program maintainence. Following standard C++ naming conventions and utilizing whitespace makes the program readable. And breaking the code up into several distinct class and header files makes the program easily adaptable.
