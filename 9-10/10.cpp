#include <iostream>
using namespace std;

class UI {
public:
    static int select_menu() {
        cout << "삽입 : 1, 삭제 : 2, 모두보기 : 3, 종료 : 4 >> ";
        int m;
        cin >> m;
        return m;
    }
    static int input_shape() {
        cout << "선:1, 원:2, 사각형:3 >> ";
        int m;
        cin >> m;
        return m;
    }
    static int delshape_index() {
        cout << "삭제하고자 하는 도형의 인덱스 >> ";
        int m;
        cin >> m;
        return m;
    }
};

class Shape {
	Shape* next;
protected:
	virtual void draw() = 0;
public:
	Shape() { next = NULL; }
	virtual ~Shape() {}
	Shape* add(Shape* p) {
		this->next = p;
		return p;
	}
	void paint() {
		draw();
	}
	Shape* getNext() { return next; }
};

class Line : public Shape {
protected:
	virtual void draw() { cout << "Line" << endl; }
};

class Circle : public Shape {
protected:
	virtual void draw() { cout << "Circle" << endl; }
};

class Rectangle : public Shape {
protected:
	virtual void draw() { cout << "Rectangle" << endl; }
};

class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
public:
	void run() {
		int menu, index, type;
		while (true) {
			menu = UI::select_menu();
			switch (menu) {
			case 1:
				type = UI::input_shape();
				insertItem(type);
				break;
			case 2:
				index = UI::delshape_index();
				deleteItem(index);
				break;
			case 3:
				show();
				break;
			default:
				return;
			}
		}
	}
	GraphicEditor() { pStart = pLast = NULL; }
	void insertItem(int type) {
		Shape* p = NULL;
		switch (type) {
		case 1:
			p = new Line();
			break;
		case 2:
			p = new Circle();
			break;
		case 3:
			p = new Rectangle();
			break;
		default:
			break;
		}
		if (pStart == NULL) {
			pStart = p;
			pLast = p;
			return;
		}
		pLast->add(p);
		pLast = pLast->getNext();
	}
	void deleteItem(int index) {
		Shape* pre = pStart;
		Shape* tmp = pStart;
		if (pStart == NULL) {
			cout << "도형이 없습니다!" << endl;
			return;
		}
		for (int i = 1; i < index; i++) {
			pre = tmp;
			tmp = tmp->getNext();
		}
		if (tmp == pStart) {
			pStart = tmp->getNext();
			delete tmp;
		}
		else {
			pre->add(tmp->getNext());
			delete tmp;
		}
	}
	void show() {
		Shape* tmp = pStart;
		int i = 1;
		while (tmp != NULL) {
			cout << i++ << ": ";
			tmp->paint();
			tmp = tmp->getNext();
		}
	}
};

int main() {
    cout << "그래픽 에디터입니다." << endl;
	GraphicEditor graphicEditor;
	graphicEditor.run();
}