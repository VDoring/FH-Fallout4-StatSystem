/* ���ƿ� 4�� ��Ƽ��� ������� ĳ���� ���� �ý��� */

#include <stdio.h>
int main()
{
	int select; //����, �ʱ�ȭ ������ ���ϴ� ����
	
	int Strength = 0;
	int Perception = 0;
	int Endurance = 0;
	int Charisma = 0;
	int Intelligence = 0;
	int Agility = 0;
	int Luck = 0;

	int STATPOINT = 28; //����� �� �ִ� ��������Ʈ(��, ��ø���� ������ ���)
	int STATNAME = 0; //���� ������ �������� ����ϴ� �迭(��, ���� ���� �Է�, ����)


	printf("-- Your STAT System --\n");

	while (1) {
		printf("\n(1) Start     (2) Reset     (3)Quit\n");
		scanf("%d", &select);

		if (select == 1) { //���ۼ�����
			while (1) {
				printf("\n\nYour STAT Point : <%d>\n\n", STATPOINT);
				printf(" [%d] ��(Strength) - ����� ������ ������ �� ������ �۾��� �ֽ��ϴ�!\n [%d] ����(Perception) - ������ �����ϰ��ϼ���. ����� ������ ��� ��Ȳ�� �� �� �ֽ��ϴ�.\n [%d] ü��(Endurance) - �����̴� �� ���� ����� ������ ü���� ��� ��Ȳ���� ������ �˴ϴ�!\n [%d] ī������(Charisma) - ������� �־���� �����Ű���? �̰� �ϳ��� �����մϴ�!\n [%d] ����(Intelligence) - �������� ��� �ൿ�� ȿ������ ���Ͻ�ŵ�ϴ�. �� ���󿡵� ����� ���� �ʿ��ϰŵ��.\n [%d] ��ø(Agility) - �����̰ų� ���Ÿ��� ��ø���� ����� ������ Ư���� ����� ������ݴϴ�!\n [%d] ���(Luck) - �������� �ƹ��� �𸨴ϴ�. ����� ������ ���� �Բ��ϱ�..\n", Strength, Perception, Endurance, Charisma, Intelligence, Agility, Luck);
				printf("\n�ø������ ������ ��ȣ�� �������� = ");
				scanf("%d", &STATNAME);
				if (STATNAME == 1) { //��
					Strength++;
					STATPOINT--;
					printf("\n���� \"��\"������ �� : %d", Strength);
				}
				if (STATNAME == 2) {
					Perception++;
					STATPOINT--;
					printf("\n���� \"����\"������ �� : %d", Perception);
				}
				if (STATNAME == 3) {
					Endurance++;
					STATPOINT--;
					printf("\n���� \"ü��\"������ �� : %d", Endurance);
				}
				if (STATNAME == 4) {
					Charisma++;
					STATPOINT--;
					printf("\n���� \"ī������\"������ �� : %d", Charisma);
				}
				if (STATNAME == 5) {
					Intelligence++;
					STATPOINT--;
					printf("\n���� \"����\"������ �� : %d", Intelligence);
				}
				if (STATNAME == 6) {
					Agility++;
					STATPOINT--;
					printf("\n���� \"��ø\"������ �� : %d", Agility);
				}
				if (STATNAME == 7) {
					Luck++;
					STATPOINT--;
					printf("\n���� \"���\"������ �� : %d", Luck);
				}
				if (STATNAME == 99) {
					printf("\n\n<����ȭ������ ���ư��ϴ�.>\n\n");
					break;
				}
				else if (STATNAME < 0 || STATNAME > 7) {
					printf("�ٽ� �Է����ּ���");
				}
			}
		}
		else if (select == 2) { //�ʱ�ȭ������
			Strength = 0, Perception = 0, Endurance = 0, Charisma = 0, Intelligence = 0, Agility = 0, Luck = 0;
			STATPOINT = 28;
			printf("�ʱ�ȭ �Ϸ�");
		}
		else if (select == 3) {
			printf(" - �ý����� ����˴ϴ� -");
			break;
		}
		else {
			printf("\n <�ٽ� �Է� ���ּ���>");
		}
	}
	printf("\n���� �Ϸ� �Ǽ���!\n\n\n\n");
	return 0;
}

/*

������1 : ��������Ʈ�� -(���̳ʽ�) ��� �����ʰ� ����Ʈ�ɱ�.
������2 :��, ��ø���� ������ 10�� �Ѿ�� �ʵ��� �����ϱ�.

*/