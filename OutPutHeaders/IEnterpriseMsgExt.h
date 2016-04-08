/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */



@protocol IEnterpriseMsgExt
@optional
-(void)OnBeginDownloadAppData:(id)data Brand:(id)brand;
-(void)OnDelMsg:(id)msg Brand:(id)brand DelAll:(BOOL)all;
-(void)OnDelMsg:(id)msg Brand:(id)brand MsgWrap:(id)wrap;
-(void)OnDelMsg:(id)msg Brand:(id)brand;
-(void)OnSyncReadMsg:(id)msg Brand:(id)brand ReadMsgCount:(unsigned long)count;
-(void)OnUnReadEnterpriseMsgCountChange:(id)change Brand:(id)brand;
-(void)OnModEnterpriseMsg:(id)msg Brand:(id)brand WrapMsg:(id)msg3;
-(void)OnAddMsgListForSession:(id)session Brand:(id)brand;
-(void)OnAddEnterpriseMsg:(id)msg Brand:(id)brand WrapMsg:(id)msg3;
-(void)OnGetNewEnterpriseMsg:(id)msg Brand:(id)brand;
@end

