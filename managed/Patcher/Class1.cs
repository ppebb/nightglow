using System;
using System.Runtime.InteropServices;

namespace Patcher;

public class Class1
{
    [NativeCallable(EntryPoint = "add", CallingConvention = CallingConvention.StdCall)]
    public static int Add(int a, int b)
    {
        return a + b;
    }
}
