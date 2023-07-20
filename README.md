# Sokoban
🕹️| Sokoban Game ( Puzzle game )

***Informations :***

The game is a reinterpretation of the famous game 倉庫番 ( Sokoban in Japanese ) from 1980.

*The aim is simple: you're in the shoes of a warehouse keeper, and you have to push crates to their designated locations.
But be careful not to block the crates between the walls of the labyrinth...
Once all the crates have been deposited, you've won !*

In this version, you can create your own levels by creating a `.txt` file for each level, placing '#'s to delimit the map (they represent the walls), crates by placing 'X's in the labyrinth, storage slots by placing 'O's and a player with a 'P'.
⚠️ Warning: if you place more crates than slots, the level is obviously unplayable.
You can also try out my levels in `levels/` or use them as inspiration to create your own.

***Notations :***

- The player ( You ) is represented by a 'P'.
- Boxes are represented by 'X'
- Boxes locations are represented by 'O'
- Walls are '#'.

***How to play ?***

```
$> make
```
```
$> ./my_sokoban [file containing the level] 
```
```
$> ./my_sokoban -h -> display usage and help page.
```
