/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PLCrashSignalHandler : XXUnknownSuperclass {
	darwin_sigaltstack _sigstk;
}
+(void)resetHandlers;
+(id)sharedHandler;
+(void)initialize;
-(BOOL)registerHandlerForSignal:(int)signal callback:(/*function-pointer*/ void*)callback context:(void*)context error:(id*)error;
-(BOOL)registerHandlerWithSignal:(int)signal error:(id*)error;
-(id)init;
@end

