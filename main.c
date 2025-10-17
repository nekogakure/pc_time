/**
 *  このプログラムは、私の親がPCの利用時間をチェックするために、カレンダーに利用時間を書いているのですが、
 *  私がPCを使い始めるときにまぁ私は記入をわすれます。ので、PCを使い始めるときにお知らせするプログラムです。
 *
 *  (c) 2025 nekogakure.
 *  このプログラムの著作権はnekogakureに帰属しますが、クレジット表記なしでの使用、改変、再配布を許可します。
 *  このプログラムは無保証で提供されます。使用に伴ういかなる損害についても責任を負いません。
 *  商用利用、個人利用、非商用利用に問わず自由に使用できます。（誰が使うねん）
 */

#include <windows.h>
#include <winuser.h>
#include <locale.h>

int WINAPI WinMain(const HINSTANCE hInstance, HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine, const int nShowCmd) {
    setlocale(LC_CTYPE, "JA");
    MessageBoxW(NULL, L"PC開始時間かけ！！！", L"書け！！！！！！", MB_ICONWARNING);

    // 最前面に表示
    const HWND hWnd = FindWindowW(NULL, L"書け！！！！！！");
    if (hWnd != NULL) {
        SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
    }
}