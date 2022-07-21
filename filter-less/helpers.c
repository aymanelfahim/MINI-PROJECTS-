#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
        int gray = round( (image[i][j].rgbtBlue + image[i][j].rgbtRed +image[i][j].rgbtGreen)/3.00);
        image[i][j].rgbtRed = gray;
        image[i][j].rgbtBlue = gray;
        image[i][j].rgbtGreen = gray;
        }
    }
    return;
}

// Convert image to sepia
int limit(int rgb)
    {
        if (rgb>255)
        {
        rgb=255;

    }
    return rgb;
    }
void sepia(int height, int width, RGBTRIPLE image[height][width])
{


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
    int red=limit(round(image[i][j].rgbtRed*0.393+image[i][j].rgbtGreen*0.769+image[i][j].rgbtBlue*0.189));
    int green =limit(round(image[i][j].rgbtRed*0.349+image[i][j].rgbtGreen*0.686+image[i][j].rgbtBlue*0.168));
    int blue=limit(round(image[i][j].rgbtRed*0.272+image[i][j].rgbtGreen*0.534+image[i][j].rgbtBlue*0.131));
    image[i][j].rgbtRed=red;
    image[i][j].rgbtGreen=green;
    image[i][j].rgbtBlue=blue;
}

    }

return;
}

// Reflect image horizontally


void reflect(int height, int width, RGBTRIPLE image[height][width])
{
      for (int i = 0; i < height; i++)
      {
          for (int j = 0; j < round(width*0.5); j++)
          {
            int red=image[i][j].rgbtRed;
            image[i][j].rgbtRed=image[i][width-j].rgbtRed;
            image[i][width-j].rgbtRed=red;
             int green=image[i][j].rgbtGreen;
            image[i][j].rgbtGreen=image[i][width-j].rgbtGreen;
            image[i][width-j].rgbtGreen=green;
             int blue=image[i][j].rgbtBlue;
            image[i][j].rgbtBlue=image[i][width-j].rgbtBlue;
            image[i][width-j].rgbtBlue=blue;

          }
      }

    return;
}
// Blur image
void average(int a , int b , int c )
void blur(int height, int width, RGBTRIPLE image[height][width])
{
     for (int i = 0; i < height; i++)
     {
         for (int j = 0; j < height; j++)
         {
            image[i][j].rgbtRed=

         }
     }
    return;
}
int average(int a , int b , int c )
{
    int average=round((a+b+c)/3 )
    return average;
}
