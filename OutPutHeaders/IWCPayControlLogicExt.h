/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol IWCPayControlLogicExt <NSObject>
@optional
-(void)OnRealnameRegistered:(id)registered;
-(void)OnFinishedLoadingAndGoToFirstViewController:(id)firstViewController;
-(void)OnFinishedWCPayInnerPayLogic:(id)logic CompleteStatus:(int)status ExtraInfo:(id)info;
-(void)OnPayCardListChanged:(id)changed;
-(void)OnGetLocalCachePayCardList:(id)list;
-(void)OnFinishedWCPayLogic:(id)logic CompleteStatus:(int)status;
-(void)OnPreFinishedWCPayLogic:(id)logic waitUntilDone:(BOOL*)done;
@end

