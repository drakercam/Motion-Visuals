# Motion-Visuals

# Developing in: Linux
# Language: C++
# Libraries: SFML

# Project Purpose:
I want to create an interactable interface with menu buttons to show different forms of vector transformations, rotations, orbits. Mainly want to visualize motion equations (parametric and physics based), steering behaviours and transformations. I also want to use this as an opportunity to practice more on object oriented design principles.

# Player:
- The player is the object that is to have all these different forms of motion applied to.
- Represent as a CircleShape.
- Will have the Motion object acting upon the player.


# Controller:
- The controller will run the main loop
- Prompt the user for a selection of which type of motion they want (reuse menu code from previous project)
- Update the player based on the selected Motion
- Handle logic

# View:
- The view will handle displaying everything to the screen
- Drawing the player object
- Making any window updates
- Hold the window object
- Screen size and any logic regarding it


# Motion:
- The motion object will perform all motion actions on the player based on the user's input

# Whats been added?
- The window is up and going
- The controller works perfect
- Implemented parametric motion of player via user input (via commandline, will do GUI later on)
