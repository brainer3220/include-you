#include "you"

int main() {
	using namespace You;

	console.putln("Hello").putln("world!");
	console.put("¤»", 10);
	int o;
	console.get(o).put(o).get(o).put(o);
	char buf[2][256];
	console.get(buf[0], buf[1]).putln(buf[0]).putln(buf[1]);
}