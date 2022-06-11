
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
    public:
        int width, height;
    
    public:
        void display()
        {
            // int Width = width;
            // int Height = height;
            cout << width << ' ' << height << '\n';
        }
};

class RectangleArea : public Rectangle
{
    public:
    void display()
    {
        cout << width * height << '\n';
    }
    
    void read_input()
    {
        cin >> width >> height;
    }
};
