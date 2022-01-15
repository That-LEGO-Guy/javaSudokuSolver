/*
=======The Incremental Universal Reference=======
not limited to scope and never finished. a place for stuff I will forget
*/
{//	REGular EXpresions
	[ ] 		 ONE of multiple characters. b[eo]n  matches: 'ben', 'bon' but not 'been' 'beon'
	^			inside [] to exclude the characters it precedes.  b[^o]n  matches: 'ben'   but not' bon'
	$			end of line
	. or \C	any character 
	\d			any digit
	\n				  new line
	\t				  tab
	\w				any alphanumeric character or underscore
	\s			whitespaces including tabs and line breaks
	\X			Matches a single non-combining character followed by any number of combining characters. This is useful if you have a Unicode encoded text with accents as separate, combining characters.
	\A			The start of maching string
	\Z			the end of maching string
	*		 	what it folloews 0 or more times.  Ba*m matches 'Bm' , 'Bam' , 'Baam' etc.
	+			1 or more times.  lo+l matches 'lol' , 'lool' , 'loool' etc.
	\<			start of a word.  \<sh matches 'sh' in 'she' but  not 'wish'.
	\>			end of a word. sh\> matches 'sh' in 'wish' but not 'she'.
	( )			The round brackets can be used in the Find & Replace function to tag a match. 
					tagged matches can then be used in replace with \1, \2 etc.
	{n}		Matches n copies of the element it applies to. e.g [\w]{3} matches 3 \w
	{n,}		matches n or more times
	{n,p}		matches n to p times 
	\			escape regex characters. to find '1+1=2'  search '1\+1=2'
	{ RegEx examples
		$\s* matches end of line all tabs until start of characters of next line
		[^b][^o][^n]$	excludes lines ending in bon

		$\s*.*File name=.*[^c]\w" />$
		matches end of line above if this line contains 'File name=' followed by 0-many any charaters then not'c' 1 alphanumeric and ends with " />

		$\s+.*Folder name.*">\s+.*older>
		
		put curly brackets on same line
		Find:		(.)$\s+\{
		Replace:	\1 \{	
				void eg() 
				{
				becomess
				void eg() {
					
		
	/* eccess } from examples*/}}}}		
	}
}
{//	LDD
	https://youtu.be/RahhZm-IEy8  
	add "DeveloperMode=1" to C:\Users\Ryan Ryzen\AppData\Roaming\LEGO Company\LEGO Digital Designer\preferences.ini
	Delevoper mode hot keys:
	Caps lock off
	1 yellow shapes
	2 violet shapes
	3 cyan shapes
	Q remove all but holes
	R Random color coding pieces
	T post processing options
	O makes everything glow green
	P Black outlines
	G Hide all
	H color coding connected pieces
	J returns view toj origin
	K hides studs
	C Shows green crosses on parts
	V Shows collision elements
	M hides everthing but decals

	Shift or caps lock
	1 yellow shapes
	2 violet shapes
	3 cyan shapes
	Q remove all but holes
	W wireframe
	R centers view
	A opens preferences and communications settings
	S shows statistics
	G hides grid

	ALT GR + T shows all the bricks in pallete
	
	
}
{//	N++ 
	project but only a specific file type
	Creating a project from a directory includes all file and folder but can inlude more files than you want to see in n++
		
	if you save the project to a file,
	open it then use RegEX replace to remove the lines referencing unwanted file types
	
		$\s*.*File name=.*[^c]\w" />$
	
	this selects the end of the line above  to the end of a line containing "File name="  and ending in "c?" /> where ? is an alphanumeric charater
	good for keeping only .cs .ch files
}
{//	Blakc Ops 1
	online players 13/8 28080 
	{	//Chat colours
		^1 = Light Red 
		^2 = Light Green 
		^3 = Yellow 
		^4 = Dark Blue 
		^5 = Teal 
		^6 = Pink 
		^7 = White 
		^8 = Grey 
		^9 = Brown 
		^0 = Black 
		^@ = Cinnamic 
		^= = Light Blue 
		^; = Dark Green 
		^: = Dark Red 
		^> = Light Grey 
		^< = Orange 
		^? = Purple  
	}
}
{//	.BAT
	can be directly run on windows
	pause   teminal window will stay open untill user hits enter 
	
	%date:~0,6%th   will add day and date e.g. "Fri 4th"
	
	{// Robocopy
		robocopy "git repository" "Code Backups\git repository %date:~0,6%th, %time:~0,2%,%time:~3,2%,%time:~6,2%" /E
		
		copy the folder "git repository" to a new folder "git repository Fri 24th, 14,32,02"  the day date and time will be correct
		
		robocopy "sauce path" "output path" /E
		/E		  inlude subfiles, subfolder, empty subfolder
		/L		  List only - don’t copy, timestamp or delete any files.
		/MOV		MOVe files (delete from source after copying).
		/MOVE   Move files and dirs (delete from source after copying).
		/sl		 Copy file symbolic links instead of the target [see notes below].
		/Z		  Copy files in restartable mode (survive network glitch).
		/B		  Copy files in Backup mode.
		/J		  Copy using unbuffered I/O (recommended for large files). ##
		/NOOFFLOAD  Copy files without using the Windows Copy Offload mechanism. ##
		/ZB		 Use restartable mode; if access denied use Backup mode.
		/EFSRAW Copy any encrypted files using EFS RAW mode.'
		
		
	}
}
{//	Java
	Compile: javac -g -encoding UTF-8 *.java 
	Run:		java "filename"
	access needs to be declared.
		public:	open to all.
		protected: accessible in declared class and subclasses.
		private:	only accessible in declared class.


	var delaration inside class.
	types need to be specified.
	void for no return type
	
	{keyboard input
		import java.util.scanner;

		Scanner userIn = new Scanner(System.in);
	}
	convert String to int:
	Int Value =	Integer.parseInt("47");
}
{//	Python
	Run: python "source file"
	start interpreter: python
	can directly type python code in to interpreter
	Indentation is critical, dont mix tabs and spaces
	var types not specified.
	
	
	
	
	number = 4
	string = 'some words'
	def chunks(count, length):## function definition
		if count == 1:
			return "1"
		else:
			chunklist = []
			i = 1
			while i - 1 < count:
				if i+length-1 > count:
					chunklist.append(str(i)+'-'+str(count))
				else:
					chunklist.append(str(i)+'-'+str(i+length-1))
				i += length
		return chunklist
	print(chunks(10*number,number))## print to console	
}
{//	C#
	
}-
{//	C	
	
}
{//	C++
	
}
{//	HTML
	
}
{//	JavaScript
	
}
{//	Css
	
}
{//	Unity
	
}
{//	Space engineers
	uses C# for ingame coding
}
{//	
	
}
{//	
	
}
{//	
	
}

