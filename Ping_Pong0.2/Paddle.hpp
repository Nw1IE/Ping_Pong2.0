#pragma once

class Paddle
{
public:
    Paddle()
    {
        x = y = 0; // � y �����������
    }
    Paddle(int posX, int posY) : Paddle() // � y �����������
    {
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;
    }


    inline void Reset() // ��� �������� �������, ��������� ���������� ������ ����� �� �������� �� ��� �����
    {
        x = originalX; y = originalY;  // ������������
    }
    inline int getX() const  // ��������� X  // ��� �������� �������, ��������� ���������� ������ ����� �� �������� �� ��� �����
    {
        return x;
    }
    inline int getY() const // ���������� Y  // ��� �������� �������, ��������� ���������� ������ ����� �� �������� �� ��� �����
    {
        return y;
    }
    inline void moveUp() // �������� � ����  // ��� �������� �������, ��������� ���������� ������ ����� �� �������� �� ��� �����
    {
        y--;
    }
    inline void moveDown() // �������� � ���  // ��� �������� �������, ��������� ���������� ������ ����� �� �������� �� ��� �����
    {
        y++;
    }
private:
    int x, y;
    int originalX, originalY;
};

