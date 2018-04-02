# CSE442
## INSTRUCTIONS TO PLAY GAME:
1) Download from the following Link:
https://drive.google.com/open?id=1oMwUY5UFpjM3et09Jr7d-PM2WczZpex0
2) Unzip the file
3) Click on the WindowsNoEditor folder and if there's another WindowsNoEditor folder inside of it then click on that too. Then click the ProjectEroica.Exe file to run the game
4) If Windows prompts you about security risks, then click more options on the bottom and choose run anyways
5) You can exit the game by alt tabbing and closing out the window.

## Additional folders for developers to install:
If you are collaborating on this project you must install the following folders:
Art Assets:
https://drive.google.com/open?id=1q1DhQQhDY0DEBBMZV1YEKMOoLsO1YHi5
This folder belongs under the Content Folder

Map Assets
https://drive.google.com/open?id=1_6uQIdRjhcEKIU8YQ-UZjwDeA9F9EZ5g
This folder belongs under the Content Folder as well

## Game Instructions:

Ground Attack: If you press Z while in idle you do a spinning ground attack that stuns your opponent

Dash: Double tap left or right

Dash Attack: If you press Z while dashing you do a Dash Attack that launches your enemy into the air with an upward strike.

Jump: Press up

Jump Attack: If you press Z while jumping, you can do short but quick jabs in the air

Walk: Press/Hold left or right

AI Activation:
The enemy AI is turned off by default. However, if you wish to fight the AI, press I to turn him on. Don't go up too high though or he won't be able to see you anymore!

Youtube Link:
https://www.youtube.com/watch?v=QKP8xhoARwE&app=desktop

Gitter:
Private Community:
[![Gitter](https://img.shields.io/gitter/room/DAVFoundation/DAV-Contributors.svg?style=flat-square)](https://gitter.im/442-Team-2/Lobby?utm_source=share-link&utm_medium=link&utm_campaign=share-link)

## Project Description:

Project Eroica will be a fast paced 2.5d fighting game that pits players in pvp matches against one another. The goal is simple, eliminate your opponent's health before he/she eliminates you. The unique part comes in the advanced technical tactics a player can perform that makes matches feel like a sport.

### MVP:

Collisions:  
Double sided platforms that you can jump onto and drop down from  
Characters/ stunned upon hit  

The following basic moveset:  
Walk  
Dash  
Jump  
Air Dash  
Dash Attack  
Ground Combo  
Jump Attack  

User interface with hp bar, mp bar, and damage display  
Character Skills that cost MP to activate  
Characters lose HP when hit  
Characters die when their HP goes to 0  
AI that can follow and fight the player (no platform navigation though)  

Sound Effects:  
Dashing  
Landing  
Attacking  
Getting Hit  

Particle Effects:  
Dashing  
Landing  

### Additional Functionality:
 
1)Advanced Moves:  
  Rocket Step: a dash diagonally upwards triggered by >(>^) or <(<^)  
  Shadow Step: diagonally dashing uppding and down by pressing (>^)(V>) or (<^)(<V) per shadow step  
	Jump Stab: quickly stabbing diagonally downards douring a jump, triggered by pressing down and Z simultaneously mid jump.  
2) Multiplayer <-- One man can only do so much :(  
3) AI that can navigate platforms    
4) AI that can perform multiple attacks   
5) Background Music  
6) Particle effect when you're hit  

## User Story:
I want to play the spiritual successor to Grand Chase's fast pace pvp game. This will be a 2d fighting game with 3d models in which a player is pitted against another player(which will be controlled by AI for now but if we can make it another person in the future via multiplayer we will try to do that). Each player has an automatically regenerating hp and mp bar. The player will use the arrow keys to move around, and the Z key to attack. Players can combine arrow key inputs and the Z key to create different moves.

## Team Roles:
### Yang:
programming Character Logic such as Character Attacks, reactions to attacks, movement, sounds, and AI. Basically I'm tasked withed bringing the character to life.

### Jie:
programming User Interfaces such as main menu.

### Xinyu:
Adding materials and programming maps for the game to run in.

## Code Reviews:

All Class/Component directly connected to the Character class such as Attacks, Weapons or Stats: Yang Xue

All User Interface Code: Jie Lin

All Map/Platform Code: Xinyu Chen
