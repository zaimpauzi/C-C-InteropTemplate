using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Security;
using System.Text;
using System.Threading.Tasks;

namespace Wrapper
{
    unsafe class Program
    {

        [DllImport(@"C:\Development\C#Interop\InteropTemplate\Debug\NativeLibrary.dll", EntryPoint = "InteropTarget_string", SetLastError = true, CallingConvention = CallingConvention.Cdecl)]
        private static extern void InteropTarget_string(string str);

        [DllImport(@"C:\Development\C#Interop\InteropTemplate\Debug\NativeLibrary.dll", EntryPoint = "InteropTarget_double", CallingConvention = CallingConvention.Cdecl)]
        [SuppressUnmanagedCodeSecurity]
        private static extern double InteropTarget_double(double[] number);


        static void Main(string[] args)
        {
            //Send string to native library.
            string textCSharp = "Hello World";
            InteropTarget_string(textCSharp);

            //Send number and get adding result from native library.
            double[] inputNumber = { 0.5 };
            double result = InteropTarget_double(inputNumber);
            Console.WriteLine();
            Console.Write($"The result after add with 0.5 is {result}");
        }
    }
}
