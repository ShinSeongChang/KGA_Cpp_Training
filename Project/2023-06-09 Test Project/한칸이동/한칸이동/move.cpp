#include <iostream>
#include <conio.h>
#include <time.h>

void move();
void puzzlegame();
void Shuffleonce(int* firstNumber, int* secondNumber);
void swap(int* first, int* second);

//void swap(char* first, char* second);

int main()
{  
    /*
    int star[5][5] = { 0, };

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (x == 2 && y == 2)
            {
                star[x][y] = '0';
                continue;
            }

            star[x][y] = '*';
        }

    }

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("%c ", star[x][y]);
        }

        printf("\n");

    }
    */

    //move();
    puzzlegame();
    return 0;
}

void move()
{
	int star[5][5] = { 0, };
    int X = 2;
    int Y = 2;

	while (1)
	{
  
		char userkey = _getch();
        system("cls");

		if ('W' == userkey || userkey == 'w')
		{
            Y -= 1;

            if (Y <= 0)
            {
                Y = 0;
            }
       
		}

        else if ('S' == userkey || userkey == 's')
        {
            Y += 1;

            if (Y >= 4)
            {
                Y = 4;
            }
        }

        else if ('D' == userkey || userkey == 'd')
        {
            X += 1;
            if (X >= 4)
            {
                X = 4;
            }
        }

        else if ('A' == userkey || userkey == 'a')
        {
            X -= 1;
            if (X <= 0)
            {
                X = 0;
            }
        }

        for (int y = 0; y < 5; y++)
        {
            for (int x = 0; x < 5; x++)
            {
                if (x == X && y == Y)
                {
                    star[x][y] = '0';
                    continue;
                }

                star[x][y] = '*';
            }

        }

        for (int y = 0; y < 5; y++)
        {
            for (int x = 0; x < 5; x++)
            {
                printf("%c ", star[x][y]);
            }

            printf("\n");

        }

	}

}


void puzzlegame()
{

    srand(time(NULL));

    int puzzle[3][3] = { 0, };
    int puzzlecount = 1;
    int X = 0;
    int Y = 0;
    char userKey;

    // 퍼즐판 채우기

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (x == 2 && y == 2)
            {
                puzzle[y][x] = 0;
            }

            else
            {
                puzzle[y][x] = puzzlecount;
                puzzlecount++;
            }
        }
    }


    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            printf("%d ", puzzle[x][y]);
        }

        printf("\n");
    }

   for (int i = 0; i < 1000; i++)
   {

        int randomIdx1, randomIdx2 = 0;
        int randomIdx3, randomIdx4 = 0;

        randomIdx1 = rand() % 3;
        randomIdx2 = rand() % 3;
        randomIdx3 = rand() % 3;
        randomIdx4 = rand() % 3;

        Shuffleonce(&puzzle[randomIdx1][randomIdx2], &puzzle[randomIdx3][randomIdx4]);

   }

   for (int y = 0; y < 3; y++)
   {
       for (int x = 0; x < 3; x++)
       {
           if (puzzle[y][x] == 0)
           {
               X = x;
               Y = y;
           }

       }
   }

   while (1)
   {
       userKey = _getch();

       system("cls");

       if ('W' == userKey || userKey == 'w')
       {
           swap(&puzzle[Y][X], &puzzle[Y-1][X]);
       }

       else if ('S' == userKey || userKey == 's')
       {
           swap(&puzzle[Y][X], &puzzle[Y + 1][X]);
       }

       else if ('D' == userKey || userKey == 'd')
       {
           swap(&puzzle[Y][X], &puzzle[Y][X+1]);
       }

       else if ('A' == userKey || userKey == 'a')
       {
           swap(&puzzle[Y][X], &puzzle[Y][X-1]);
       }

       for (int y = 0; y < 3; y++)
       {
           for (int x = 0; x < 3; x++)
           {
               printf("%d ", puzzle[y][x]);
           }

           printf("\n");
       }

   }

}

void Shuffleonce(int* firstNumber, int* secondNumber)
{
    int temp = 0;
    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}

void swap(int* first, int* second)
{
	int temp = 0;
	temp = *first;
	*first = *second;
	*second = temp;
}