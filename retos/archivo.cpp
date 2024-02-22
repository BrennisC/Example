#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void mostrarImagen(unsigned char *data, int width, int height, int channels)
{
    // Imprimir la imagen en la consola
    for (int y = 0; y < height; ++y)
    {
        for (int x = 0; x < width; ++x)
        {
            for (int c = 0; c < channels; ++c)
            {
                std::cout << static_cast<int>(data[(y * width + x) * channels + c]) << " ";
            }
            std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    // Cargar la imagen desde el archivo
    int width, height, channels;
    unsigned char *data = stbi_load("imagen.jpg", &width, &height, &channels, 0);

    // Verificar si la imagen se cargó correctamente
    if (!data)
    {
        std::cerr << "No se pudo cargar la imagen." << std::endl;
        return -1;
    }

    // Mostrar la imagen en la consola
    mostrarImagen(data, width, height, channels);

    // Liberar la memoria utilizada por la imagen
    stbi_image_free(data);

#ifdef _WIN32
    system("pause");
#else
    sleep(5);
#endif

    return 0;
}
