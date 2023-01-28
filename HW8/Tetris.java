package HW8_try;
import javax.swing.JFrame;

/**
 * The Tetris class represents the main class of the Tetris game.
 * It creates the game window and the game board, and handles the game logic.
 */
public class Tetris {
    /** The width of the game window */
    public static final int WIDTH = 315;
    /** The height of the game window */
    public static final int HEIGHT = 638;

    /** The game window */
    private JFrame game_board;
    /** The game board */
    private TheGameBoard board;

    /**
     * Creates a new Tetris game.
     */
    public Tetris() {
        game_board = crating_win();
        board = new TheGameBoard();
        game_board.add(board);
        game_board.addKeyListener(board);
        game_board.setVisible(true);
    }

    /**
     * Creates the game window
     * @return the game window
     */
    private JFrame crating_win() {
        JFrame window = new JFrame("Tetris Game");
        window.setSize(WIDTH, HEIGHT);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        window.setResizable(false);
        window.setLocationRelativeTo(null);
        return window;
    }

    /**
     * The main method of the Tetris game.
     * @param args command-line arguments
     */
    public static void main(String[] args) {
        new Tetris();
    }
}

