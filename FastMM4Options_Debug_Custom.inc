// user defined FastMM options, if required (descriptions and include see: FastMM4Options.inc)

{$define CheckHeapForCorruption} // helps detecting usage of freed objects!
{$define FullDebugMode} // use fullDebug
{$undef RawStackTraces} // prevents application from slowing down too much
{$define CatchUseOfFreedInterfaces} // very useful!
{$define ClearLogFileOnStartup} // need fresh log-start, since log files could get really big
{$define DisableLoggingOfMemoryDumps} // too cluttered, not neccessary in our context
{$define RequireIDEPresenceForLeakReporting} // no need for leakreporting for standalone application

