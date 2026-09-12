double* convertTemperature(double celsius, int* returnSize) {
    double*result=(double*)malloc(2*sizeof(double));

    double kelvin=celsius + 273.15;
    double fahrenheit=celsius*1.80 + 32.00;

    result[0]= kelvin;
    result[1]= fahrenheit;

    *returnSize =2;
    return result;
}