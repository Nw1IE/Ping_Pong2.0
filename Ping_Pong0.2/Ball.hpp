#pragma once
#include <random>

enum eDir { STOP = 0, LEFT = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6 }; // ����� ��� ���������� �������

class Ball
{
public:
    Ball(int posX, int posY)
    {
        originalX = posX;
        originalY = posY;
        x = posX; y = posY;
        direction = STOP;
    }

    void Reset(); // ������� ������
    void changeDirection(eDir d); // ��������� �����������
    void randomDirection(); // ��������� �����������

    int getX(); // ����� ������ �������

    int getY(); // ����� ������ �������
    eDir getDirection();// ����� ������ �����������
    void Move(); // ��������

private:
    int x, y;
    int originalX, originalY;
    eDir direction;
};

