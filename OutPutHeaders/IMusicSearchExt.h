/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol IMusicSearchExt <NSObject>
@optional
-(void)OnMusicError:(int)error andSessionId:(unsigned long)anId;
-(void)OnGetMusicItem:(id)item andOffset:(float)offset andSessionId:(unsigned long)anId;
-(void)OnEndRecord;
-(void)OnStartRecord;
@end

