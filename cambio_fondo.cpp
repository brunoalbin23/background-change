#include <windows.h>
#include <iostream>

using namespace std;

int main() {
    const wchar_t *file = L"img/cr7.jpg";
    
    bool result = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void *)file, SPIF_UPDATEINIFILE | SPIF_SENDCHANGE);

    if (result) {
        cout << "Fondo cambiado correctamente." << endl;
    } else {
        cout << "Error al cambiar el fondo. Código de error: " << GetLastError() << endl;
    }

    return 0;
}
