#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    std::string ruta = "image.png";  // La imagen debe estar en la misma carpeta que el .exe

    // Cargar la imagen
    cv::Mat img = cv::imread(ruta);
    if (img.empty()) {
        std::cerr << "Error: No se pudo cargar la imagen." << std::endl;
        return -1;
    }

    // Crear una ventana sin bordes para simular fondo de pantalla
    cv::namedWindow("Sorpresa!", cv::WINDOW_NORMAL);
    cv::setWindowProperty("Sorpresa!", cv::WND_PROP_FULLSCREEN, cv::WINDOW_FULLSCREEN);

    // Mostrar la imagen
    cv::imshow("Sorpresa!", img);
    cv::waitKey(0); // Espera hasta que se presione una tecla

    return 0;
}