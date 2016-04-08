/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IMsgExt.h"
#import "IDownloadImageExt.h"

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol MsgDataSaveLogicDelegate;

@interface MsgDataSaveLogic : XXUnknownSuperclass <IDownloadImageExt, IMsgExt> {
	id<MsgDataSaveLogicDelegate> m_delegate;
	NSMutableDictionary* m_dicMsgDownloading;
	NSMutableArray* m_arrMsgToSave;
	NSMutableArray* m_arrMsgExpired;
	BOOL m_bOK;
	BOOL m_bExpired;
	BOOL m_bFail;
	BOOL m_bEnd;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnModMsg:(id)msg MsgWrap:(id)wrap;
-(void)OnMsgDownloadVideoExpiredFail:(id)fail MsgWrap:(id)wrap;
-(void)OnDownloadImageOk:(id)ok;
-(void)OnDownloadImageExpired:(id)expired;
-(void)OnDownloadImageFail:(id)fail;
-(void)checkDownLoadEnd;
-(void)onSave:(id)save;
-(void)startDownloadImg:(id)img;
-(void)StartDownloadVideo:(id)video;
-(void)saveOneByOne:(id)one;
-(void)saveMsg:(id)msg completionBlock:(id)block;
-(id)imagePath:(id)path;
-(void)endLogic;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
@end

