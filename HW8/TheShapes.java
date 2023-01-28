package HW8_try;

import java.awt.*;

public class TheShapes {
    public static final int WIDTH = 10;
    public static final int HEIGHT = 20;
    public static final int BLOCK_SIZE = 30;
    private int x = 4, y = 0;
    private final int normal = 600;
    private int delayTime = normal;
    private long beginTime;
    private int dX = 0;
    private boolean conflict = false;
    private int[][] coordinates;
    private final TheGameBoard board;
    private final Color color;
    public TheShapes(int[][] coords, TheGameBoard board, Color color){
        this.coordinates = coords;
        this.board = board;
        this.color = color;
    }
    public void setX(int x){
        this.x  =x;
    }
    public void setY(int y){
        this.y  =y;
    }

    public void reset(){
        this.x = 4;
        this.y = 0;
        conflict = false;
    }
    public void update() {
        if (conflict) {
            merging();
            checkLine();
            board.setCurrentShape();
            return;
        }
        boolean moveX = controlX();
        if (moveX) {
            x += dX;
        }
        dX = 0;
        if (System.currentTimeMillis() - beginTime > delayTime) {
            if (controlY()) {
                y++;
            } else {
                conflict = true;
            }
            beginTime = System.currentTimeMillis();
        }
    }

    private void merging() {
        for (int row = 0; row < coordinates.length; row++) {
            for (int col = 0; col < coordinates[0].length; col++) {
                if (coordinates[row][col] != 0) {
                    board.getBoard()[y + row][x + col] = color;
                }
            }
        }
    }

    private boolean controlX() {
        if (x + dX + coordinates[0].length > WIDTH || x + dX < 0) {
            return false;
        }
        for (int row = 0; row < coordinates.length; row++) {
            for (int col = 0; col < coordinates[row].length; col++) {
                if (coordinates[row][col] != 0) {
                    if (board.getBoard()[y + row][x + dX + col] != null) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
    private boolean controlY() {
        if (y + 1 + coordinates.length > HEIGHT) {
            return false;
        }
        for (int row = 0; row < coordinates.length; row++) {
            for (int col = 0; col < coordinates[row].length; col++) {
                if (coordinates[row][col] != 0) {
                    if (board.getBoard()[y + 1 + row][x + col] != null) {
                        return false;
                    }
                }
            }
        }
        return true;
    }

    private void checkLine(){
        for (int topLine = board.getBoard().length - 1; topLine > 0; topLine--) {
            if (line_checkz(topLine)) {
                shifting_lines(topLine);
            }
        }
    }

    private boolean line_checkz(int topLine) {
        for (int col = 0; col < board.getBoard()[0].length; col++) {
            if (board.getBoard()[topLine][col] == null) {
                return false;
            }
        }
        return true;
    }

    private void shifting_lines(int topLine) {
        for (int row = topLine; row > 0; row--) {
            System.arraycopy(board.getBoard()[row - 1], 0, board.getBoard()[row], 0, board.getBoard()[0].length);
        }
    }


    public void rotateShape() {
        int[][] rotatedShape = transposeMatrix(coordinates);
        row_ters_cevirme(rotatedShape);
        if (!is_valid_position(rotatedShape)) {
            return;
        }
        coordinates = rotatedShape;
    }

    private boolean is_valid_position(int[][] rotatedShape) {
        if ((x + rotatedShape[0].length > WIDTH) || (y + rotatedShape.length > 20)) {
            return false;
        }
        for (int row = 0; row < rotatedShape.length; row++) {
            for (int col = 0; col < rotatedShape[row].length; col++) {
                if (rotatedShape[row][col] != 0) {
                    if (board.getBoard()[y + row][x + col] != null) {
                        return false;
                    }
                }
            }
        }
        return true;
    }


    public int[][] transposeMatrix(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        int[][] transposedMatrix = new int[cols][rows];
        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                transposedMatrix[col][row] = matrix[row][col];
            }
        }
        return transposedMatrix;
    }


    public void row_ters_cevirme(int[][] matrix) {
        int middle = matrix.length / 2;
        for (int row = 0; row < middle; row++) {
            int[] temp = matrix[row];
            matrix[row] = matrix[matrix.length - row - 1];
            matrix[matrix.length - row - 1] = temp;
        }
    }



    public void cikti(Graphics g) {
        for (int row = 0; row < coordinates.length; row++) {
            for (int col = 0; col < coordinates[row].length; col++) {
                if (coordinates[row][col] != 0) {
                    draw_Block(g, row, col);
                }
            }
        }
    }

    private void draw_Block(Graphics g, int row, int col) {
        g.setColor(color);
        g.fillRect((col * BLOCK_SIZE) + (x * BLOCK_SIZE), (row * BLOCK_SIZE) + (y * BLOCK_SIZE), BLOCK_SIZE, BLOCK_SIZE);
    }


    public void speedUp(){
        delayTime = 50;
    }
    public void speedDown(){
        delayTime = normal;
    }
    public void moveRight(){
        dX = 1;
    }
    public void moveLeft(){
        dX = -1;
    }

}
