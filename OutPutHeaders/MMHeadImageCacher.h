/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "WeChat-Structs.h"

@class NSCache, NSMutableDictionary;

@interface MMHeadImageCacher : MMObject {
	NSMutableDictionary* _dictUseScene2MemoryCache;
	NSCache* _originContactsHeadImgCache;
}
-(void).cxx_destruct;
-(void)cleanupTempMemoryCache:(id)cache;
-(void)saveHeadImgToMemoryCacheIfNeed:(const HeadImgUseSceneConfig*)memoryCacheIfNeed usrName:(id)name headImg:(id)img;
-(id)memoryCacheForUseScene:(unsigned char)useScene;
-(BOOL)translateOldHeadImg:(id)img toCategory:(unsigned char)category isHD:(BOOL)hd;
-(BOOL)translateHeadImg:(id)img toCategory:(unsigned char)category fromPath:(id)path isHD:(BOOL)hd;
-(void)discardCachedHeadImgInFIC:(id)fic;
-(void)discardCachedHeadImgInMemory:(id)memory;
-(BOOL)deleteUsrHeadImgFromLocal:(id)local isHD:(BOOL)hd;
-(id)getImgSavePath:(id)path forCategory:(unsigned char)category isHD:(BOOL)hd;
-(unsigned long)cleanAllHeadImage;
-(void)cleanupAllMemoryCache;
-(void)addAutoCleanLocalFileTask;
-(void)fixSelfHeadImgByLocalImg;
-(BOOL)createEmptyUsrImgInLocal:(id)local;
-(BOOL)saveImgDataToFile:(id)file file:(id)file2;
-(BOOL)saveUsrImgToLocal:(id)local withData:(id)data forCategory:(unsigned char)category isHD:(BOOL)hd forceReload:(BOOL)reload saveAsTemp:(BOOL)temp;
-(BOOL)saveUsrImgToLocal:(id)local withFile:(id)file forCategory:(unsigned char)category isHD:(BOOL)hd;
-(void)deleteUsrHDHeadImgFromLocal:(id)local;
-(void)deleteUsrHeadImg:(id)img;
-(void)discardCachedHeadImg:(id)img;
-(void)moveTmpImageToTargetInLocal:(id)local withCategory:(unsigned char)category;
-(BOOL)isHeadImgExistInLocal:(id)local isHD:(BOOL)hd;
-(BOOL)isHeadImgExistInLocal:(id)local;
-(id)loadImageFromLocal:(id)local withCategory:(unsigned char)category isHD:(BOOL)hd;
-(id)getHeadImage:(const HeadImgUseSceneConfig*)image usrName:(id)name withCategory:(unsigned char)category retHeadImgIsExistedLocal:(BOOL*)local;
-(id)init;
@end

