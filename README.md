 > Authors: \[Franklyn Lu](https://github.com/FranklynLu)\ \[William Chen](https://github.com/William-xc)\ \[Shiqi Zhou](https://github.com/JohnZ9865)\ \[Stanley Xiao](https://github.com/stanleyx027)\

## Project Name: Trenches of Fate: A WWI Story Adventure Game

## Project Description
> Our project, "Trenches of Fate," is a text-based story game set in the grim backdrop of World War I. Players take on the role of an ordinary German soldier, grappling with battle fatigue, who is compelled by their lieutenant to charge over the top and navigate the treacherous French trenches. The game unfolds as the player attempts to survive this harrowing ordeal, with every decision impacting the storyline.

## Why is it important or interesting to you?
> "Trenches of Fate" draws inspiration from renowned WWI literature such as "All Quiet on the Western Front." The game offers an immersive experience, allowing players to explore the human side of war, make impactful decisions, and witness the consequences of their choices.


## What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
> The project will be developed using C++ and CMake. The game would be ran from the command line, with a storyline represented by a graph. Input and output will be managed through the terminal, providing a classic and straightforward interface for users to engage with the game. The game would be ran from the command line, with a storyline represented by a graph. Each plotpoint is represented by a node. An “at” pointer points to the current node/plotpoint the player is at. When the player arrives at a plotpoint, the terminal would print out what’s happening in the story, and which keys the user should press to make decisions on what his character should do. When the user makes a choice, the “current” pointer and move onto the corresponding plotpoint and the node in the graph. For example, the current plotpoint may be “your officer had ordered you to go over the top, but the machine gun fire had just show down the last person who did so. You can either press 1. Go over the top, or 2. Argue with with commander.” If a choice is made to go over the top,, the “at” pointer will move onto the node corresponding to the outcome of going over the top. 

## What will be the input/output of your project?
> The game would be ran from the command line, with a storyline represented by a graph. Input and output will be managed through the terminal, providing a classic and straightforward interface for users to engage with the game.

## What are the features that the project provides?
> The project is based off a story game where each decision made by the user changes the story in some way for different results. Through entering certain keywords as directed by the game, the user will be able to start the game and make choices throughout the game. Additionally, as players progress, a leveling system with clout will influence how the character is treated within the storyline. The character's clout will dynamically impact interactions and events. 

 > ## Phase II
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column (aka Sprint Backlog).
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. Both time slots should be during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

### Navigation Diagram
> Draw a diagram illustrating how the user can navigate from one screen to another. Here is an [example](https://creately.com/diagram/example/ikfqudv82/user-navigation-diagram-classic?r=v). It can be useful to label each symbol that represents a screen so that you can reference the screens in the next section or the rest of the document if necessary. Give a brief description of what the diagram represents.

### Screen Layouts
> Include the layout of each of your screens. The layout should describe the screen’s major components such as menus and prompts for user inputs and expected output, or any graphical user interface components if applicable (e.g. buttons, text boxes, etc). Explain what is on the layout, and the purpose of each menu item, button, etc. If many screens share the same layout, start by describing the general layout and then list the screens that will be using that layout and the differences between each of them.

## Class Diagram
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
