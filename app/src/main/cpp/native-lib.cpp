#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
/**
 * java 调用c代码的格式为：Java_"类的全名称"_"需要调用的方法名"
 * @param env
 * @return
 */
Java_com_aiitec_navivecdemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {

    //标准模板库（STL）提供了一个std::string类，
    // 其是std::basic_string的一个特化，它是一个容器类，
    // 可把字符串当作普通类型来使用，并支持比较、连接、遍历、STL算法、复制、赋值等等操作，这个类定义在<string>头文件中。
    //std::string类的构造函数
    std::string hello = "Hello from C++";
    //hello.c_str():将内容以C_string返回,相当于java中的toString()方法
    //在 dalvik 虚拟机中，NewStringUTF,native 方法创建的 String 对象都是 utf-16 编码
    return env->NewStringUTF(hello.c_str());

}


