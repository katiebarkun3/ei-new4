//#include "settings.h"
//#include "leftanim.h"
//
//std::string Leftanim::leftanim_anim_files[] = {
//	"left1.png",  "left2.png",  "left3.png"
//};
//
//Leftanim::Leftanim() {
//	texture.loadFromFile(IMAGES_FOLDER + LEFTANIM_IMAGES_FOLDER + leftanim_anim_files[0]);
//	sprite.setTexture(texture);
//
//}
//void Leftanim::update() {
//	sf::Time now = leftanim_clock.getElapsedTime();
//	if (now.asMilliseconds() > frame_delay) {
//		frame++;
//		if (frame < 6) {
//			leftanim_clock.restart();
//			texture.loadFromFile(IMAGES_FOLDER + LEFTANIM_IMAGES_FOLDER + leftanim_anim_files[frame]);
//			sprite.setTexture(texture);
//		}
//		else {
//			del = true;
//		}
//	}
//}
//bool Leftanim::getDel() { return del; }
//void Leftanim::draw(sf::RenderWindow& window) { window.draw(sprite); }