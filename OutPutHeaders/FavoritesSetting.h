/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface FavoritesSetting : XXUnknownSuperclass <NSCoding> {
	unsigned long long _totalCapacity;
	unsigned long long _usedCapcity;
	unsigned long _maxAutoUploadSize;
	unsigned long _maxAutoDownloadSize;
	unsigned long _maxFavFileSize;
	BOOL _bIsFirstTimeInFav;
	int _showFavIntroViewTimes;
	unsigned long long _usedCapacity;
}
@property(assign, nonatomic) int showFavIntroViewTimes;
@property(assign, nonatomic) BOOL bIsFirstTimeInFav;
@property(assign, nonatomic) unsigned long maxFavFileSize;
@property(assign, nonatomic) unsigned long maxAutoDownloadSize;
@property(assign, nonatomic) unsigned long maxAutoUploadSize;
@property(assign, nonatomic) unsigned long long usedCapacity;
@property(assign, nonatomic) unsigned long long totalCapacity;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
@end

