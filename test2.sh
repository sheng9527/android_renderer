ANDROID_EGL_LIB=libEGL.so ANDROID_GLESv1_LIB=libGLESv1_CM.so ANDROID_GLESv2_LIB=libGLESv2.so LD_LIBRARY_PATH=. strace -o log ./emulator_test_renderer 
