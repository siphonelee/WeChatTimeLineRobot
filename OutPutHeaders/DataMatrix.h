/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface DataMatrix : XXUnknownSuperclass {
	int dim;
	bool** data;
}
-(void)dealloc;
-(id)toString;
-(bool)valueAt:(int)at y:(int)y;
-(void)set:(bool)set x:(int)x y:(int)y;
-(int)dimension;
-(id)initWith:(int)with;
@end

