import java.awt.*;
import java.awt.event.*;
import java.util.*;
//javac -g -encoding UTF-8 sudokuSolver.java


public class sudokuSolver extends Frame implements WindowListener,ActionListener {
	Button b;
	
	TextField[][] cells= new TextField[9][9];
	
	
	
	public static void main(String[] args) {
		sudokuSolver myWindow = new sudokuSolver ("Sudoku Solver");
		myWindow.setSize(350,350);
		myWindow.setVisible(true);
	}

	public sudokuSolver (String title) {//constructor for sudokuSolver
		super(title);
		setLayout(new FlowLayout());
		addWindowListener(this);
		b = new Button("Fill in squares then Click me");
		
		Panel subPanel= new Panel(new GridLayout(9,9));
		for(int row = 0; row < 9; row++){//loops while middle is true
			for(int col = 0; col < 9; col++){
				TextField current = new TextField(1);
				cells[row][col]= current;
				subPanel.add(current);
			}
		}

		add(subPanel);
		add(b);
		
		b.addActionListener(this);
	}

	public void actionPerformed(ActionEvent e) {//event listener
		//Make  list of possible digits, then remove
	
	
		ArrayList<ArrayList<String>> AllRowMissing = new ArrayList<ArrayList<String>>();
		String consoleDisplay="Printing State \n╔═══╤═══╤═══╦═══╤═══╤═══╦═══╤═══╤═══╗\n";
		
		for(int row = 0; row < 9; row++){
			ArrayList<String> RowMissing = new ArrayList<String>();
			
			Collections.addAll(RowMissing,"1","2","3","4","5","6","7","8","9");
			for(int col = 0; col < 9; col++){
				String cellText = cells[row][col].getText();
				
				if(col == 0|| col==3 ||col==6 ){
					consoleDisplay += "║";
				}else{
					consoleDisplay += "│";
				}
				
				if(cellText.length() > 0){
					consoleDisplay +=" "+cellText+" ";
					RowMissing.remove( cellText);
				}else{
					consoleDisplay +="NAN";
				}
			}
			AllRowMissing.add(RowMissing);
			consoleDisplay+="║ missing "+RowMissing.toString()+"\n";
			if(row==2 ||row==5 ){
				consoleDisplay += "╠═══╪═══╪═══╬═══╪═══╪═══╬═══╪═══╪═══╣\n";
			}
			
		}
		consoleDisplay +="╚═══╧═══╧═══╩═══╧═══╧═══╩═══╧═══╧═══╝\n";
		System.out.println(consoleDisplay);
		
		b.setLabel("Button Clicked ");
	}
	//Window events
	public void windowClosing(WindowEvent e) {//necicary to respond to [X]
		dispose();
		System.exit(0);
	}
	public void windowOpened(WindowEvent e) {}	//left as default
	public void windowActivated(WindowEvent e) {}
	public void windowIconified(WindowEvent e) {}
	public void windowDeiconified(WindowEvent e) {}
	public void windowDeactivated(WindowEvent e) {}
	public void windowClosed(WindowEvent e) {}
	
}