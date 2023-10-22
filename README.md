# CS-210 Project 3
Project 3 of CS-210 was to create an item-tracking program for a company Corner Grocer utilizing C++. The program had 4 requirements"
  1. Prompt the user to input a specific item and produce the number representing the number of times the item was purchased in a day
  2. Produce a full list of items purchased that day along with the number of times each item was purchased.
  3. Produce the full list of items purchased along with a text-based histogram (I used the # symbol) representing the amount purchased.
  4. The option for the user to exit the program

What did you do particularly well?

I feel that I organized my code well, making sure the ItemTracker class and the main program were clearly sectioned. I wanted my code to be easy to read and easily maintainable. I made sure to use meaningful and variable names such as 'groceryItem' and 'userInput' which are clear and informative in order to boost the readability. Another thing I made sure to do was add comments all throughout the code. My goal with this was to ensure that anybody reading my code (even my future self) understands what is being conveyed and the purpose of each section. My implementation of a try-catch block was helpful in handling any potential input errors and ensuring the program didn't crash unexpectedly. I also believe my outputs had good clarity. My code produced concise and informative output, making it easy for someone to interact with the program. 

Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

I believe I could have probably improved the efficiency of my loops. However, I wanted them to be simple as improving efficiency can reduce user readability. I also believe I could have improved the user input validation. Adding additional input validation could've helped my program handle incorrect input more gracefully, for example, when searching for a specific grocery item, the input must begin with a capital letter, as typing out the item fully in lowercase did not return any results. Another issue I noticed with that, was typing the item in its plural form (ex: Bananas instead of Banana). 

Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

At first, I struggled to implement a map into my code. I had a bit of trouble learning the concept through the textbook and had to watch a few YouTube tutorials before I gained a better grasp. I understand that learning how to use these will be essential in my future as a programmer, and C++ thankfully being older than I am, has plenty of resources online with great examples, and I plan to continue practicing honing my skills.

What skills from this project will be particularly transferable to other projects or coursework?

The problem-solving aspect of this will be very helpful in the future. Thinking about how to break down a problem one step at a time, to understand what I want to do before attempting to bring it to fruition is something I still struggle with, as I normally attempt to dive right in. I believe following the best coding practices will also carry over regardless of the coding language, as I reinforced the idea of modularity, constant testing, and leaving clear comments all over my work. 

How did you make this program maintainable, readable, and adaptable?

Dividing my code into a class structure with defined functions for various purposes helps to maintain readability and maintenance. If at any point in the future, I need to alter or extend the program's functionality, I can focus on specific methods without affecting the rest of the code. Using clear and concise function and variable names, understanding the purpose of each component is much quicker. The included comments also increase readability as previously mentioned. Usage of the map for item tracking allows for easy adaptability because the addition or removal of items from the map can be done fairly easily with minimal changes in the code. 
