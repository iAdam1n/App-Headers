/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class NSMutableArray;

@interface T1MultiPhotoDownloaderManager : NSObject {

	NSMutableArray* _downloaders;
	id _downloadingObserver;

}

@property (nonatomic,readonly) unsigned long long downloadersCount; 
@property (nonatomic,retain) NSMutableArray * downloaders;                       //@synthesize downloaders=_downloaders - In the implementation block
@property (nonatomic,__weak,readonly) id downloadingObserver;                    //@synthesize downloadingObserver=_downloadingObserver - In the implementation block
-(id)initWithDownloadingObserver:(id)arg1 ;
-(id)_downloaderAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)downloadersCount;
-(id)downloaderForDownload:(id)arg1 ;
-(void)addDownload:(id)arg1 contentMode:(long long)arg2 size:(CGSize)arg3 index:(long long)arg4 isRetrying:(BOOL)arg5 ;
-(BOOL)isDownloaderRetryingAtIndex:(unsigned long long)arg1 ;
-(void)resetDownloaders;
-(NSMutableArray *)downloaders;
-(void)setDownloaders:(NSMutableArray *)arg1 ;
-(id)downloadingObserver;
-(id)init;
@end
