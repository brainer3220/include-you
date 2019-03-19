#include "you"

int main() {
	using namespace you;
	const char * str = "Hello, #include \"you\"!";
	Color c[] = { Color::RED, Color::YELLOW, Color::GREEN, Color::SKY_BLUE, Color::PURPLE, Color::WHITE };
	size_t color_len = sizeof(c) / sizeof(Color);
	for (size_t i = 0; str[i]; ++i)
		console.setColor(c[i%color_len]).put(str[i]);
	console.setColor(Color::WHITE).pause();
}