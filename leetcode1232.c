bool checkStraightLine(int** a, int Size, int* coordinatesColSize) {

    int x1=a[0][0];
    int y1=a[0][1];

    int x2=a[1][0];
    int y2=a[1][1];

    int dx=(y2-y1);
    int dy=(x2-x1);

  for (int i = 2; i < Size; i++) {
        int x = a[i][0];
        int y = a[i][1];

        // cross multiplication to avoid division
        if (dy * (x - x1) != dx * (y - y1)) {
            return false;
        }
    }
    return true;
    
    
}