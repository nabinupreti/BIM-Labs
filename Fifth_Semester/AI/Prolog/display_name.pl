% Define a fact with your name
name("Nabin").

% Rule to display the name
display_name :- 
    name(N), 
    write("My name is: "), 
    write(N), 
    nl.


