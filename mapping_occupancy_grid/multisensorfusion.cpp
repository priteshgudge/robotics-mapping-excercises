#include <iostream>
#include <math.h>
using namespace std;

const int mapWidth =  2;
const int mapHeight = 2;

void sensorFusion(double m1[][mapWidth], double m2[][mapWidth])
{
    //*#############Code the Sensor Fusion Function############*//
    // Fuse the measurments of the two maps and print the resulting 
    //map in this form:
    //a  b
    //c  d
    double map[mapHeight][mapWidth];
    for (int i =0 ; i < mapHeight; i ++){
        
        for (int j = 0; j < mapWidth ; j ++){
            
            map[i][j] = 1 - (( 1- m1[i][j]) * (1 - m2[i][j]));
        }
    }
    
    for (int i =0 ; i < mapHeight; i ++){
        
        for (int j = 0; j < mapWidth ; j ++){
            
            printf("%3.2f ",map[i][j]);
        }
        printf("\n");
            
        }
    
    // double map[mapHeight][mapWidth];
    // for (int i = 0 ; i < mapHeight; i ++){
        
    //     for (int j = 0 ; j < mapWidth; j++){
    //         map[i][j] = max(m1[i][j],m2[i][j]);
    //     }
    // }
    //   for (int i =0 ; i < mapHeight; i ++){
        
    //     for (int j = 0; j < mapWidth ; j ++){
            
    //         printf("%f\t",map[i][j]);
    //     }
    //     printf("\n");
            
    //     }
   
    

}

int main()
{

    double m1[mapHeight][mapWidth] = { { 0.9, 0.6 }, { 0.1, 0.5 } };
    double m2[mapHeight][mapWidth] = { { 0.3, 0.4 }, { 0.4, 0.3 } };
    sensorFusion(m1, m2);

    return 0;
}

