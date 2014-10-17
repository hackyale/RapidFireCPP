CVector<double> circleDegrees;

void addDegreesToVector(CVector<double> &circ, int subdivisions)
{
	double stepSize = 360.0 / ((double) subdivisions);
	for (double deg = 0; deg < 360.0; deg += stepSize) {
		circ.addItem(deg);
	}
}

addDegreesToVector(circleDegrees, 4);

Sit sitTrick;
sitTrick.doTrick(); // print out "I'm sitting!"

Trick unknown = (Trick) sitTrick;
unknown.doTrick(); // print out "I'm sitting!"
