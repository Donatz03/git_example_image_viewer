#ifndef GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
#define GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H

#include <string>

class BitmapImage {
public:
    BitmapImage();

    ~BitmapImage();

    bool load(std::string name);
    bool save(std::string name);
    bool resize(int width, int height);

private:
    int width, height;
    char channels;
    char depth;
    int *buffer;
    std::string name;
};


#endif //GIT_EXAMPLE_IMAGE_VIEWER_BITMAPIMAGE_H
