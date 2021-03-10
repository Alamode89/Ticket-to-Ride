 > <!-- As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). -->
# Ticket to Ride Simulator
### Authors: 
* [Andre Amante](https://github.com/Alamode89) 
* [Ashley Kim](https://github.com/ashley-kim22) 
* [Liberty Locsin](https://github.com/libii)
 <!--
 > You will be forming a group of **THREE** students and working on an interesting project. A list of proposed project ideas that have been successful in previous quarters is given in the project specifications link on iLearn. You can select an idea from the list and decide which design patterns you will use to implement it. If you want to propose your own original idea, you will have to contact an instructor to discuss the project and obtain written permission before you submit your project proposal. Your project needs to implement two design patterns.The project work should be divided almost equally among team members and each member is expected to work on at least one design pattern (more than one partner may work on a pattern) and some of its test cases. You can of course help each other, but it needs to be clear who will be responsible for which patterns and for which features.
 
 > ## Expectations
 > * Incorporate **at least two** distinct design patterns. You need to include at least *one* design pattern that we will teach this session:
 >   * Composite, Strategy, Abstract Factory, Visitor, or Decorator
 > * All design patterns need to be linked together (it can't be two distinct projects)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group.
-->
## Project Description

 Board games are fun programs with a lot of interaction. One needs to deconstruct rules and apply computer science concepts and patterns. There is potential for many added features to add to aiding in user experience. Also, it’s pretty lonely during covid and it would be nice to play our favorite board games with other people.
 #### Languages and Technologies (This list may change over the course of the project)
* Languages: C++
* Tools: [SFML](https://www.sfml-dev.org/) - GUI Library

* What will be the input/output of your project?
    * Input: 
        * Game State
            * New Game
            * Continue Save Game
        * Player Move
            * Pick Color and add Player Details
            * Claiming Route
            * Picking Card
            * Picking a Ticket
 
    * Output: 
        * Game State - Possibly a Visual State of the Game using SFML
            * Points - For Each Player
            * Win and Loser at End Game
 ## Phase I
#### Design Patterns
* Composite - For the deck, there are two types of cards: a color card, and a wild card. With the wild card, the card can act as any other card and we can have it   inhererit from a general card class. Also, if we have more maps and more rules then the destination notes can inherit old rules with different methods per game mode. Problems we might encounter is any specific changes to game play based on map or mode needs to be systematically accounted for. I believe a composite pattern with it's heirarchical nature will allow us to do this easily. Since the game itself are pieces (which are objects), when the pieces need to behave differently it would be easier to have the mode change by implementing different virtual functions such as placing a route. This allows for better organization in the code base.

* Factory- The factory pattern provides allows to make object on runtime.  Due to the game having multiple objects such as cards, routes, and players for example, it can be hard switch between the map with different rule, card, routes, tickets and parts. By serparating the modes and calling it by function, it will lead to cleaner code as well as allow easier bug tracking in case there is an error somewhere. This pattern will allow for the board to act as a factory that polulates the correct maps, cards and rules to it based on the user picking the mode.

<!--
 > * This description should be in enough detail that the TA/instructor can determine the complexity of the project and if it is sufficient for the team members to complete in the time allotted. -->
 ## Phase II
**OMT Class Diagram Description:**

Game: Contains functions that decides the winner of the game as well as calculates score. Creates the Board using the Board class and Players using the Player class.

Board: Contains a player, two decks and a map. In the map is where we use our Decorator Pattern. The two decks inherit from the deck. This is better explained in the Composite Pattern section below. The board also can check the score of the players so everyone else can see each other’s score. A link to the rules of the game are also on the board.

Player: Can take their turn with 3 options: draw TrainCards, claim a route, or draw Tickets. The player also possesses a hand of cards and hand of tickets which are hidden. The player draws train cards from the trainRow or the TrainDeck. Also, the player can interface with the map to claim a route. After this, the player updates their score. Has train pieces that decrease in quantity whenever a player places/claims a route. When a player draws Tickets, they get 3 tickets in their hand and can remove 1-2 if they choose. If a player does not complete a ticket, they lose points at the end of the game.

**Factory Design Pattern:** The decorator design pattern (highlighted in red) is used in map selection to choose different maps to play on. 
Board: Acts as a factory to popular the deck, tickets, and map. Maps have different behaviors to each other as well. The map itself it rather big. So, it is a good idea to make it when the chooser choses the correct map.

Map: The abstract class that includes virtual functions like displayBoard() for the specific maps to use. Maps also can contain City objects.

USMap: This class includes a map of the United States, as well as the implementation of the virtual functions. 

NordricCountriesMap: This class includes a map of Nordic Countries, as well as the implementation of the virtual functions. This map had different cities and different routes so the drawMap(): function will be enabled differently. Also, the claimRoute() function is almost similar to the USMap class except we must add one more card for routes with tunnels. This data pattern seems appropriate because Nordic Countries Map is similar to USMap but with one extra rule.

**Composite Design Pattern:** The Composite Pattern (highlighted in green and blue) is utilized for the two draw decks, tickets and train cards.

Deck pattern is an abstract class that the TrainDeck and TicketDeck Inherits from
TrainDeck: The TrainDeck is a deck that contains TrainCard objects, which are dealt to the player. The cards are placed on the TrainRow, then dealt to the players at the beginning of the game. The ticket deck draws one card at a time for the player. Also, the player can shuffle the TrainDeck.
TicketDeck: The TicketDeck contains TrainCard objects which the players may choose to draw upon their turn. The players draw three cards at a time. Each ticket possesses two destinations and each card has its own point values. The players may choose to keep between one to all three of the cards they draw however, if they choose to only keep one of their cards the remaining cards are placed in the discard pile.



<!-- 
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA-->
## Class Diagram
<!--  Include a class diagram(s) for each design pattern and a description of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). -->
 Do not rely on graph image look at updated URL!: https://docs.google.com/drawings/d/1xwy_5ug9MwIFoDz2D0D283swFweGSGs6__eebdgE7TM/edit
![example class diagram](https://user-images.githubusercontent.com/57247550/110597267-293c4e80-8135-11eb-974a-0517b0a42732.png?raw=true)
<!--
## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
  -->
 ## Screenshots
 ![program screenshot 1](https://user-images.githubusercontent.com/57247550/110593571-98637400-8130-11eb-8004-d7b7f601444c.png?raw=true)
 ![program screenshot 2](https://user-images.githubusercontent.com/57247550/110593703-c2b53180-8130-11eb-803b-ff169b1adb5b.png?raw=true)
 ![program screenshot 3](https://user-images.githubusercontent.com/57247550/110593849-f1cba300-8130-11eb-8a24-99be0c363d9b.png?raw=true)
![program screenshot 4](https://user-images.githubusercontent.com/57247550/110593992-1de72400-8131-11eb-8fd1-a60a168b0c73.png?raw=true)
 ## Installation/Usage
 To install this program, open your local terminal and clone this repository recursively (`git clone --recursive <repository link>`)(the <> indicate the repository link). Once cloned, run `cmake3 .` to create the MakeFile, and then `make` to compile the code. To execute, run the command `./play` to run the program. Any changes to source code requires another "make" command to compile before running `./play`.
 ## Testing
 This project was tested using googletest as well as specific .cpp files. The file, test.cpp, would run all unit test files marked with .hpp by running `./test`. The .cpp files must be tested individually and are compiled by running `g++ -o exampleTest <filename>.cpp` and then running `./exampleTest` (the <> indicates the name of the .cpp that needs to be compiled and tested).

