#include "FWL.h"
#include "modes.h"
#include "global.h"
#include "Objects.h"

// �����ӿ�ũ ���� ����
FWL fw;

// true�� �� �� ��ü Ŭ���� �޽��� ���, false�� �� connect_ptr()���� �޽��� ��� 
bool class_message = true;  

// true�� �� �ϴ��� ��� ���� �ڵ� ����
bool mode_change = false;


int main() {
	// �����ӿ�ũ ����
	// ���� �� �ݵ�� ��� ���� �Լ��� �����ؾ� ��
	// ��� ���� �Լ��� modes.cpp�� ����
	if(std::string(START_MODE) == "example_mode")
		fw.init(example_mode, "example_mode");


	// START_MODE�� �����̳Ŀ� ���� ���� ��尡 �޶���
	else if (std::string(START_MODE) == "other_mode")
		fw.init(other_mode, "other_mode");

	// mode_change Ȱ��ȭ �� example_mode���� �߰��Ǿ��� ��ü�� ��� ��� �����ǰ� ����� ��� ���� �ڵ忡 �ִ� �޽����� ��µȴ�
	// ���� ��� �̸��� ���� �Լ� �̸��� ������ �ۼ��ϴ� ���� ������
	// ���� ���� ���� ���� �����ϸ� �Լ��� ������� ����
	if(mode_change)
		fw.change_mode(other_mode, "other_mode");

	// ��ü ���� ����
	while (true) {
		fw.routine();
	}
}