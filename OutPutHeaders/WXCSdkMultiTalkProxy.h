/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IWXTalkExt.h"

@class NSString;

@interface WXCSdkMultiTalkProxy : XXUnknownSuperclass <IWXTalkExt> {
	NSString* _tmpUniqueID;
	NSString* _mUserName;
	long _mUin;
}
@property(assign, nonatomic) long mUin;
@property(copy, nonatomic) NSString* mUserName;
@property(copy, nonatomic) NSString* tmpUniqueID;
-(void).cxx_destruct;
-(void)onMultiTalkRedirectOk;
-(id)convertGroupInfoItemListToGroupBriefInfoList:(id)groupBriefInfoList;
-(void)onMultiTalkAudioDeviceUnPlugin;
-(void)onMultiTalkAudioDevicePlugin;
-(void)onReceiveVideoMemberChangeMessage:(id)message extArray:(id)array;
-(void)onReceiveReawakeOrPokerMessage:(id)message extData:(id)data;
-(void)onRespPokerOrResumeFriend:(id)aFriend isSuccess:(BOOL)success;
-(void)onRespActiveGroupInfoItemList:(id)list isSuccess:(BOOL)success;
-(void)onCancelCreateMultiTalk:(id)talk;
-(void)onReceiveMissMultiTalk:(id)talk;
-(void)onInviteMultiTalk:(id)talk;
-(void)onVideoData:(unsigned long)data Bgra:(char*)bgra Width:(unsigned long)width Height:(unsigned long)height frontCamera:(BOOL)camera;
-(void)OnVideoStateChange:(BOOL)change VideoOn:(BOOL)on;
-(void)OnMuteStateChange:(BOOL)change;
-(void)OnSpeakerStateChange:(BOOL)change;
-(void)OnError:(id)error errorType:(int)type errorNo:(int)no;
-(void)OnRoomMemberChange:(id)change;
-(void)OnSysCallNotifyInterrupt:(int)interrupt;
-(void)OnInviteWXTalkModeResult:(BOOL)result groupId:(id)anId;
-(void)OnBeginStartDevice;
-(void)OnDeviceStartOK;
-(void)OnSelfAndOtherEntered;
-(void)OnReceiveOtherMemberTalkData;
-(void)OnDataConnectOK;
-(void)OnEnterTalkModeOK:(id)ok;
-(void)OnCreateTalkModeOKWithGroupId:(id)groupId;
-(id)getWXCMultiTalkMemberListWithVoiceGroupMemList:(id)voiceGroupMemList;
-(id)getWXCMultiTalkGroupWithRoomData:(id)roomData;
-(BOOL)requestActiveGroupBriefInfoList:(id)list;
-(long)getCurMultiTalkUin;
-(id)getCurMultiTalkUserName;
-(id)genMultiTalkClientGroupId;
-(BOOL)isMultiTalkWorking;
-(BOOL)holdMultiTalk:(BOOL)talk holdType:(int)type;
-(id)getTalkIngMember:(id)member;
-(BOOL)sendResumeFriendOrSendPokerToFriend:(id)aFriend friendUserName:(id)name extData:(id)data;
-(BOOL)modifyCutomMultiTalkGroupId:(id)anId grpName:(id)name;
-(BOOL)rejectMultiTalk:(id)talk;
-(BOOL)exitCurMultiTalk:(id)talk;
-(BOOL)addMultiTalkMemberToCurTalk:(id)curTalk wxGroupId:(id)anId addMemberList:(id)list;
-(BOOL)enterCurMultiTalk:(id)talk routId:(int)anId isAnswerCall:(BOOL)call;
-(BOOL)startCreateMultiTalk:(id)talk wxGroupId:(id)anId memberList:(id)list;
-(void)setCurMuteTalkInfo:(id)info uin:(long)uin;
-(int)VideoEncAndSend:(char*)send Length:(unsigned long)length Format:(void*)format resolutionMode:(int)mode cameraMode:(int)mode5;
-(BOOL)closeVideoRecvAndSend;
-(BOOL)setVideo:(BOOL)video;
-(BOOL)setMute:(BOOL)mute;
-(BOOL)getSpeakerStatus;
-(BOOL)setSpeaker:(BOOL)speaker;
-(void)dealloc;
-(id)init;
@end

