// user defined FastMM options, if required (descriptions and include see: FastMM4Options.inc)

{$define FullDebugMode} // use fullDebug for extended fastMM functionality
{$define ClearLogFileOnStartup} // need fresh log-start, since log files could get really big
{$define DisableLoggingOfMemoryDumps} // too cluttered, not neccessary in our context

//{$define CheckHeapForCorruption} // very slow, use with care
//{$define CatchUseOfFreedInterfaces} // warning! disables checking of blocks modified after being freed!
//{$undef RawStackTraces} // RawStackTraces are slow, but more accurate - undef for performance analysis

