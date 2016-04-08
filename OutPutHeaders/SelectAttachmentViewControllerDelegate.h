/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SelectAttachmentViewControllerDelegate <NSObject>
-(BOOL)canShowCardPkgEntry;
-(BOOL)canShowSight;
-(BOOL)canShowServiceEntry;
-(BOOL)canShowRedEnvelopesEntey;
-(BOOL)canShowTransferMoneyEntry;
-(id)getAttachmentViewServiceAppList;
-(void)didSelectAttachmentAtIndex:(unsigned)index;
@optional
-(void)onMultiTalkButtonClicked:(id)clicked;
-(void)onRedEnvelopesClicked:(id)clicked;
-(void)onVoiceInputButtonClicked:(id)clicked;
-(void)onTransferButtonClicked:(id)clicked;
-(void)demoSendShortVideo:(id)video;
-(void)onServiceButtonClicked:(id)clicked;
-(void)onMyFavoritesButtonClicked:(id)clicked;
-(void)on3rdServiceButtonClicked:(id)clicked;
-(void)on3rdRecommandButtonClicked:(id)clicked;
-(void)onVoiceInputClicked:(id)clicked;
-(void)onVoiceVoipButtonClicked:(id)clicked;
-(void)onVideoVoipButtonClicked:(id)clicked;
-(void)onShareCardButtonClicked:(id)clicked;
-(void)onLocationButtonClicked:(id)clicked;
-(void)onCameraControllerClicked:(id)clicked;
-(void)onMediaBrowserClicked:(id)clicked;
@end

