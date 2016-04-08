/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface WXCMultiTalkApi : XXUnknownSuperclass {
}
+(id)sharedInstance;
-(BOOL)requestActiveGroupBriefInfoList:(id)list;
-(id)genMultiTalkClientGroupId;
-(BOOL)resumeFriendOrSendPokerToFriend;
-(BOOL)reawakeFriendOrSendPokerToFriend:(id)aFriend friendUserName:(id)name extData:(id)data;
-(BOOL)isMultiTalkWorking;
-(BOOL)holdMultiTalk:(BOOL)talk holdType:(int)type;
-(id)getTalkIngMember:(id)member;
-(BOOL)handleMultiTalkNotify:(id)notify;
-(BOOL)handleMultiTalkResp:(int)resp seq:(int)seq data:(id)data;
-(void)setOpenLog:(BOOL)log logLevel:(int)level;
-(void)setMultiTalkSpeaker:(BOOL)speaker;
-(int)VideoEncAndSend:(char*)send Length:(unsigned long)length Format:(void*)format resolutionMode:(int)mode cameraMode:(int)mode5;
-(void)closeMultiTalkVideo;
-(void)setMultiTalkVideo:(BOOL)video;
-(void)setMultiTalkMute:(BOOL)mute;
-(BOOL)modifyCustomGroupName:(id)name grpName:(id)name2;
-(BOOL)rejectMultiTalk:(id)talk;
-(BOOL)exitMultiTalk:(id)talk;
-(BOOL)addMultiTalkMember:(id)member wxGroupId:(id)anId addMemberList:(id)list;
-(BOOL)enterMultiTalk:(id)talk routId:(int)anId isAnswerCall:(BOOL)call;
-(BOOL)createMultiTalk:(id)talk wxGroupId:(id)anId memberList:(id)list;
-(BOOL)unInit;
-(void)setMultiTalkInfo:(id)info uin:(long)uin;
-(BOOL)init:(id)init wxDelegate:(id)delegate;
-(id)init;
@end

