float UPID::updatePID(float deltaSeconds, float errorActual)
{
	float result = 0.0;

	errorAcumulado = (deltaSeconds * errorActual) + errorAcumulado;

	float derivativo = (errorActual - errorPasado) / deltaSeconds;

	result = (Kp * errorActual) + (Ki * errorAcumulado) + (Kd * derivativo);

	errorPasado = errorActual;

	return result;
}
