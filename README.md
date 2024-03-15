 > Authors: \[Franklyn Lu](https://github.com/FranklynLu)\ \[William Chen](https://github.com/William-xc)\ \[Shiqi Zhou](https://github.com/JohnZ9865)\ \[Stanley Xiao](https://github.com/stanleyx027)\

## Project Name: Trenches of Fate: A WWI Story Adventure Game

## Project Description
> Our project, "Trenches of Fate," is a text-based story game set in the grim backdrop of World War I. Players take on the role of an ordinary British or Russian soldier, grappling with battle fatigue, who is compelled by their lieutenant to repeatedly conduct dangerous actions. The game unfolds as the player attempts to survive this harrowing ordeal, with every decision impacting the storyline. 

## Why is it important or interesting to you?
> "Trenches of Fate" draws inspiration from renowned WWI literature such as "All Quiet on the Western Front." The game offers an immersive experience, allowing players to explore the human side of war, make impactful decisions, and witness the consequences of their choices.

## What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
> The project will be developed using C++ and CMake. The game would be ran from the command line, with a storyline represented by a graph. Input and output will be managed through the terminal, providing a classic and straightforward interface for users to engage with the game. The game would be ran from the command line, with a storyline represented by a graph. Each plotpoint is represented by a node. An “at” pointer points to the current node/plotpoint the player is at. When the player arrives at a plotpoint, the terminal would print out what’s happening in the story, and which keys the user should press to make decisions on what his character should do. When the user makes a choice, the “current” pointer and move onto the corresponding plotpoint and the node in the graph. For example, the current plotpoint may be “your officer had ordered you to go over the top, but the machine gun fire had just show down the last person who did so. You can either press 1. Go over the top, or 2. Argue with with commander.” If a choice is made to go over the top,, the “at” pointer will move onto the node corresponding to the outcome of going over the top. 

## What will be the input/output of your project?
> The game would be ran from the command line, with a storyline represented by a graph. Input and output will be managed through the terminal, providing a classic and straightforward interface for users to engage with the game.

## What are the features that the project provides?
> The project is based off a story game where each decision made by the user changes the story in some way for different results. The user would be able to first choose character, weapon, rank, nationality, etc. The user will be able to choose between easy and hard mode, with the hard mode being harder to survive than easy mode. Through pressing certain keys as directed by the game, the user will be able to start the game and make choices throughout the game as they face decisions in the story line (which would look closer to a Directed Acylic Graph than an actual "line"). The story line would diverge depending on the decisions that had been taken. The character could be shot at, killed by shells, executed by his officer, or manage to survive for another day. An endgame screen would appear, announcing that the player had died. In addition, there's also an option to increase or decrease the difficulty, which would make the story easier or harder for the player to survive.
> Another backend feature that the project provides is the dynamic generation of the storyline from a text file: The text file will have each line be in the format of [prompttext] [eventtext] [linked events(0 indexed)], from which a storyline can be dynamically generated using a meticulously made string parser that parses individual lines and characters. This would allow for developers who're not familiar with the tech stack to easily change or update the storyline without having to know how the program itself works.

## Enforcement of solid principles
> Originally, we had the prinouts bundled with the event class. However, this was a violation of the SRP, and as a result we had to create a UI for each of the screen.


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
This screen would start with a general storyline. Depending on the difficulty, the player would be given a storyline and would have to make choices. 
The storyline can be modified through the textfile that's parsed in a specific format and way to create the full graph.



End game:
The end game screen would output the end game message. 


## Class Diagram
> Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from this template)
> Final version:
> <img width="600" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/477f62f1-1067-4345-b67b-6a9b5d202948">
> <br/>These are past versions, you can ignore them: <br/>
> ![image](https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/9c88684c-fbe9-40cd-9980-3f6b0676097b)
> ![image](https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/2a671e5e-b6a1-47f1-a0af-4d04b6807386)

> Character class: Character class is a struct. All the ask functions which requests user input for character attributes like "askName", "askNationality", etc, are called in the constructor of the character. 
> Graph class: Its a DAG that represents the storyline. It has a root member variable, which is a pointer which points to the start of the storyline, and a "curr" member variable, whihc is a pointer which points to the current Event in the story line. 
> The Event class: The event class stores the text of event, and options which is a vector of pointers which points to the next events that could occur based off user decisions. runEvent() is the most important, it will display the text of the event, alongside the prompt of what options you can pick. It is called by runCurrentEvent of the graph class, and returns an integer --- 0 meaning the game has ended, 1 means the game did not end. The runCurrentEvent itself is called inside the startGame() method of Game class, which runs on a while loop that continously runs the current event, takes in input, etc.
> Game Class: The game class contains the character and the storyline. To start a game, create the game object. The game object constructor will ask you for the difficulty of the game. Once that's done, startGame function can be called. The story line is hardcoded inside the "initializeStoryline" of the game class, with "initializeStoryline" called by the constructor. 
 

 
 ## Screenshots
> If you enter invalid input: <br />
> <img width="595" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/267a37b7-0cbd-445f-a12f-7f328a2f744d">
> <br /> If you enter spaces in invalid input: <br />
> <img width="563" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/64f50f89-0145-477e-99d2-787d55f849d1">
> <br /> When you repeatedly enter invalid input: <br />
> <img width="586" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/bd2482df-a52b-4b52-a96b-f23418f970de">
> <br /> The storyline: <br />
> <img width="711" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/4e03d19c-8ea0-4a59-8128-7c1cec6cead3">
> <br /> Dying:<br />
> <img width="564" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/18671297-b7da-4fff-8e55-4c040263ea3d">
> <br /> Taken POW: <br />
> <img width="700" alt="image" src="https://github.com/cs100/final-project-wchen308-flu018-szhou110-sxiao027/assets/64669569/3fbd5dd9-52c0-4b18-a660-8ac746ae6c5e"> <br />




 ## Installation/Usage
 > To run the application, run "cmake .", then "make", then "./rungame".
 ## Testing
 > For us, we had unit test for every single class, whether its the UIs, graph, event, game, or anything else. We aim for 100 percent code coverage on every single method, and 80 percent code coverage overall in the program in case that's not achievable. We tested using gtest in c++ with the help of cmake. To run testing, run "cmake .", "make", then "testrun", "test_eg", or whatever other tests you wanna run.
 
