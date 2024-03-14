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
> The project is based off a story game where each decision made by the user changes the story in some way for different results. The user would be able to first choose character, weapon, rank, nationality, etc. The user will be able to choose between easy and hard mode, with the hard mode being harder to survive than easy mode. Through pressing certain keys as directed by the game, the user will be able to start the game and make choices throughout the game as they face decisions in the story line (which would look closer to a Directed Acylic Graph than an actual "line"). The story line would diverge depending on the decisions that had been taken. The character could be shot at, killed by shells, executed by his officer, or manage to survive for another day. An endgame screen would appear, announcing that the player had died. In addition, there's also an option to increase or decrease the difficulty, which would make the story easier or harder for the player to survive.
> Another backend feature that the project provides is the dynamic generation of the storyline from a text file: The text file will have each line be in the format of [prompttext] [eventtext] [linked events(0 indexed)], from which a storyline can be dynamically generated using a meticulously made string parser that parses individual lines and characters. This would allow for developers who're not familiar with the tech stack to easily change or update the storyline without having to know how the program itself works.

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
> ![image](https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/154624762/06974205-8231-4413-a487-45468227ee30)

> The navigation diagram represent what a user could do when playing the game. It shows many interfaces the user can have as well.


### Screen Layouts
Home (Start) Menu:
Since our game is a terminal game, the Home/Start menu will show up in the terminal as a prompt, telling the player to start the game or to exit the game (press q to quit/exit, or press w to start). If the player press q, the expected output would be a message like “You have exited the game”. If the player press w, the expected output would either direct the user to character selection menu or the setting menu.

Setting Menu: 
The setting menu will allow the player to change difficulties. 

Character Selection Menu:
The player can either create a new character or select their saved character from before. After selecting which one (by entering an integer or a char), the player can play the game.

Storytelling:
This screen would start with a general storyline. Depending on the position/role from the character they have created, the player would have an unique storyline being outputted. The user enters a y or n when given an event to dictate what happens next in the game. 



End game:
The end game screen would output the end game message. 


## Class Diagram
> Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from this template)
> ![image](https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/9c88684c-fbe9-40cd-9980-3f6b0676097b)
> ![image](https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/2a671e5e-b6a1-47f1-a0af-4d04b6807386)

> Character class: Character class is a struct. All the ask functions which requests user input for character attributes like "askName", "askNationality", etc, are called in the constructor of the character. 
> Graph class: Its a DAG that represents the storyline. It has a root member variable, which is a pointer which points to the start of the storyline, and a "curr" member variable, whihc is a pointer which points to the current Event in the story line. 
> The Event class: The event class stores the text of event, and options which is a vector of pointers which points to the next events that could occur based off user decisions. runEvent() is the most important, it will display the text of the event, alongside the prompt of what options you can pick. It is called by runCurrentEvent of the graph class, and returns an integer --- 0 meaning the game has ended, 1 means the game did not end. The runCurrentEvent itself is called inside the startGame() method of Game class, which runs on a while loop that continously runs the current event, takes in input, etc.
> Game Class: The game class contains the character and the storyline. To start a game, create the game object. The game object constructor will ask you for the difficulty of the game. Once that's done, startGame function can be called. The story line is hardcoded inside the "initializeStoryline" of the game class, with "initializeStoryline" called by the constructor. 
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > <Add new uml diagram here>
 > The reason for all the changes: We had to basically create a whole new series of UI classes from scratch, because after talking to the professor, we realized that we needed to make our program abide by solid principles by separating the printing and taking in input, which was a part of our graph and event classes, to become their whole new own classes. In the past we were violating the solid principles of single responsibility principle by having the graph and event class be not only about the graph and event, but also about printing and taking in inputs.
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
> <img width="595" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/267a37b7-0cbd-445f-a12f-7f328a2f744d">
<img width="563" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/64f50f89-0145-477e-99d2-787d55f849d1">
<img width="534" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/533cd422-de0a-468f-9578-20651c7dadfa">
<img width="711" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/4e03d19c-8ea0-4a59-8128-7c1cec6cead3">
<img width="564" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/18671297-b7da-4fff-8e55-4c040263ea3d">
<img width="700" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/3fbd5dd9-52c0-4b18-a660-8ac746ae6c5e">




 ## Installation/Usage
 > To run the application, run "cmake .", then "make", then "./rungame".
 ## Testing
 > How was your project tested/validated? For us, we had unit test for every single class, whether its the UIs, graph, event, game, or anything else. We aim for 100 percent code coverage on every single method, and 80 percent code coverage overall in the program in case that's not achievable.
 
