/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMAlbum.h"

@class ALAssetsGroup;

@interface MMAlbumForALAssetLibrary : MMAlbum {
	BOOL m_isWithVideoAsset;
	ALAssetsGroup* m_group;
}
@property(assign, nonatomic) BOOL m_isWithVideoAsset;
@property(retain, nonatomic) ALAssetsGroup* m_group;
-(void).cxx_destruct;
-(void)stopICloudActivity;
-(id)assetOfIndex:(unsigned)index;
-(id)coverImage;
-(unsigned)photosCount;
-(id)name;
-(id)albumId;
-(id)initWithALAssetsGroup:(id)alassetsGroup shouldIncludeVideo:(BOOL)video isOnlyShowVideo:(BOOL)video3;
@end

