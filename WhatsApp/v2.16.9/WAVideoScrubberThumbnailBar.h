/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_group, WAVideoScrubberThumbnailBarDataSource;
@class NSMutableArray, NSObject, NSDictionary, NSMutableDictionary;

@interface WAVideoScrubberThumbnailBar : UIView {

	CGSize _thumbnailSize;
	CGSize _thumbnailImageSize;
	CGRect _previousBounds;
	NSMutableArray* _visibleThumbnailViews;
	NSMutableArray* _transitionThumbnailViews;
	SCD_Struct_WA6 _expandedTimeRange;
	long long _pivotIndex;
	long long _taskID;
	SCD_Struct_WA6 _preparedTimeRange;
	NSObject*<OS_dispatch_group> _animationDispatchGroup;
	BOOL _needsRegenerateThumbnails;
	BOOL _suppressThumbnailLayout;
	NSDictionary* _lastThumbnailCache;
	BOOL _thumbnailingEnabled;
	id<WAVideoScrubberThumbnailBarDataSource> _dataSource;
	NSMutableDictionary* _thumbnailCache;
	SCD_Struct_WA5 _videoDuration;

}

@property (assign,nonatomic,__weak) id<WAVideoScrubberThumbnailBarDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) SCD_Struct_WA5 videoDuration;                                           //@synthesize videoDuration=_videoDuration - In the implementation block
@property (assign,getter=isThumbnailingEnabled,nonatomic) BOOL thumbnailingEnabled;                    //@synthesize thumbnailingEnabled=_thumbnailingEnabled - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * thumbnailCache;                                     //@synthesize thumbnailCache=_thumbnailCache - In the implementation block
-(BOOL)isThumbnailingEnabled;
-(void)layoutRegeneratingThumbnailsIfNeeded:(BOOL)arg1 ;
-(void)generateThumbnailsInViews:(id)arg1 timeRange:(SCD_Struct_WA6)arg2 useCache:(BOOL)arg3 ;
-(void)populateUsingCacheThumbnailsInViews:(id)arg1 timeRange:(SCD_Struct_WA6)arg2 ;
-(id)cachedImageAtTime:(SCD_Struct_WA5)arg1 ;
-(id)bestCachedImageAtTime:(SCD_Struct_WA5)arg1 ;
-(void)addImageToCache:(id)arg1 atTime:(SCD_Struct_WA5)arg2 ;
-(void)prepareThumbnailsForTimeRange:(SCD_Struct_WA6)arg1 ;
-(id)cacheKeyFromTime:(SCD_Struct_WA5)arg1 ;
-(id)bestKeyForTime:(double)arg1 inThumbnailCache:(id)arg2 ;
-(id)initWithVideoDuration:(SCD_Struct_WA5)arg1 ;
-(void)setNeedsRegenerateThumbnails;
-(void)setThumbnailingEnabled:(BOOL)arg1 ;
-(void)expandToTimeRange:(SCD_Struct_WA6)arg1 animationDuration:(double)arg2 aroundTime:(SCD_Struct_WA5)arg3 ;
-(void)revertTimeRangeWithAnimationDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<WAVideoScrubberThumbnailBarDataSource>)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id<WAVideoScrubberThumbnailBarDataSource>)dataSource;
-(NSMutableDictionary *)thumbnailCache;
-(void)setThumbnailCache:(NSMutableDictionary *)arg1 ;
-(SCD_Struct_WA5)videoDuration;
@end
