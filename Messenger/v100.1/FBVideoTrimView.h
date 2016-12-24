/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBFilmStripViewDelegate.h>
#import <Messenger/FBTrimViewDelegate.h>

@protocol FBVideoTrimViewDelegate;
@class FBTrimView, FBFilmStripView, UIView, FBTimer, FBVideoEditingConfiguration, FBVideoClip, NSString;

@interface FBVideoTrimView : UIView <FBFilmStripViewDelegate, FBTrimViewDelegate> {

	long long _viewMode;
	FBTrimView* _trimView;
	FBFilmStripView* _filmStripView;
	double _pointsPerSecond;
	UIView* _trackheadView;
	BOOL _trimming;
	BOOL _scrubbing;
	BOOL _zoomOutAfterZoomIn;
	CGPoint _autoScrollLastPoint;
	CGPoint _autoScrollCurrentPoint;
	FBTimer* _autoScrollTimer;
	FBVideoEditingConfiguration* _editingConfiguration;
	unsigned long long _lastTrimDraggingMode;
	id<FBVideoTrimViewDelegate> _delegate;
	FBVideoClip* _clip;
	SCD_Struct_FB25 _minTrimmedLength;
	SCD_Struct_FB25 _maxTrimmedLength;
	SCD_Struct_FB25 _scrubTime;

}

@property (assign,nonatomic,__weak) id<FBVideoTrimViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long viewMode;                                             //@synthesize viewMode=_viewMode - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB25 minTrimmedLength;                               //@synthesize minTrimmedLength=_minTrimmedLength - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB25 maxTrimmedLength;                               //@synthesize maxTrimmedLength=_maxTrimmedLength - In the implementation block
@property (nonatomic,retain) FBVideoClip * clip;                                             //@synthesize clip=_clip - In the implementation block
@property (nonatomic,readonly) unsigned long long draggingMode; 
@property (nonatomic,readonly) SCD_Struct_FB26 timeRange; 
@property (nonatomic,readonly) SCD_Struct_FB25 scrubTime;                                    //@synthesize scrubTime=_scrubTime - In the implementation block
@property (getter=isScrubbing,nonatomic,readonly) BOOL scrubbing;                            //@synthesize scrubbing=_scrubbing - In the implementation block
@property (getter=isTrimming,nonatomic,readonly) BOOL trimming;                              //@synthesize trimming=_trimming - In the implementation block
@property (getter=isZoomingFilmstrip,nonatomic,readonly) BOOL zoomingFilmstrip; 
@property (nonatomic,readonly) double trimRelativeCenterX; 
@property (nonatomic,readonly) double trimLeftHandleX; 
@property (nonatomic,readonly) double trimRightHandleX; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)videoTrimViewHeight;
-(void)updatePlayerFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2 ;
-(void)trimViewDidUpdateTrimHandlePosition:(id)arg1 ;
-(CGRect)trimView:(id)arg1 contentRectInView:(id)arg2 ;
-(void)trimViewDidBeginInteraction:(id)arg1 ;
-(void)trimViewDidLongPress:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)trimViewDidEndInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)trimViewDidUpdateTrimRange:(id)arg1 ;
-(double)trimRelativeCenterX;
-(double)trimLeftHandleX;
-(double)trimRightHandleX;
-(unsigned long long)draggingMode;
-(id)trackheadView;
-(void)resetThumbnailCache;
-(void)_adjustTrimFrame:(CGRect*)arg1 forClippingWhenZoomingWithDragInsets:(UIEdgeInsets*)arg2 ;
-(void)_refreshPointsPerSecond;
-(double)_computePointsPerSecond;
-(void)postEditDidEnd;
-(void)_seekScrubberToTime:(SCD_Struct_FB25)arg1 forceUpdate:(BOOL)arg2 autohide:(BOOL)arg3 ;
-(void)updateFilmCropOriginWithXProportion:(double)arg1 YProportion:(double)arg2 ;
-(SCD_Struct_FB26)_timeRangeForTrimRange:(CGPoint)arg1 ;
-(void)_scrubToTime:(SCD_Struct_FB25)arg1 autohideScrubber:(BOOL)arg2 ;
-(void)_updateTrimRangeByKeepingLeftHandle:(BOOL)arg1 rightHandle:(BOOL)arg2 scrubAtStart:(BOOL)arg3 ;
-(void)postEditDidBegin;
-(void)_updateTrackheadVisibility;
-(void)_showScrubberWithAutohide:(BOOL)arg1 ;
-(void)_updateScrubTimeForTrim;
-(CGPoint)_autoScrollPoint;
-(void)_startAutoScroll;
-(void)_stopAutoScroll;
-(BOOL)_canMoveByOffset:(double)arg1 byKeepingLeftHand:(BOOL)arg2 rightHandle:(BOOL)arg3 ;
-(void)_autoScrollTimerDidFire;
-(void)setView:(id)arg1 size:(CGSize)arg2 ;
-(void)setView:(id)arg1 origin:(CGPoint)arg2 ;
-(void)filmStripViewDidScroll:(id)arg1 ;
-(void)filmStripViewWillBeginDragging:(id)arg1 ;
-(void)filmStripViewDidEndDecelerating:(id)arg1 ;
-(void)filmStripViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)filmStripViewDidBeginZooming:(id)arg1 ;
-(void)filmStripViewDidEndZooming:(id)arg1 ;
-(BOOL)filmStripView:(id)arg1 shouldBeginScrubbingAtTime:(SCD_Struct_FB25)arg2 ;
-(void)filmStripView:(id)arg1 didBeginScrubbingAtTime:(SCD_Struct_FB25)arg2 ;
-(void)filmStripView:(id)arg1 didScrubAtTime:(SCD_Struct_FB25)arg2 ;
-(void)filmStripViewDidEndScrubbing:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 enableColorFilter:(BOOL)arg2 withConfiguration:(id)arg3 ;
-(void)seekScrubberToTime:(SCD_Struct_FB25)arg1 ;
-(void)setMinTrimmedLength:(SCD_Struct_FB25)arg1 ;
-(void)setMaxTrimmedLength:(SCD_Struct_FB25)arg1 ;
-(BOOL)isZoomingFilmstrip;
-(SCD_Struct_FB25)minTrimmedLength;
-(SCD_Struct_FB25)maxTrimmedLength;
-(SCD_Struct_FB25)scrubTime;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBVideoTrimViewDelegate>)arg1 ;
-(id<FBVideoTrimViewDelegate>)delegate;
-(FBVideoClip *)clip;
-(long long)viewMode;
-(void)setClip:(FBVideoClip *)arg1 ;
-(BOOL)isTrimming;
-(BOOL)isScrubbing;
-(SCD_Struct_FB26)timeRange;
-(void)setViewMode:(long long)arg1 ;
-(void)setOverlayImage:(id)arg1 ;
@end
