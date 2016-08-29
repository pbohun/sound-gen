#ifndef SOUND_H
#define SOUND_H

#include <math.h>

namespace sound {
	#define TWOPI 6.283185307

	short SineWave(double time, double freq, double amp) {
		short result;
		double tpc = 44100 / freq; // ticks per cycle
		double cycles = time / tpc;
		double rad = TWOPI * cycles;
		short amplitude = 32767 * amp;
		result = amplitude * sin(rad);
		return result;
	}
}

#endif
