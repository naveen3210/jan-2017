using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SubscribeEvent
{
    class Program
    {
        static void Main(string[] args)

        { 
            var watcher = new FileSystemWatcher(@"C:\Windows\Temp");
            watcher.EnableRaisingEvents = true;
            watcher.Created += new FileSystemEventHandler(OnCreated);
            watcher.Deleted += new FileSystemEventHandler( Watcher_Deleted);
            watcher.Renamed += Watcher_Renamed;
            Console.ReadKey(true);
        }

        private static void Watcher_Renamed(object sender, RenamedEventArgs e)
        {
            Console.WriteLine("{0} :{1}", e.ChangeType, e.Name);
        }

        private static void Watcher_Deleted(object sender, FileSystemEventArgs e)
        {
            Console.WriteLine("{0} :{1}", e.ChangeType, e.Name);
        }

        static void OnCreated(object sender, FileSystemEventArgs e)
        {
            Console.WriteLine("{0} :{1}", e.ChangeType, e.Name);
        }
    }
}
