/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class IGFileCoordinator;

@interface IGExplorePhotosArchiver : NSObject {

	IGFileCoordinator* _trendsFileCoordinator;
	IGFileCoordinator* _marqueeFileCoordinator;

}

@property (nonatomic,retain) IGFileCoordinator * trendsFileCoordinator;               //@synthesize trendsFileCoordinator=_trendsFileCoordinator - In the implementation block
@property (nonatomic,retain) IGFileCoordinator * marqueeFileCoordinator;              //@synthesize marqueeFileCoordinator=_marqueeFileCoordinator - In the implementation block
-(BOOL)archiveTrends:(id)arg1 ;
-(BOOL)archiveMarqueeItems:(id)arg1 ;
-(IGFileCoordinator *)trendsFileCoordinator;
-(IGFileCoordinator *)marqueeFileCoordinator;
-(id)unarchiveTrends;
-(id)unarchiveMarqueeItems;
-(void)setTrendsFileCoordinator:(IGFileCoordinator *)arg1 ;
-(void)setMarqueeFileCoordinator:(IGFileCoordinator *)arg1 ;
@end
