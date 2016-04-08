/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface WCUtil : XXUnknownSuperclass {
}
+(id)getUxInfoWithInteract:(id)interact StartTime:(unsigned long long)time EndTime:(unsigned long long)time3;
+(BOOL)isUseWebpDownload;
+(BOOL)isUseWebpUpload;
+(BOOL)isExistGroupName:(id)name exceptGroup:(id)group;
+(BOOL)saveWCSetting:(id)setting;
+(id)getWCSetting;
+(id)pathForWCSetting;
+(void)endNetworkEvent:(int)event event:(int)event2;
+(void)beginNetworkEvent:(int)event event:(int)event2;
+(id)mergeHomePage:(unsigned long long)page minId:(unsigned long long)anId Left:(id)left Right:(id)right Added:(id)added Changed:(id)changed Deleted:(id)deleted;
+(id)mergeTimeline:(id)timeline Left:(id)left Right:(id)right Added:(id)added Changed:(id)changed Deleted:(id)deleted;
+(id)pathForSelfHomepageFPBackup;
+(id)pathForTimelineFPBackup;
+(id)pathForCurUserBGImg;
+(id)pathForBGImg:(id)bgimg;
+(id)pathForBGImgDir;
+(int)serverUrlTypeToLocalType:(int)localType;
+(int)localUrlTypeToServerType:(int)serverType;
+(int)serverActionTypeToLocalType:(int)localType;
+(int)localActionTypeToServerType:(int)serverType;
+(int)serverActionSceneToLocalScene:(int)localScene;
+(int)localActionSceneToServerScene:(int)serverScene;
+(int)serverContentDescSceneToLocalType:(int)localType;
+(int)localContentDescSceneToServerType:(int)serverType;
+(int)serverContentDescShowTypeToLocalType:(int)localType;
+(int)localContentDescShowTypeToServerType:(int)serverType;
+(int)serverContentTypeToLocalType:(int)localType;
+(int)localContentTypeToServerType:(int)serverType;
+(int)serverMediaSubTypeToLocalType:(int)localType serverSubType:(int)type;
+(int)localMediaSubTypeToServerType:(int)serverType localSubType:(int)type;
+(int)serverMediaTypeToLocalType:(int)localType;
+(int)localMediaTypeToServerType:(int)serverType;
+(id)getUserWCSucceedItemPath;
+(id)getUserWCFailedQueuePath;
+(id)uploadPathForUploadMedia:(id)uploadMedia;
+(id)getWCDBPath;
+(id)getUserWCMediaUploadDir;
+(id)getUserWCMediaDownloadDir;
+(id)getUserWCMediaDir;
+(id)getUserWCDBRootDir;
+(id)getUserWCRootDir;
+(id)getLocationUrl:(id)url;
@end

