/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol C2ObjcServerCallBackExt <NSObject>
-(void)onDisconnect:(id)disconnect port:(unsigned short)port;
-(void)onConnected:(id)connected port:(unsigned short)port;
-(void)onRecv:(id)recv port:(unsigned short)port data:(id)data length:(unsigned)length;
@end

