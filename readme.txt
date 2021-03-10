NES Screen Tool by Shiru



This Windows tool allows to edit NES nametables, tilemaps, attributes,
palettes, pattern graphics, and metasprites. Unlike most of similar
programs, it is targeted to creating of content for new homebrew projects
rather than editing existing games, although some of functionality of this
kind is also present.

The program and its source code are released into the Public Domain,
you can do whatever you want with it. The source code is for
Borland Turbo C++ Explorer (C++ Builder).



Tileset editor

LMB   - set tile as current
LMBx2 - open the tile in the CHR editor

Shift+LMB - select a rectangular group of tiles
Ctrl+LMB  - select random set of tiles
RMB       - cancel selection

Ctrl+Z   - undo
Ctrl+X   - cut tile graphics
Ctrl+C   - copy tile graphics
Ctrl+V   - paste tile graphics

When you copy random set of tiles, they will be pasted as a linear sequence.
When you copy rectangular group of tiles, they will be pasted as a rectangle
as well.

Only half of 8K CHR memory is visible at a time, you can switch between the
halfs using 'A' and 'B' buttons under the tileset.

You can drag and drop tiles in the tileset using right mouse button.
This will also update nametable indexes, so no visible changes will be
done, just two tiles in the tileset will get exchanged. This allows to
rearrange order of tiles easily.

'Apply tiles' button allows to change tile numbers in the nametable. You can't
draw anything in the nametable when this button is not pressed down.

'Attr checker' button allows to check nametable attributes with a special
checker tile. Warning, you still can draw tiles in this mode.

'Selected only' button disabled display for any tiles except the ones currently
selected in the tileset (one or a few). It helps to visually see location and
amount of the tile entries in the nametable.

'Type in' button allows to enter a sequence of tiles into the nametable at
given position (click to set) either by clicking tiles in the tileset, or
using keyboard. In this case tileset should contain a font with ASCII encoding,
with space being tile 0.

'Grid All', '1x', '2x', '4x' buttons controls grid displaying. There are grids
of three sizes that could be used at once or in any combination.



Palette editor

LMB selects current color and palette, or assigns a color to the current color
in the current palette. RMB allows to drag and drop colors between the main
palette or BG palettes.

The mouse wheel can also be used to cycle through the palettes if the main
program window has focus.

'Apply palettes' button enables applying current palette to the nametable.

'R0','G0','B0','M0' buttons controls the color emphasis bits that alters the
palette.

'A','B','C','D' buttons is four palette slots. You can load up to four palettes
and switch between them at any time. Please be aware that Palette Save/Load
only works for active palette. The slots needed for better convinience when
a few palettes needs to be designed to be used with the same graphics.

When Num Lock is off, you can use Numpad keys to switch between sub-palletes
(1 and 3), sub-palette entries (7 and 9), and change current color (8,4,6,2).



Nametable editor

Select nametable tab to enter the nametable editor.

You can draw nametable with a single tile when a single tile in the CHR is
selected, or with a brush when a rectangular or random group of tiles in
the CHR is selected.

Nametable can have the standard 32x30 size, or be any size from 4x4 to 4096x4096
tiles. It is called map then, and saved as *.map file.

LMB - set current tile or CHR selection into nametable
RMB - set the tile from the nametable as current, cancel nametable selection

Cursor, Shift+Cursor - scroll through a large nametable

Shift+LMB  - select an area of the nametable, Cursor still navigates through map
Alt+Cursor - move current selection around
Caps Lock  - switch between selection and drawing mode

Ctrl+Cursor       - rotate nametable without attributes with wrap around
Ctrl+Shift+Cursor - rotate nametable with attributes (2 chars per step)

Ctrl+F - fill selection with current tile
A      - enable/disable the attribute checker tile

Ctrl+Z - undo
Ctrl+X - cut selection
Ctrl+C - copy selecton
Ctrl+V - paste selection

Shift+C - copy selection into the Windows clipboard as text
Shift+M - copy selection as a metasprite into the Windows clipboard
Shift+N - copy selection as a flipped metasprite into the Windows clipboard

Ctrl + [ ] - change between nametable files that is named as xxx_NNN.nam
(000..999) as a very crude nametable animation system.



Metasprite editor

Select Metasprites tab to enter the metasprites editor.

You can drag and drop tiles from the tileset to metasprite editor using
right mouse button. You can move sprites around in the editor using RMB
or Cursor keys. To select a sprite you either can click it in the editor
with LMB, or in the list. When a sprite is selected, you can change tile
or palette assigned to it by clicking on the tileset or the palettes with
LMB.

You can change the origin of coordinates by clicking LMB+Ctrl in the
metasprite editor area. All sprite coordinates will be recalculated.
This is useful when you need to have origin at the bottom of metasprites,
for example.

You can edit up to 256 metasprites at once, up to 64 sprites per
metasprite.

'<' and '>' buttons selects a metasprite.

'Clear' button clears current metasprite.

'Copy' button copy current metasprite into internal clipboard.

'Paste' button paste content of the internal clipboard into current metasprite.

'HFlip' and 'VFlip' buttons flips current metasprite horizontally or vertically
relatively to the origin of coordinates.

'All', 'Sel', 'None' buttons allow to select which sprite will have a
frame displayed around it in the editor, all sprites, only selected one,
or none.

'Snap' button enables snap to the 8x8 grid when you move sprites around
with the mouse or the Cursor keys.

'Up' and 'Down' buttons move a sprite up or down in the list.

'H' and 'V' buttons toggle horizontal and vertical flip bits for
selected sprite(s), a group gets mirrored around its center.

'Del' deletes selected sprite from the list.

'Dup' creates a copy of selected sprites and selects added part, so it can be
manipulated further by functions such as moving or flipping.

'All' and 'None' buttons select all or none sprites in the list.


[ ] - select previous and next metasprite, these keys also work while
nametable editor is active.



Main menu


All

 Open

  Load and save tileset, nametable or map, and palette of the same name at once.

 
 Save

  Save tileset, nametable or map, and palette. Names will be asked for every file.

  
 Load session

  Load previously saved state of the editor.

  
 Save session

  Save current state of the editor, including all the resources, selections,
  internal clipboard, undo, and settings. It could be used when you need to
  save your work to continue later. Warning: do not use sessions to store
  your work permanently! It only guaranteed to work within a version of the
  tool, and may not be loaded correctly between different versions.


  
Patterns

 Open CHR

  Load CHR file with size of 1K, 2K, 4K, 8K, or other size of multiple of 16.
  4K files always replace current tileset, smaller files loads to the current
  tile position.

  
 Save CHR

  Save CHR file of the latest opened/saver size, as a set of one of the
  standard sizes, like in the open function, or as an arbitarily sized
  selection.

  
 Find duplicates

  Find and select fully duplicated tiles in the tileset.

  
 Remove duplicates

  Find and remove duplicate tiles. You can select an area in the tileset before
  using this function in order to exclude the area from the process. This way
  you can optimize the tileset without changing the selected area and keeping
  tiles in the area in place.

  
 Find unused
 
  Find and select unused tiles in the tileset.
  
  
 Remove unused
 
  Find and remove unused tiles, works similar to Remove doubles.
 
 
 8x16 interleave
 8x16 deinterleave

  Interleave and deinterleave tiles in the tileset to simplify work with 8x16
  sprites. Draw them as two tiles one above other, then use interleave function
  of Patterns menu to rearrange the tiles in the order required by NES hardware
  (top become left, bottom become right). Use deinterleave function if you need
  to rearrange the tiles back. Be careful, this function changes actual
  arrangement of the tiles, not just their appearance.

  
 Swap colors

  Swap colors in the graphics and/or in the palette. Shows a dialog with
  settings, you can swap the colors of whole tileset, in a bank, or in a
  selection. It is possible to set the swap in a way that shifts the colors
  to the left or right, making graphics darker or brighter, given the pallete
  has a brightness gradient. There is presets for these kinds of swap.

  
 Swap banks

  Swap 4K parts (banks A and B) of the tileset.

 
 Clear

  Clear tileset.

  
 Fill with numbers

  You can fill the tileset with graphics of tile numbers (00..FF) instead of
  clearing it. This could help to track down sprites and tiles that are used
  in wrong places.

  
 Generate 4x4 chunks
 
  Generates a set of 4x4 chunks that contain all possible color combinations.
  A very specific function that may come handy for some effects or blocky
  graphics.
 

 Sort by frequency
 
  Sorts tiles by the use frequency. The most often used are placed to the
  beginning of the tileset, the least common get grouped towards the end.

  
 Sort by density
 
  Sorts tiles by the pixel density, i.e. how much pixels is non-zero in
  a tile. It helps to find least meaningful tiles that only has a couple
  pixels set.
  

Nametable


 Set size
 
  Changes size of current nametable. This function allows to select either
  the standard 32x30 size, or any other size from 4x4 to 4096x4096, in
  4 tile steps. Contents of the nametable can be kept or cleared. This
  operation can't be undone.


 Open nametable or map

  Open a nametable or map, with or without attributes, RLE packed or not.
  Contents of the selected file get detected automatically, by the extension
  and size.

  
 Save as binary
 Save as assembly
 Save as C header
 
  + include nametable
  + include attributes
  + RLE compression
  
   Save nametable of standard 32x30 size with or without attributes data
   (1024, 960 or 64 bytes), as a binary file, an assembly code text, or
   a C header. You can also save and load RLE-packed nametables with or
   without attributes. Decompressor code for NES is provided as well.

  
 Save map
 
  Save nametable of non-standard size. This option is the only one available
  for such nametables. Format is like the usual non-compressed nametable, first
  tiles, then attributes, then four bytes with 16-bit width and height. Can be
  used with an external converter to create simple scrolling levels.
  
 
 Add tile offset

  Add a value to a range of tile numbers in the nametable. Dialog with settings
  allows to select the range of numbers that should be affected by the function,
  and a value to add (could be negative). Values can be dec or hex, use $ to
  enter hex.

  
 Replace tile
 
  Replace one tile number in the nametable with another.
  
  
 Selection to clipboard

  Copy current selection from the nametable into Windows clipboard in one
  of text formats, to be pasted into source code with Ctrl+V.
  
  + ASM code
  
    Copy as a series of db statements, to be pasted into assembly code.

  + C code (Shift+C)

    Copy as C array definition, to be pasted into C code.

  + C code with RLE

    Similar to above, but the data is RLE encoded.

	
 Selection as metasprite to cliboard

  Copy current selection from the nametable into the Windows clipboard as
  an array definition in special metasprite format. The format:

   X offset from the top left corner in pixels,
   Y offset from the top left corner in pixels,
   tile number,
   palette number

  Metasprite data ends with X offset 128.

  + C code, no horizontal flip (Shift+M)
	
	Copy as C array definition. 
	 
  + C code, with horizontal flip (Shift+N)

    The same as above, but |OAM_FLIP_H added to the palette number

	
 Select tiles from nametable selection
 
  Multi-select tiles in the CHR bank that were used in current nametable
  selection.


 Selection to current metasprite
 
  Copy current selection as a metasprite into metasprite editor, into
  the currently selected sprite, replacing its current content.

  + auto increment
  
    Automatically increments current metasprite number after copying.

  + skip tile zero
  
    Do not add itle with index 0 into metasprite during copying.
	
  + merge to existing data
  
    Add the seleciton to current metasprite contents rather than
	replace it.
	
 
Metasprites


 Open bank

  Opens a set of 256 metasprites from a binary file.

  
 Save bank

  Saves a set of 256 metasprites into a binary file.

  
 Manage
 
  Open a metasprite manager that allows to change order of metasprites in
  the bank, delete, duplicate, copy and paste them.
  
  
 Add tile offset
 
  Works similar to the nametable function, just for metasprite bank contents.
  
  
 Add X/Y offset
 
  Adds an offset to all sprites in the current metasprite, or in the whole
  bank.
  
  
 Put single to clipboard as ASM
 Put single to clipboard as C

  Copy current metasprite into the Windows clipboard as an array definition
  in special format, to be pasted into assembly or C code. The format is the
  same as for similar function for the nametable, explained above.

  
 Put bank to clipboard as ASM
 Put bank to clipboard as C

  Copy all non-empty metasprites into the Windows clipboard in special format,
  either in assembly code or C. For the latter, there is a separate const
  array for each metasprite, and a list of pointers to the arrays. This
  function asks a text prefix to be used in the array names.

 

Palettes

 Open palette

  Open palette file.

  
 Save palette

  Save current palette to a file.

  
 Reset
 
  Grayscale
  Default A
  Default B
  Default C
  Default D
  
   Reset currently selected palette to one of pre-defined color sets.
  
 
 Copy
 Paste
 
   Copy or paste palette to/from Window clipboard.
   
  
 Put to clipboard

  Copy current palette data as text into the Windows clipboard.

  + 6502 assembly code
  
    Copy as an 6502 assembly code, series of LDA/STA opcodes
	
  + ASM data
  
	Copy as a set of db statements.

  + C data to clipboard

    Copy as C array definition.


  
Import

 BMP as nametable

  Imports smaller palettized BMP image with 16 or 256 colors, with 256 or
  less unique tiles, as a nametable or a map. It removes duplicated tiles
  and creates nametable. Only two lower bits of the graphics are used. The
  program also attempts to select similar colors from current NES palette
  (altered with the color emphasis bits) and create attributes map.
  
  There is two import options that may be useful for importing large
  pictures, when pixel-exact import is not imporant, and quality can be
  compromised.
  
  + best offsets
  
    Shifts the source picture for 0..7 pixels vertically and horizontally,
	seeking for lowest number of resulting tiles. May save a few tiles in
	some cases, for example, on a mostly black title screen with a logo.
	
  + lossy import
  
    Matching all tlies between each other, dropping out ones that are the
	most similar, until only 256 tiles left. Allows to import full screen
	pictures, but with major quality loss. Current implementation is
	experimental, provides not too impressive results, and is very slow.

  + threshold

	Throw away tiles with very few non-transparent pixels. To make it work,
	ensure that main BG color actually has index 0 in the BMP file. This
	option may give an improvement when used with lossy import.

	
 BMP as nametable match tiles
 
  Reconstruct a picture by matching its elements to tiles in currently
  loaded tileset, without importing new tiles.
 
 
 BMP nametable into a number of tiles
 
  Lossy import into given number of tiles (1..256).
 
 
 BMP as tileset

  Imports a 128x128 palettized BMP image as a tileset. Nametable remains
  unchanged.

  
 NES file

  Import a 8K CHR bank from an iNES ROM image. If there is more than 8K of
  graphics in the selected file, you can select which part of the file
  should be imported.


  
Export

 Nametable as BMP

  Export current nametable as a palettized BMP file.

  
 Tileset as BMP

  Export current tileset as a palettized BMP file.

  
 Palette as BMP

  Export current palette as a 16x1 BMP palettized file

  
 Put CHR into NES file

  Replace 8K CHR bank in a iNES ROM image. If there is more than 8K of graphics
  in the selected file, you can select which part of the file should be
  replaced.


  
View

 2x 3x 4x
 
  Select tileset, nametable, and metasprite display scale. There is hot keys,
  Ctrl+2..Ctrl+4.
 
 
  
CHR Editor

 Show CHR editor window. You can use these keys there:

  LMB         - set pixel
  RMB         - set current color to the color of the pixel
  Ctrl+LMB    - fill an area with current color
  Mouse wheel - cycle through tiles
  
  Cursor      - scroll tile with wrap around
  H           - vertical mirror
  V           - horizontal mirror
  Delete      - clear tile
  L           - rotate 90 degree left
  R	          - rotate 90 degree right

  Ctrl+Z      - undo
  Ctrl+X      - cut tile graphics
  Ctrl+C      - copy tile graphics
  Ctrl+V      - paste tile graphics



Miscellaneous features

You can place nes.pal file (192 bytes) into the program directory, if you want
to customize the colors of the displayed NES palette.

You can associate the program with any file types that are supported by the
All\Open menu item, and open them by double click.



File types

There are many file types supported by the program.

 *.chr - tile graphics, matches to the hardware format
 *.pal - palette, 16 bytes
 *.nam - nametable, 960 or 1024 bytes, matches to the hardware format
 *.map - nametable of non-standard size; last bytes are 16-bit width and height
 *.atr - attributes, last 64 bytes of full nametable
 *.rle - RLE-packed nametable
 *.h   - standard C header, text format
 *.nes - iNES ROM, supported for CHR import and export
 *.bmp - standard graphics format, supported for import and export
 *.nss - internal text-based format for saving and restoring sessions
 


History:

v2.51 24.02.20 - A minor bugfix
v2.5  09.02.20 - A lot of changes, fixes, and improvements
v2.4  16.11.18 - Metasprite management, rudimentary nametable animation, minor bug fixes
v2.32 03.08.17 - Sprite duplication, group flip, four palette slots, tile density sort, and more
v2.31 05.02.17 - Minor fixes, map size change with keeping its contents
v2.3  03.12.16 - Nametables of different sizes, another batch of fixes and improvements
v2.21 28.11.16 - Few more hotkeys, fix for the best offsets import option
v2.2  25.11.16 - View scale, palette drag and drop, lossy import, many fixes and improvements
v2.1  23.12.15 - Tile swap in tileset, with nametable update, tileset import for smaller files
v2.04 09.09.14 - 8x16 mode support in the metasprite editor
v2.03 03.03.13 - Find/Remove unused tiles functions
v2.01 22.01.13 - Metasprite copy/paste and flip, nametable import from files with arbitrary sizes
v2.0  16.01.13 - Metasprite editor, type in feature, minor improvements
v1.50 28.06.12 - Nametable drawing with current CHR selection, like a brush mode
v1.49 20.03.12 - Tile flip for 90 degree, sessions, minor bugfixes, better docs
v1.48 19.02.12 - BMP import now attempts to import palette and attributes, Save all function
v1.47 21.01.12 - Swap banks feature, minor bugfix for tileset import from BMP
v1.46 20.01.12 - BMP export is now 16-color, BMP as a tileset import is added
v1.45 18.01.12 - CHR import/export for NES files, some other features and minor bugfixes
v1.44 22.12.11 - Optimize didn't worked properly for the second bank
v1.43 04.12.11 - Number of selected tiles now displayed in the info box
v1.42 10.10.11 - Attributes table could be saved in a separate file
v1.41 02.08.11 - Filenames of files opened through Open or double click are put into save dialogs
v1.40 31.07.11 - Correct work with files that contain dots in path
v1.39 30.07.11 - Fixed wrong file extension and CHR size that was suggested sometimes
v1.38 27.07.11 - Put block as a metasprite into clipboard function
v1.37 01.07.11 - Attribute checker
v1.36 26.06.11 - Save and copy nametable to clipboard as C code
v1.35 04.06.11 - Tileset and nametable export as bitmap files
v1.34 16.05.11 - CHR import from NES files, supports 24K and 40K ROMs
v1.32 10.05.11 - Autofix for unsafe color $0d in palettes, color emphasis display
v1.31 18.01.11 - Minor fixes and some small features
v1.3  03.01.11 - Bugfixes, some new features
v1.23 11.12.10 - CHR redundancy optimization
v1.22 10.12.10 - Copy/paste tile groups in tileset
v1.21 09.12.10 - One-step undo
v1.2  08.12.10 - 1K, 2K, and 8K CHR files support, additional features for CHR editor
v1.12 07.12.10 - Copying parts of the nametable in the clipboard as text
v1.11 06.12.10 - Detailed information bar
v1.1  05.12.10 - Minor fixes and improvements, open all, nametable copy/paste functions
v1.0  04.12.10 - Initial release



Mail:	 shiru@mail.ru
Web:     http://shiru.untergrund.net
Support: https://www.patreon.com/shiru8bit