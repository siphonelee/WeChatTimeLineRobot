/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ChatMigrationServerLogicDelegate <NSObject>
@optional
-(void)onTransferError:(int)error;
-(void)onTransferFinish;
-(void)onTransferSpeed:(float)speed;
-(void)onTransferProgress:(unsigned)progress processedSize:(unsigned)size;
-(void)onTransferStart;
-(void)onConfirmStart;
-(void)onDisconnect;
-(void)onConnected;
-(void)onGetQRCodeImgOffline:(id)offline;
-(void)onGetQRCodeImg:(id)img;
@end

