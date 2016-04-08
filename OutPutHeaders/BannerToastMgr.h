/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "IMsgExt.h"
#import "MMService.h"

@class MMWindowController, VoicePrintLogicControllerFactory, NSMutableArray, NSString, NSMutableDictionary;

@interface BannerToastMgr : MMService <MMService, IMsgExt> {
	NSMutableArray* m_msgDic;
	NSMutableDictionary* m_friendRecommandMsgs;
	NSMutableDictionary* m_dicSecurityBannerMsgs;
	MMWindowController* m_windowController;
	VoicePrintLogicControllerFactory* m_verifyLogicController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)logUniDirectionFriendBanner:(id)banner opType:(unsigned long)type;
-(void)logRecommandFriendBanner:(id)banner opType:(unsigned long)type recCount:(unsigned long)count;
-(void)logMainFrameBanner:(unsigned long)banner opType:(unsigned long)type;
-(void)deleteSecurityBannerMsg:(id)msg;
-(id)getSecurityBannerWording:(id)wording;
-(BOOL)shouldShowSecurityBannerToUser:(id)user;
-(id)pathForFriendRec;
-(void)loadFriendRecMsgs;
-(void)saveFriendRecMsgs;
-(void)deleteRecommandFriendMsg:(id)msg;
-(BOOL)shouldRecommandFriendToUser:(id)user;
-(void)HideVoicePrintVerifyWindow;
-(void)showVoicePrintVerifyView;
-(void)OnGetNewXmlMsg:(id)msg Type:(id)type MsgWrap:(id)wrap;
-(void)handleBannerMsg:(id)msg;
-(id)makeMsgByType:(int)type;
-(void)loadMsgs;
-(void)saveOneMsg:(id)msg;
-(void)saveMsgs;
-(id)pathForBannerMsg;
-(id)getRootDir;
-(void)trigBanner;
-(id)getShowMsg;
-(void)dealloc;
-(id)init;
@end

