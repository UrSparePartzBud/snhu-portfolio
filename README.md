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

## CS 250: Software Development Life Cycle (Agile/Scrum)
### Interpreting User Needs and User Stories
Interpreting user needs requires a software developer to look past basic feature requests and uncover the actual business problems that a client is trying to solve. Creating structured user stories is incredibly helpful because it shifts the focus away from rigid technical specifications and toward human centric goals. By framing requirements around a specific user persona, a desired action, and an explicit business value, the engineering team can easily understand the underlying purpose of the code they are writing. This practice prevents developers from over engineering unnecessary features, ensures that every sprint increment directly matches customer expectations, and keeps the entire project lifecycle aligned with real world value.

### Software Development Approach and Agile Processes
My approach to developing programs relies on building modular, predictable software components that can easily adapt to changing requirements without fracturing the core codebase architecture. Moving forward into my future development projects, I definitely hope to incorporate Agile practices like continuous backlog refinement, relative task sizing, and automated testing loops. Utilizing relative estimation techniques like T-Shirt Sizing ensures that complex backend data risks are identified and addressed by the collective team before any coding begins. Embracing these iterative processes eliminates the classic bottleneck of tracking project progress through hard calendar deadlines and replaces it with a realistic velocity metric that protects code stability.

### Being an Effective Team Member in Software Development
Being a good team member in modern software development means moving away from the isolated specialist mindset and actively embracing shared ownership of the entire product codebase. An effective engineer communicates transparently during daily standups, exposes technical blockers early, and treats peer reviews as opportunities for collaborative learning rather than personal criticism. True collaboration involves pairing directly across roles to integrate automated testing with functional features, ensuring that quality is built into the software from day one. By prioritizing team velocity and capacity over individual performance metrics, a developer directly helps eliminate single points of failure and supports a highly cohesive team environment.
