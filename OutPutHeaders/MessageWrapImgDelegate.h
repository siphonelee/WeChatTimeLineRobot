/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MessageWrapImgDelegate <NSObject>
@optional
-(void)onModMsgByBitSet:(id)set MsgWrap:(id)wrap BitSet:(unsigned long)set3;
-(id)onGetMsg:(id)msg LocalID:(unsigned long)anId Wrap:(id)wrap;
-(void)onGetBigImageErrorWithWrap:(id)wrap;
-(void)onGetBigImageResultWithWrap:(id)wrap image:(id)image imageData:(id)data isSaveImgOK:(BOOL*)ok;
-(void)onUploadImageRequestWithWrap:(id)wrap;
@end

