// This quickie one time use program converts a JSON file describing terminal colors but in an inconvenient format for ncurses.  A Node.js program that writes a snippet C++.

const fs = require('fs');

const inputText = fs.readFileSync('colors.json');
const colors = JSON.parse(inputText);
var outputText = 'array<Color, 256> colors = {{\n';
for (var i = 0; i < 256; i++) {
    var c = colors[i];
    function con(color) { return Math.floor(color / 255 * 1000); };
    outputText += `\t{ "${c.name}", ${c.colorId}, ${con(c.rgb.r)}, ${con(c.rgb.g)}, ${con(c.rgb.b)} },\n`;
}

// take the last comma and newline off
outputText = outputText.substring(0, outputText.length - 2);

outputText += '\n}};\n';

// write it
fs.writeFileSync('convertedColors.h', outputText);
