/*�z��
�ϐ��c1�̒l���L��������́@int a;
�E�^�Ɠ����l�����ł���
�z��c�����^�̒l�𕡐��L���ł�����́@int a [3]
�E�^�Ɠ����l��v�f���Ɠ����������l�����ł���

�z��ƃ|�C���^�[�̊֌W
int a [3];
a��[0]�̃A�h���X�������Ă���

��P
�z���錾��1.0f 3.0f 4.0f�̒l�������o�͂��Ȃ���
*/

#include<stdio.h>

int main(void)
{
	float a[3] = { 1.0f,3.0f,4.0f };

	for (int i = 0; i < 3; i++)
		printf("%f\n", a[i]);

	getchar();
	return 0;
}