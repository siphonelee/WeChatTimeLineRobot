/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface PLCrashMachExceptionPort : XXUnknownSuperclass {
	unsigned _mask;
	unsigned _port;
	int _behavior;
	int _flavor;
}
@property(readonly, assign, nonatomic) int flavor;
@property(readonly, assign, nonatomic) int behavior;
@property(readonly, assign, nonatomic) unsigned mask;
@property(readonly, assign, nonatomic) unsigned server_port;
+(id)exceptionPortsForThread:(unsigned)thread mask:(unsigned)mask error:(id*)error;
+(id)exceptionPortsForTask:(unsigned)task mask:(unsigned)mask error:(id*)error;
-(BOOL)registerForThread:(unsigned)thread previousPortSet:(id*)set error:(id*)error;
-(BOOL)registerForTask:(unsigned)task previousPortSet:(id*)set error:(id*)error;
-(void)dealloc;
-(id)initWithServerPort:(unsigned)serverPort mask:(unsigned)mask behavior:(int)behavior flavor:(int)flavor;
@end

