#include <iostream>

void squareSize(int square, int length, int width);			// ���簢���� ũ�� ������ִ� squareSize�Լ� ���漱�� 

int main()
{
	int width = 0 , length = 0 ;		// ���� width : ���κ�, length : ���κ�	
	int square;							// square : �Է¹��� ���簢���� ũ��

	printf("�� ���� ���̸� �Է����ּ��� :");
	scanf_s("%d", &square);

	if (3 <= square && square <= 10)	// ���簢�� ���� ũ�� ���� : 3�̻� , 10������ ũ���ϰ�
	{
		printf("���簢���� ũ��� %d X %d �Դϴ�. \n\n", square, square);

		while (length < square)			// ���簢���� ���κ� �ݺ�		
		{

			width = 0;					// ���κ� 1�� ����� �ٹٲ� ���� ���κ� ����� ���� �ʱ�ȭ

			while (width < square)		// ���簢���� ���κ� �ݺ��� : ���κ��� �Է¹��� ���簢�� ũ��� ������ ���ڼ��� ���
			{
				printf("* ");
				width += 1;				// ���κ��� ũ�⸦ ī��Ʈ, while�� ������ ����� �� ��� (����) �ݺ� ����
			}

			printf("\n");				// ���κ� ����� �ٹٲ�
			length += 1;				// ���κ��� ũ�⸦ ī��Ʈ, while�� ������ ����� �ٹٲ� (����) �ݺ� ����


		}

	}

	else								// ���簢�� ���� ũ�������� ���� ���� ����
	{  
			printf("3 ~ 10 ������ ũ�⸸ �Է����ּ���. \n\n");

			squareSize(square, length, width);			// ���� ���� ���� �Է½� ���漱�� ó���� �Լ��� �ٽ� ȣ���Ͽ� ó���ܰ�� ���ư���.
	}

	return 0;

}	// main �Լ� ����


void squareSize(int square, int length, int width)				// ������ ���� �Է� ������ ������ ó������ �ǵ��� �Լ�
{
	printf("�� ���� ���̸� �Է����ּ��� :");
	scanf_s("%d", &square);

	if (3 <= square && square <= 10)	
	{
		printf("���簢���� ũ��� %d X %d �Դϴ�. \n\n", square, square);

		while (length < square)					
		{

			width = 0;					

			while (width < square)		
			{
				printf("* ");			
				width += 1;				
			}

			printf("\n");				
			length += 1;				


		}

	}

	else								
	{
		printf("3 ~ 10 ������ ũ�⸸ �Է����ּ���. \n\n");
		squareSize(square, length, width);
	}
}

