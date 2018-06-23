//
//  ledLine.hpp
//  Ellydeez
//
//  Created by Pascal Baltazar on 19/05/2018.
//

#ifndef ledLine_hpp
#define ledLine_hpp

#include "outLine.hpp"

class LedLine : public OutLine
{
public:
    void setBrightness(int brightness);
    void setDither(int dither);
    void sendLine();
    
private:
    uint8_t bright = 255;
    uint8_t mapBright[256] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 12, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 15, 15, 15, 15, 16, 16, 16, 16, 17, 17, 17, 17, 18, 18, 18, 18, 19, 19, 19, 20, 20, 20, 21, 21, 21, 22, 22, 22, 23, 23, 23, 24, 24, 24, 25, 25, 25, 26, 26, 27, 27, 28, 28, 28, 29, 29, 30, 30, 31, 31, 31};
    uint8_t mapCol[256] = { 0, 3, 8, 12, 15, 19, 24, 28, 31, 35, 40, 43, 47, 52, 56, 61, 65, 68, 73, 77, 80, 84, 89, 93, 96, 102, 105, 110, 114, 117, 121, 126, 130, 133, 137, 142, 145, 151, 154, 158, 163, 167, 170, 175, 179, 182, 186, 191, 195, 200, 204, 207, 212, 216, 219, 223, 228, 232, 235, 239, 244, 249, 253, 128, 133, 137, 140, 144, 149, 153, 156, 161, 165, 170, 174, 177, 182, 186, 189, 193, 198, 202, 205, 209, 214, 219, 223, 226, 230, 235, 239, 242, 246, 251, 171, 174, 177, 182, 186, 191, 195, 198, 202, 207, 211, 214, 219, 223, 226, 230, 235, 239, 244, 247, 251, 191, 195, 200, 204, 207, 212, 216, 221, 225, 228, 232, 237, 240, 244, 249, 253, 205, 209, 214, 219, 223, 226, 230, 235, 239, 242, 246, 251, 213, 216, 219, 225, 228, 232, 237, 240, 244, 249, 253, 219, 223, 228, 232, 237, 240, 244, 249, 253, 225, 228, 232, 237, 240, 244, 249, 253, 228, 232, 237, 240, 244, 249, 253, 230, 235, 239, 242, 246, 251, 232, 235, 239, 244, 247, 251, 233, 237, 242, 246, 249, 236, 239, 242, 246, 251, 237, 240, 244, 247, 251, 239, 242, 247, 251, 239, 244, 247, 251, 240, 244, 249, 253, 242, 246, 251, 255, 244, 249, 253, 244, 247, 251, 242, 246, 251, 243, 247, 251, 244, 247, 251, 244, 249, 253, 246, 249, 253, 247, 253, 246, 251, 246, 249, 253, 247, 251, 246, 251, 247, 249, 255};

    
};
//--------------------------------------------------------------

#endif /* ledLine_hpp */
