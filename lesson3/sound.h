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

	short SquareWave(double time, double freq, double amp) {
		short result = 0;
		int tpc = 44100 / freq; // ticks per cycle
		int cyclepart = int(time) % tpc;
		int halfcycle = tpc / 2;
		short amplitude = 32767 * amp;
		if (cyclepart < halfcycle) {
			result = amplitude;
		}
		return result;
	}

	short Noise(double amp) {
		short result = 0;
		short amplitude = 32767 * amp;
		result = rand() % amplitude;
		return result;
	}
}

#endif
