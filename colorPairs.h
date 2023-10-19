#pragma once

#include <string>
#include <array>

#include <ncurses.h>

using namespace std;

struct ColorPair
{
    string name;
    short pairIdBG;
    short foreground;
};

array<ColorPair, 256> colorPairs = {{{"black", 0, 19},

									 {"dark grey 8", 1, 19},
									 {"dark grey 7", 2, 19},
									 {"dark grey 6", 3, 19},
									 {"dark grey 5", 4, 19},
									 {"dark grey 4", 5, 19},
									 {"dark grey 3", 6, 19},
									 {"dark grey 2", 7, 19},
									 {"dark grey 1", 8, 19},
									 {"dark grey 0", 9, 19},

									 {"grey", 10, 19},

									 {"light grey 0", 11, 0},
									 {"light grey 1", 12, 0},
									 {"light grey 2", 13, 0},
									 {"light grey 3", 14, 0},
									 {"light grey 4", 15, 0},
									 {"light grey 5", 16, 0},
									 {"light grey 6", 17, 0},
									 {"light grey 7", 18, 0},

									 {"white", 19, 0},

									 {"light red 7", 20, 0},
									 {"light red 6", 21, 0},
									 {"light red 5", 22, 0},
									 {"light red 4", 23, 0},
									 {"light red 3", 24, 0},
									 {"light red 2", 25, 0},
									 {"light red 1", 26, 0},
									 {"light red 0", 27, 0},

									 {"red", 28, 19},

									 {"dark red 0", 29, 19},
									 {"dark red 1", 30, 19},
									 {"dark red 2", 31, 19},
									 {"dark red 3", 32, 19},
									 {"dark red 4", 33, 19},
									 {"dark red 5", 34, 19},
									 {"dark red 6", 35, 19},
									 {"dark red 7", 36, 19},
									 {"dark red 8", 37, 19},

									 {"black", 38, 19},

									 {"dark green 8", 39, 19},
									 {"dark green 7", 40, 19},
									 {"dark green 6", 41, 19},
									 {"dark green 5", 42, 19},
									 {"dark green 4", 43, 19},
									 {"dark green 3", 44, 19},
									 {"dark green 2", 45, 19},
									 {"dark green 1", 46, 19},
									 {"dark green 0", 47, 19},

									 {"green", 48, 19},

									 {"light green 0", 49, 0},
									 {"light green 1", 50, 0},
									 {"light green 2", 51, 0},
									 {"light green 3", 52, 0},
									 {"light green 4", 53, 0},
									 {"light green 5", 54, 0},
									 {"light green 6", 55, 0},
									 {"light green 7", 56, 0},

									 {"white", 57, 0},

									 {"light blue 7", 58, 0},
									 {"light blue 6", 59, 0},
									 {"light blue 5", 60, 0},
									 {"light blue 4", 61, 0},
									 {"light blue 3", 62, 0},
									 {"light blue 2", 63, 0},
									 {"light blue 1", 64, 0},
									 {"light blue 0", 65, 0},

									 {"blue", 66, 19},

									 {"dark blue 0", 67, 19},
									 {"dark blue 1", 68, 19},
									 {"dark blue 2", 69, 19},
									 {"dark blue 3", 70, 19},
									 {"dark blue 4", 71, 19},
									 {"dark blue 5", 72, 19},
									 {"dark blue 6", 73, 19},
									 {"dark blue 7", 74, 19},
									 {"dark blue 8", 75, 19},

									 {"black", 76, 19},

									 {"dark yellow 8", 77, 19},
									 {"dark yellow 7", 78, 19},
									 {"dark yellow 6", 79, 19},
									 {"dark yellow 5", 80, 19},
									 {"dark yellow 4", 81, 19},
									 {"dark yellow 3", 82, 19},
									 {"dark yellow 2", 83, 19},
									 {"dark yellow 1", 84, 19},
									 {"dark yellow 0", 85, 19},

									 {"yellow", 86, 19},

									 {"light yellow 0", 87, 0},
									 {"light yellow 1", 88, 0},
									 {"light yellow 2", 89, 0},
									 {"light yellow 3", 90, 0},
									 {"light yellow 4", 91, 0},
									 {"light yellow 5", 92, 0},
									 {"light yellow 6", 93, 0},
									 {"light yellow 7", 94, 0},

									 {"white", 95, 0},

									 {"light magenta 7", 96, 0},
									 {"light magenta 6", 97, 0},
									 {"light magenta 5", 98, 0},
									 {"light magenta 4", 99, 0},
									 {"light magenta 3", 100, 0},
									 {"light magenta 2", 101, 0},
									 {"light magenta 1", 102, 0},
									 {"light magenta 0", 103, 0},

									 {"magenta", 104, 19},

									 {"dark magenta 0", 105, 19},
									 {"dark magenta 1", 106, 19},
									 {"dark magenta 2", 107, 19},
									 {"dark magenta 3", 108, 19},
									 {"dark magenta 4", 109, 19},
									 {"dark magenta 5", 110, 19},
									 {"dark magenta 6", 111, 19},
									 {"dark magenta 7", 112, 19},
									 {"dark magenta 8", 113, 19},

									 {"black", 114, 19},

									 {"dark cyan 8", 115, 19},
									 {"dark cyan 7", 116, 19},
									 {"dark cyan 6", 117, 19},
									 {"dark cyan 5", 118, 19},
									 {"dark cyan 4", 119, 19},
									 {"dark cyan 3", 120, 19},
									 {"dark cyan 2", 121, 19},
									 {"dark cyan 1", 122, 19},
									 {"dark cyan 0", 123, 19},

									 {"cyan", 124, 19},

									 {"light cyan 0", 125, 0},
									 {"light cyan 1", 126, 0},
									 {"light cyan 2", 127, 0},
									 {"light cyan 3", 128, 0},
									 {"light cyan 4", 129, 0},
									 {"light cyan 5", 130, 0},
									 {"light cyan 6", 131, 0},
									 {"light cyan 7", 132, 0},

									 {"white", 133, 0},

									 {"light orange 7", 134, 0},
									 {"light orange 6", 135, 0},
									 {"light orange 5", 136, 0},
									 {"light orange 4", 137, 0},
									 {"light orange 3", 138, 0},
									 {"light orange 2", 139, 0},
									 {"light orange 1", 140, 0},
									 {"light orange 0", 141, 0},

									 {"orange", 142, 19},

									 {"brown 0", 143, 19},
									 {"brown 1", 144, 19},
									 {"brown 2", 145, 19},
									 {"brown 3", 146, 19},
									 {"brown 4", 147, 19},
									 {"brown 5", 148, 19},
									 {"brown 6", 149, 19},
									 {"brown 7", 150, 19},
									 {"brown 8", 151, 19},

									 {"black", 152, 19},

									 {"dark fuchsia 8", 153, 19},
									 {"dark fuchsia 7", 154, 19},
									 {"dark fuchsia 6", 155, 19},
									 {"dark fuchsia 5", 156, 19},
									 {"dark fuchsia 4", 157, 19},
									 {"dark fuchsia 3", 158, 19},
									 {"dark fuchsia 2", 159, 19},
									 {"dark fuchsia 1", 160, 19},
									 {"dark fuchsia 0", 161, 19},

									 {"fuchsia", 162, 19},

									 {"light fuchsia 0", 163, 0},
									 {"light fuchsia 1", 164, 0},
									 {"light fuchsia 2", 165, 0},
									 {"light fuchsia 3", 166, 0},
									 {"light fuchsia 4", 167, 0},
									 {"light fuchsia 5", 168, 0},
									 {"light fuchsia 6", 169, 0},
									 {"light fuchsia 7", 170, 0},

									 {"white", 171, 0},

									 {"light blue green 7", 172, 0},
									 {"light blue green 6", 173, 0},
									 {"light blue green 5", 174, 0},
									 {"light blue green 4", 175, 0},
									 {"light blue green 3", 176, 0},
									 {"light blue green 2", 177, 0},
									 {"light blue green 1", 178, 0},
									 {"light blue green 0", 179, 0},

									 {"blue green", 180, 19},

									 {"dark blue green 0", 181, 19},
									 {"dark blue green 1", 182, 19},
									 {"dark blue green 2", 183, 19},
									 {"dark blue green 3", 184, 19},
									 {"dark blue green 4", 185, 19},
									 {"dark blue green 5", 186, 19},
									 {"dark blue green 6", 187, 19},
									 {"dark blue green 7", 188, 19},
									 {"dark blue green 8", 189, 19},

									 {"black", 190, 19},

									 {"dark yellow green 8", 191, 19},
									 {"dark yellow green 7", 192, 19},
									 {"dark yellow green 6", 193, 19},
									 {"dark yellow green 5", 194, 19},
									 {"dark yellow green 4", 195, 19},
									 {"dark yellow green 3", 196, 19},
									 {"dark yellow green 2", 197, 19},
									 {"dark yellow green 1", 198, 19},
									 {"dark yellow green 0", 199, 19},

									 {"yellow green", 200, 19},

									 {"light yellow green 0", 201, 0},
									 {"light yellow green 1", 202, 0},
									 {"light yellow green 2", 203, 0},
									 {"light yellow green 3", 204, 0},
									 {"light yellow green 4", 205, 0},
									 {"light yellow green 5", 206, 0},
									 {"light yellow green 6", 207, 0},
									 {"light yellow green 7", 208, 0},

									 {"white", 209, 0},

									 {"light aqua 7", 210, 0},
									 {"light aqua 6", 211, 0},
									 {"light aqua 5", 212, 0},
									 {"light aqua 4", 213, 0},
									 {"light aqua 3", 214, 0},
									 {"light aqua 2", 215, 0},
									 {"light aqua 1", 216, 0},
									 {"light aqua 0", 217, 0},

									 {"aqua", 218, 19},

									 {"dark aqua 0", 219, 19},
									 {"dark aqua 1", 220, 19},
									 {"dark aqua 2", 221, 19},
									 {"dark aqua 3", 222, 19},
									 {"dark aqua 4", 223, 19},
									 {"dark aqua 5", 224, 19},
									 {"dark aqua 6", 225, 19},
									 {"dark aqua 7", 226, 19},
									 {"dark aqua 8", 227, 19},

									 {"black", 228, 19},

									 {"dark purple 8", 229, 19},
									 {"dark purple 7", 230, 19},
									 {"dark purple 6", 231, 19},
									 {"dark purple 5", 232, 19},
									 {"dark purple 4", 233, 19},
									 {"dark purple 3", 234, 19},
									 {"dark purple 2", 235, 19},
									 {"dark purple 1", 236, 19},
									 {"dark purple 0", 237, 19},

									 {"purple", 238, 19},

									 {"light purple 0", 239, 0},
									 {"light purple 1", 240, 0},
									 {"light purple 2", 241, 0},
									 {"light purple 3", 242, 0},
									 {"light purple 4", 243, 0},
									 {"light purple 5", 244, 0},
									 {"light purple 6", 245, 0},
									 {"light purple 7", 246, 0},

									 {"white", 247, 0},

									 {"light grey", 248, 0},
									 {"light grey", 249, 0},
									 {"light grey", 250, 0},
									 {"light grey", 251, 0},
									 {"dark grey", 252, 19},
									 {"dark grey", 253, 19},
									 {"dark grey", 254, 19},
									 {"dark grey", 255, 19}}};

void changePair(int pairId)
{
	switch (pairId)
	{
	case 0:
		attron(COLOR_PAIR(0));
		break;
	case 1:
		attron(COLOR_PAIR(1));
		break;
	case 2:
		attron(COLOR_PAIR(2));
		break;
	case 3:
		attron(COLOR_PAIR(3));
		break;
	case 4:
		attron(COLOR_PAIR(4));
		break;
	case 5:
		attron(COLOR_PAIR(5));
		break;
	case 6:
		attron(COLOR_PAIR(6));
		break;
	case 7:
		attron(COLOR_PAIR(7));
		break;
	case 8:
		attron(COLOR_PAIR(8));
		break;
	case 9:
		attron(COLOR_PAIR(9));
		break;
	case 10:
		attron(COLOR_PAIR(10));
		break;
	case 11:
		attron(COLOR_PAIR(11));
		break;
	case 12:
		attron(COLOR_PAIR(12));
		break;
	case 13:
		attron(COLOR_PAIR(13));
		break;
	case 14:
		attron(COLOR_PAIR(14));
		break;
	case 15:
		attron(COLOR_PAIR(15));
		break;
	case 16:
		attron(COLOR_PAIR(16));
		break;
	case 17:
		attron(COLOR_PAIR(17));
		break;
	case 18:
		attron(COLOR_PAIR(18));
		break;
	case 19:
		attron(COLOR_PAIR(19));
		break;
	case 20:
		attron(COLOR_PAIR(20));
		break;
	case 21:
		attron(COLOR_PAIR(21));
		break;
	case 22:
		attron(COLOR_PAIR(22));
		break;
	case 23:
		attron(COLOR_PAIR(23));
		break;
	case 24:
		attron(COLOR_PAIR(24));
		break;
	case 25:
		attron(COLOR_PAIR(25));
		break;
	case 26:
		attron(COLOR_PAIR(26));
		break;
	case 27:
		attron(COLOR_PAIR(27));
		break;
	case 28:
		attron(COLOR_PAIR(28));
		break;
	case 29:
		attron(COLOR_PAIR(29));
		break;
	case 30:
		attron(COLOR_PAIR(30));
		break;
	case 31:
		attron(COLOR_PAIR(31));
		break;
	case 32:
		attron(COLOR_PAIR(32));
		break;
	case 33:
		attron(COLOR_PAIR(33));
		break;
	case 34:
		attron(COLOR_PAIR(34));
		break;
	case 35:
		attron(COLOR_PAIR(35));
		break;
	case 36:
		attron(COLOR_PAIR(36));
		break;
	case 37:
		attron(COLOR_PAIR(37));
		break;
	case 38:
		attron(COLOR_PAIR(38));
		break;
	case 39:
		attron(COLOR_PAIR(39));
		break;
	case 40:
		attron(COLOR_PAIR(40));
		break;
	case 41:
		attron(COLOR_PAIR(41));
		break;
	case 42:
		attron(COLOR_PAIR(42));
		break;
	case 43:
		attron(COLOR_PAIR(43));
		break;
	case 44:
		attron(COLOR_PAIR(44));
		break;
	case 45:
		attron(COLOR_PAIR(45));
		break;
	case 46:
		attron(COLOR_PAIR(46));
		break;
	case 47:
		attron(COLOR_PAIR(47));
		break;
	case 48:
		attron(COLOR_PAIR(48));
		break;
	case 49:
		attron(COLOR_PAIR(49));
		break;
	case 50:
		attron(COLOR_PAIR(50));
		break;
	case 51:
		attron(COLOR_PAIR(51));
		break;
	case 52:
		attron(COLOR_PAIR(52));
		break;
	case 53:
		attron(COLOR_PAIR(53));
		break;
	case 54:
		attron(COLOR_PAIR(54));
		break;
	case 55:
		attron(COLOR_PAIR(55));
		break;
	case 56:
		attron(COLOR_PAIR(56));
		break;
	case 57:
		attron(COLOR_PAIR(57));
		break;
	case 58:
		attron(COLOR_PAIR(58));
		break;
	case 59:
		attron(COLOR_PAIR(59));
		break;
	case 60:
		attron(COLOR_PAIR(60));
		break;
	case 61:
		attron(COLOR_PAIR(61));
		break;
	case 62:
		attron(COLOR_PAIR(62));
		break;
	case 63:
		attron(COLOR_PAIR(63));
		break;
	case 64:
		attron(COLOR_PAIR(64));
		break;
	case 65:
		attron(COLOR_PAIR(65));
		break;
	case 66:
		attron(COLOR_PAIR(66));
		break;
	case 67:
		attron(COLOR_PAIR(67));
		break;
	case 68:
		attron(COLOR_PAIR(68));
		break;
	case 69:
		attron(COLOR_PAIR(69));
		break;
	case 70:
		attron(COLOR_PAIR(70));
		break;
	case 71:
		attron(COLOR_PAIR(71));
		break;
	case 72:
		attron(COLOR_PAIR(72));
		break;
	case 73:
		attron(COLOR_PAIR(73));
		break;
	case 74:
		attron(COLOR_PAIR(74));
		break;
	case 75:
		attron(COLOR_PAIR(75));
		break;
	case 76:
		attron(COLOR_PAIR(76));
		break;
	case 77:
		attron(COLOR_PAIR(77));
		break;
	case 78:
		attron(COLOR_PAIR(78));
		break;
	case 79:
		attron(COLOR_PAIR(79));
		break;
	case 80:
		attron(COLOR_PAIR(80));
		break;
	case 81:
		attron(COLOR_PAIR(81));
		break;
	case 82:
		attron(COLOR_PAIR(82));
		break;
	case 83:
		attron(COLOR_PAIR(83));
		break;
	case 84:
		attron(COLOR_PAIR(84));
		break;
	case 85:
		attron(COLOR_PAIR(85));
		break;
	case 86:
		attron(COLOR_PAIR(86));
		break;
	case 87:
		attron(COLOR_PAIR(87));
		break;
	case 88:
		attron(COLOR_PAIR(88));
		break;
	case 89:
		attron(COLOR_PAIR(89));
		break;
	case 90:
		attron(COLOR_PAIR(90));
		break;
	case 91:
		attron(COLOR_PAIR(91));
		break;
	case 92:
		attron(COLOR_PAIR(92));
		break;
	case 93:
		attron(COLOR_PAIR(93));
		break;
	case 94:
		attron(COLOR_PAIR(94));
		break;
	case 95:
		attron(COLOR_PAIR(95));
		break;
	case 96:
		attron(COLOR_PAIR(96));
		break;
	case 97:
		attron(COLOR_PAIR(97));
		break;
	case 98:
		attron(COLOR_PAIR(98));
		break;
	case 99:
		attron(COLOR_PAIR(99));
		break;
	case 100:
		attron(COLOR_PAIR(100));
		break;
	case 101:
		attron(COLOR_PAIR(101));
		break;
	case 102:
		attron(COLOR_PAIR(102));
		break;
	case 103:
		attron(COLOR_PAIR(103));
		break;
	case 104:
		attron(COLOR_PAIR(104));
		break;
	case 105:
		attron(COLOR_PAIR(105));
		break;
	case 106:
		attron(COLOR_PAIR(106));
		break;
	case 107:
		attron(COLOR_PAIR(107));
		break;
	case 108:
		attron(COLOR_PAIR(108));
		break;
	case 109:
		attron(COLOR_PAIR(109));
		break;
	case 110:
		attron(COLOR_PAIR(110));
		break;
	case 111:
		attron(COLOR_PAIR(111));
		break;
	case 112:
		attron(COLOR_PAIR(112));
		break;
	case 113:
		attron(COLOR_PAIR(113));
		break;
	case 114:
		attron(COLOR_PAIR(114));
		break;
	case 115:
		attron(COLOR_PAIR(115));
		break;
	case 116:
		attron(COLOR_PAIR(116));
		break;
	case 117:
		attron(COLOR_PAIR(117));
		break;
	case 118:
		attron(COLOR_PAIR(118));
		break;
	case 119:
		attron(COLOR_PAIR(119));
		break;
	case 120:
		attron(COLOR_PAIR(120));
		break;
	case 121:
		attron(COLOR_PAIR(121));
		break;
	case 122:
		attron(COLOR_PAIR(122));
		break;
	case 123:
		attron(COLOR_PAIR(123));
		break;
	case 124:
		attron(COLOR_PAIR(124));
		break;
	case 125:
		attron(COLOR_PAIR(125));
		break;
	case 126:
		attron(COLOR_PAIR(126));
		break;
	case 127:
		attron(COLOR_PAIR(127));
		break;
	case 128:
		attron(COLOR_PAIR(128));
		break;
	case 129:
		attron(COLOR_PAIR(129));
		break;
	case 130:
		attron(COLOR_PAIR(130));
		break;
	case 131:
		attron(COLOR_PAIR(131));
		break;
	case 132:
		attron(COLOR_PAIR(132));
		break;
	case 133:
		attron(COLOR_PAIR(133));
		break;
	case 134:
		attron(COLOR_PAIR(134));
		break;
	case 135:
		attron(COLOR_PAIR(135));
		break;
	case 136:
		attron(COLOR_PAIR(136));
		break;
	case 137:
		attron(COLOR_PAIR(137));
		break;
	case 138:
		attron(COLOR_PAIR(138));
		break;
	case 139:
		attron(COLOR_PAIR(139));
		break;
	case 140:
		attron(COLOR_PAIR(140));
		break;
	case 141:
		attron(COLOR_PAIR(141));
		break;
	case 142:
		attron(COLOR_PAIR(142));
		break;
	case 143:
		attron(COLOR_PAIR(143));
		break;
	case 144:
		attron(COLOR_PAIR(144));
		break;
	case 145:
		attron(COLOR_PAIR(145));
		break;
	case 146:
		attron(COLOR_PAIR(146));
		break;
	case 147:
		attron(COLOR_PAIR(147));
		break;
	case 148:
		attron(COLOR_PAIR(148));
		break;
	case 149:
		attron(COLOR_PAIR(149));
		break;
	case 150:
		attron(COLOR_PAIR(150));
		break;
	case 151:
		attron(COLOR_PAIR(151));
		break;
	case 152:
		attron(COLOR_PAIR(152));
		break;
	case 153:
		attron(COLOR_PAIR(153));
		break;
	case 154:
		attron(COLOR_PAIR(154));
		break;
	case 155:
		attron(COLOR_PAIR(155));
		break;
	case 156:
		attron(COLOR_PAIR(156));
		break;
	case 157:
		attron(COLOR_PAIR(157));
		break;
	case 158:
		attron(COLOR_PAIR(158));
		break;
	case 159:
		attron(COLOR_PAIR(159));
		break;
	case 160:
		attron(COLOR_PAIR(160));
		break;
	case 161:
		attron(COLOR_PAIR(161));
		break;
	case 162:
		attron(COLOR_PAIR(162));
		break;
	case 163:
		attron(COLOR_PAIR(163));
		break;
	case 164:
		attron(COLOR_PAIR(164));
		break;
	case 165:
		attron(COLOR_PAIR(165));
		break;
	case 166:
		attron(COLOR_PAIR(166));
		break;
	case 167:
		attron(COLOR_PAIR(167));
		break;
	case 168:
		attron(COLOR_PAIR(168));
		break;
	case 169:
		attron(COLOR_PAIR(169));
		break;
	case 170:
		attron(COLOR_PAIR(170));
		break;
	case 171:
		attron(COLOR_PAIR(171));
		break;
	case 172:
		attron(COLOR_PAIR(172));
		break;
	case 173:
		attron(COLOR_PAIR(173));
		break;
	case 174:
		attron(COLOR_PAIR(174));
		break;
	case 175:
		attron(COLOR_PAIR(175));
		break;
	case 176:
		attron(COLOR_PAIR(176));
		break;
	case 177:
		attron(COLOR_PAIR(177));
		break;
	case 178:
		attron(COLOR_PAIR(178));
		break;
	case 179:
		attron(COLOR_PAIR(179));
		break;
	case 180:
		attron(COLOR_PAIR(180));
		break;
	case 181:
		attron(COLOR_PAIR(181));
		break;
	case 182:
		attron(COLOR_PAIR(182));
		break;
	case 183:
		attron(COLOR_PAIR(183));
		break;
	case 184:
		attron(COLOR_PAIR(184));
		break;
	case 185:
		attron(COLOR_PAIR(185));
		break;
	case 186:
		attron(COLOR_PAIR(186));
		break;
	case 187:
		attron(COLOR_PAIR(187));
		break;
	case 188:
		attron(COLOR_PAIR(188));
		break;
	case 189:
		attron(COLOR_PAIR(189));
		break;
	case 190:
		attron(COLOR_PAIR(190));
		break;
	case 191:
		attron(COLOR_PAIR(191));
		break;
	case 192:
		attron(COLOR_PAIR(192));
		break;
	case 193:
		attron(COLOR_PAIR(193));
		break;
	case 194:
		attron(COLOR_PAIR(194));
		break;
	case 195:
		attron(COLOR_PAIR(195));
		break;
	case 196:
		attron(COLOR_PAIR(196));
		break;
	case 197:
		attron(COLOR_PAIR(197));
		break;
	case 198:
		attron(COLOR_PAIR(198));
		break;
	case 199:
		attron(COLOR_PAIR(199));
		break;
	case 200:
		attron(COLOR_PAIR(200));
		break;
	case 201:
		attron(COLOR_PAIR(201));
		break;
	case 202:
		attron(COLOR_PAIR(202));
		break;
	case 203:
		attron(COLOR_PAIR(203));
		break;
	case 204:
		attron(COLOR_PAIR(204));
		break;
	case 205:
		attron(COLOR_PAIR(205));
		break;
	case 206:
		attron(COLOR_PAIR(206));
		break;
	case 207:
		attron(COLOR_PAIR(207));
		break;
	case 208:
		attron(COLOR_PAIR(208));
		break;
	case 209:
		attron(COLOR_PAIR(209));
		break;
	case 210:
		attron(COLOR_PAIR(210));
		break;
	case 211:
		attron(COLOR_PAIR(211));
		break;
	case 212:
		attron(COLOR_PAIR(212));
		break;
	case 213:
		attron(COLOR_PAIR(213));
		break;
	case 214:
		attron(COLOR_PAIR(214));
		break;
	case 215:
		attron(COLOR_PAIR(215));
		break;
	case 216:
		attron(COLOR_PAIR(216));
		break;
	case 217:
		attron(COLOR_PAIR(217));
		break;
	case 218:
		attron(COLOR_PAIR(218));
		break;
	case 219:
		attron(COLOR_PAIR(219));
		break;
	case 220:
		attron(COLOR_PAIR(220));
		break;
	case 221:
		attron(COLOR_PAIR(221));
		break;
	case 222:
		attron(COLOR_PAIR(222));
		break;
	case 223:
		attron(COLOR_PAIR(223));
		break;
	case 224:
		attron(COLOR_PAIR(224));
		break;
	case 225:
		attron(COLOR_PAIR(225));
		break;
	case 226:
		attron(COLOR_PAIR(226));
		break;
	case 227:
		attron(COLOR_PAIR(227));
		break;
	case 228:
		attron(COLOR_PAIR(228));
		break;
	case 229:
		attron(COLOR_PAIR(229));
		break;
	case 230:
		attron(COLOR_PAIR(230));
		break;
	case 231:
		attron(COLOR_PAIR(231));
		break;
	case 232:
		attron(COLOR_PAIR(232));
		break;
	case 233:
		attron(COLOR_PAIR(233));
		break;
	case 234:
		attron(COLOR_PAIR(234));
		break;
	case 235:
		attron(COLOR_PAIR(235));
		break;
	case 236:
		attron(COLOR_PAIR(236));
		break;
	case 237:
		attron(COLOR_PAIR(237));
		break;
	case 238:
		attron(COLOR_PAIR(238));
		break;
	case 239:
		attron(COLOR_PAIR(239));
		break;
	case 240:
		attron(COLOR_PAIR(240));
		break;
	case 241:
		attron(COLOR_PAIR(241));
		break;
	case 242:
		attron(COLOR_PAIR(242));
		break;
	case 243:
		attron(COLOR_PAIR(243));
		break;
	case 244:
		attron(COLOR_PAIR(244));
		break;
	case 245:
		attron(COLOR_PAIR(245));
		break;
	case 246:
		attron(COLOR_PAIR(246));
		break;
	case 247:
		attron(COLOR_PAIR(247));
		break;
	case 248:
		attron(COLOR_PAIR(248));
		break;
	case 249:
		attron(COLOR_PAIR(249));
		break;
	case 250:
		attron(COLOR_PAIR(250));
		break;
	case 251:
		attron(COLOR_PAIR(251));
		break;
	case 252:
		attron(COLOR_PAIR(252));
		break;
	case 253:
		attron(COLOR_PAIR(253));
		break;
	case 254:
		attron(COLOR_PAIR(254));
		break;
	case 255:
		attron(COLOR_PAIR(255));
		break;
	default:
		attron(COLOR_PAIR(0));
		break;
	}
}

void setupColorPairs() {
   	for (short i{0}; i < colorPairs.size(); ++i) // the first color pair can't be assigned
    {
        ColorPair *p = &colorPairs[i];
        cout << "trying p: " << i << ", idbg: " << p->pairIdBG << ", f: " << p->foreground << "\n\r";
        if (init_pair(p->pairIdBG, p->foreground, p->pairIdBG) == ERR)
        {
            cout << "init_pair errored\n\r";
        }

        short foreground, background;
        pair_content(i, &foreground, &background);
        cout << "p: " << i << ", f: " << foreground << ", b: " << background << "\n\r";
    }
}
