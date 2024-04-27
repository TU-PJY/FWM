#ifndef FWL_CONF_H
#define FWL_CONF_H

#include <string>
#include <vector>
// �����ӿ�ũ �긴�� ����

// �ʼ� �ɼ��� ���� �ؾ� �����ӿ�ũ�� Ȱ��ȭ ��
// �ݵ�� �� ���Ͽ� ������ �� 

// �ʼ� �ɼ�, �ϳ��� ���� �� �ϸ� �����ӿ�ũ�� Ȱ��ȭ ���� ����
#define          USING_FWL                  // �����ӿ�ũ ��� Ȱ��ȭ
#define          NUMBER_OF_LAYER 3          // ���̾� ���� ����
#define          START_MODE "example_mode"  // ���� ��� ����, ���ڿ��� ����

// ���� �ɼ�, ��Ȱ��ȭ �Ǵ� Ȱ��ȭ ����
#define          USING_POPUP_MODE           // �˾� ��� ��� ����
#define          NUMBER_OF_POPUP_LAYER 3    // �˾���� ���̾� ���� ����

#define          USING_DEBUG_MESSEGE        // ����� �޽��� Ȱ��ȭ


// �����ӿ�ũ���� ������ ��� ��� ����
class MODELIST {
public:
	// ���⿡ ������ ��� ��� �Է�
	std::vector<std::string> mode_list = 
	{ "example_mode", "other_mode" };

	#ifdef USING_POPUP_MODE
	#if NUMBER_OF_POPUP_LAYER

	// ���⿡ ������ �˾� ��� ��� �Է�
	std::vector<std::string> popup_mode_list =
	{ "popup_mode" };

	#endif
	#endif
};


// �� ��ü�� �Լ��� �����Ű�� Ŭ����
// �����ӿ�ũ���� �����ϴ� �Լ���
class FUNCTION {
public:
	// �Ʒ� 4���� ����Լ����� �ݵ�� ���� ������Ʈ Ŭ�������� ��� �޵��� �ؾ���
	virtual void update() {}					   // ���� ������Ʈ ������Ʈ
	virtual void check_collision() {}			   // ���� ������Ʈ �浹 ó��
	virtual void render() {}					   // ���� ������Ʈ ���
	virtual void check_delete() {}			   // ���� ������Ʈ ���� �÷��� �˻�

	// �̰��� ����� ���� �Լ� ���� ����
	// ���� ���� �Լ��� ��� �⺻ ���� �����ϴ� �ڵ�� ������ ��. ��ü Ŭ�������� ������ �ǹǷ� FUNCTION ��� �Լ��� ������ �ǹ̰� ����
	virtual int get_info() const {return {};}

	virtual     ~FUNCTION() {}             //�Ҹ���, �� ��ü�� �Ҹ��ڴ� FUNCTION Ŭ������ ���� ��ü�� �Ҹ��ڸ� ȣ����
};


#ifdef USING_POPUP_MODE
#if NUMBER_OF_POPUP_LAYER

// �˾� ��� ���� FUNCTION Ŭ����
class POPUP_FUNCTION {
public:
	// �Ʒ� 4���� ����Լ����� �ݵ�� ���� ������Ʈ Ŭ�������� ��� �޵��� �ؾ���
	virtual void update() {}					   // ���� ������Ʈ ������Ʈ
	virtual void check_collision() {}			   // ���� ������Ʈ �浹 ó��
	virtual void render() {}					   // ���� ������Ʈ ���
	virtual void check_delete() {}			   // ���� ������Ʈ ���� �÷��� �˻�

	// �̰��� ����� ���� �Լ� ���� ����

	virtual     ~POPUP_FUNCTION() {}
};

#endif
#endif

#endif