## CS 210: Programming Languages (C++)
# Corner Grocer Item-Tracking Program

**Summarize the project and what problem it was solving.**
The Corner Grocer needs a way to analyze their daily produce sales so they can rearrange their store layout. This program solves that by reading a text file of the day's purchases, counting how many of each item was sold, and giving the user a menu to look up specific items, print a full list, or view a text-based histogram of the sales.

**What did you do particularly well?**
I did a good job organizing the code into separate files (the header file, the class file, and the main driver). I also used a C++ `std::map` to count the items, which made the logic a lot cleaner and more efficient than trying to build complicated loops with vectors.

**Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?**
I could enhance the code by allowing the user to type in the exact name of the input file they want to read, rather than having the file name hardcoded into the program. This would make the program more adaptable to handle multiple days or weeks of data without ever needing to touch the source code again.

**Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?**
The input validation for the user menu was the most challenging part. If the menu asks for a number and the user types a letter, C++ can easily crash or get stuck in an infinite loop. I overcame this by learning how to use `cin.clear()` and `cin.ignore()` to safely clear out the bad input. Websites like Stack Overflow and cplusplus.com have become a standard part of my support network for figuring out these quirks.

**What skills from this project will be particularly transferable to other projects or course work?**
Learning how to read from and write to external files (File I/O) is highly transferable, since almost every useful program or automation script needs to interact with data. Also, understanding how to structure Object-Oriented code into classes makes building larger projects much more manageable.

**How did you make this program maintainable, readable, and adaptable?**
I kept the `main()` function very clean by moving the heavy lifting into the `GroceryTracker` class. I also used descriptive variable names and added inline comments to explain what each block of code was doing, so that another developer (or myself in six months) could easily read and update the logic.


