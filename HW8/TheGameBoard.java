package HW8_try;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.util.Random;
import javax.swing.JPanel;
/**
 * The class that represents the game board for the Tetris game. This class extends JPanel
 * and implements the KeyListener interface to handle user input.
 */
public class TheGameBoard extends JPanel implements KeyListener {
    private static final int akicilik = 60;
    private static final int delay = akicilik / 1000;
    public static final int WIDTH = 10;
    public static final int HEIGHT = 20;
    public static final int BLOCK_SIZE = 30;
    private final Color[][] board = new Color[HEIGHT][WIDTH];
    private final Random rand_;
    private final TheShapes[] shapes_ = new TheShapes[7];
    private TheShapes shape_current;
    /**
     * Constructor for TheGameBoard class. Initializes the game board, creates the shapes, and starts the game loop.
     */
    public TheGameBoard() {
        rand_ = new Random();
        createShapes();
        shape_current = shapes_[0];

        Timer looper = new Timer(delay, new ActionListener() {
            final int n = 0;

            @Override
            public void actionPerformed(ActionEvent e) {
                update();
                repaint();
            }
        });
        looper.start();
    }

    private void createShapes() {
        Color[] renkler = {Color.decode("#00a2e8"), Color.decode("#3f48cc"), Color.decode("#a349a4"),
                Color.decode("#ed1c24"), Color.decode("#22b14c"), Color.decode("#fff200"), Color.decode("#ff7f27")};

        shapes_[0] = creating_shapes(new int[][]{
                {1, 1, 1, 1} // I shape;
        }, renkler[0]);

        shapes_[1] = creating_shapes(new int[][]{
                {1, 1, 1},
                {0, 1, 0}, // T shape;
        }, renkler[1]);

        shapes_[2] = creating_shapes(new int[][]{
                {1, 1, 1},
                {1, 0, 0}, // L shape;
        }, renkler[2]);

        shapes_[3] = creating_shapes(new int[][]{
                {1, 1, 1},
                {0, 0, 1}, // J shape;
        }, renkler[3]);

        shapes_[4] = creating_shapes(new int[][]{
                {0, 1, 1},
                {1, 1, 0}, // S shape;
        }, renkler[4]);

        shapes_[5] = creating_shapes(new int[][]{
                {1, 1, 0},
                {0, 1, 1}, // Z shape;
        }, renkler[5]);

        shapes_[6] = creating_shapes(new int[][]{
                {1, 1},
                {1, 1}, // O shape;
        }, renkler[6]);
    }

    private TheShapes creating_shapes(int[][] shape, Color color) {
        return new TheShapes(shape, this, color);
    }

    private void update(){
        shape_current.update();
    }
    public void setCurrentShape(){
        shape_current = shapes_[rand_.nextInt(shapes_.length)];
        shape_current.reset();
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.setColor(Color.WHITE);
        g.fillRect(0, 0, getWidth(), getHeight());
        drwaingthelines(g);
        drawingshapecurent(g);
        drawBoard(g);
    }

    private void drwaingthelines(Graphics g) {
        g.setColor(Color.BLACK);
        for (int row = 1; row < HEIGHT; row++) {
            g.drawLine(0, BLOCK_SIZE * row, BLOCK_SIZE * WIDTH, BLOCK_SIZE * row);
        }
        for (int col = 1; col < WIDTH; col++) {
            g.drawLine(col * BLOCK_SIZE, 0, BLOCK_SIZE * col, BLOCK_SIZE * HEIGHT);
        }
    }

    private void drawingshapecurent(Graphics g) {
        shape_current.cikti(g);
    }

    private void drawBoard(Graphics gra) {
        for (int row = 0; row < board.length; row++) {
            for (int col = 0; col < board[row].length; col++) {
                if (board[row][col] != null) {
                    gra.setColor(board[row][col]);
                    gra.fillRect(col * BLOCK_SIZE, row * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE);
                }
            }
        }
    }

    public Color[][] getBoard(){
        return board;
    }

    @Override
    public void keyTyped(KeyEvent e) {}

    @Override
    public void keyPressed(KeyEvent e) {

        if(e.getKeyCode() == KeyEvent.VK_DOWN) {
            shape_current.speedUp();
        }
        else if(e.getKeyCode() == KeyEvent.VK_RIGHT){
            shape_current.moveRight();
        }
        else if(e.getKeyCode() == KeyEvent.VK_LEFT){
            shape_current.moveLeft();
        }
        else if(e.getKeyCode() == KeyEvent.VK_UP){
            shape_current.rotateShape();
        }
    }

    @Override
    public void keyReleased(KeyEvent e) {
        if(e.getKeyCode() == KeyEvent.VK_DOWN) {
            shape_current.speedDown();
        }
    }
}
