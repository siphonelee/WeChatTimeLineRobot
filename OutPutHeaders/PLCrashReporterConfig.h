/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface PLCrashReporterConfig : XXUnknownSuperclass {
	unsigned _signalHandlerType;
	unsigned _symbolicationStrategy;
}
@property(readonly, assign, nonatomic) unsigned symbolicationStrategy;
@property(readonly, assign, nonatomic) unsigned signalHandlerType;
+(id)defaultConfiguration;
-(id)initWithSignalHandlerType:(unsigned)signalHandlerType symbolicationStrategy:(unsigned)strategy;
-(id)init;
@end

