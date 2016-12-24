/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamingEventModelDelegate.h>
#import <Facebook/FBScenePathHolding.h>

@protocol FBStreamingEventModel;
@class FBUserSession, FBScenePath, FBCastingCommentsBarView, FBMemVideo, UIControl, NSString;

@interface FBCastingCommentsBarController : NSObject <FBStreamingEventModelDelegate, FBScenePathHolding> {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	id<FBStreamingEventModel> _eventsModel;
	FBCastingCommentsBarView* _view;
	FBMemVideo* _video;

}

@property (nonatomic,readonly) UIControl * view;                          //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) double commentsVisibleFraction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldShowEvent:(id)arg1 ;
-(void)startFetching;
-(void)facecastEventsModel:(id)arg1 didLoadEvent:(id)arg2 ;
-(void)facecastEventsModel:(id)arg1 didDeliverEvent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)facecastEventsModelFailedToLoadEvent:(id)arg1 ;
-(void)facecastEventsModelRefreshed:(id)arg1 ;
-(void)facecastEventsModel:(id)arg1 refreshedAtIndex:(unsigned long long)arg2 ;
-(void)setVideoTime:(double)arg1 ;
-(void)setCommentsVisibleFraction:(double)arg1 ;
-(id)initWithStory:(id)arg1 video:(id)arg2 session:(id)arg3 ;
-(void)setupHeaderWithCastingDeviceType:(unsigned long long)arg1 castingDeviceName:(id)arg2 ;
-(double)commentsVisibleFraction;
-(UIControl *)view;
-(void)stopFetching;
@end
