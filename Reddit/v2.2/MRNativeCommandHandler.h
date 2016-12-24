/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/MRCommandDelegate.h>
#import <Reddit/MRVideoPlayerManagerDelegate.h>

@protocol MRNativeCommandHandlerDelegate;
@class MRVideoPlayerManager, NSString;

@interface MRNativeCommandHandler : NSObject <MRCommandDelegate, MRVideoPlayerManagerDelegate> {

	id<MRNativeCommandHandlerDelegate> _delegate;
	MRVideoPlayerManager* _videoPlayerManager;

}

@property (assign,nonatomic,__weak) id<MRNativeCommandHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MRVideoPlayerManager * videoPlayerManager;                       //@synthesize videoPlayerManager=_videoPlayerManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoPlayerManager:(id)arg1 didFailToPlayVideoWithErrorMessage:(id)arg2 ;
-(void)videoPlayerManagerWillPresentVideo:(id)arg1 ;
-(id)viewControllerForPresentingVideoPlayer;
-(void)videoPlayerManagerDidDismissVideo:(id)arg1 ;
-(BOOL)shouldExecuteMRCommand:(id)arg1 ;
-(MRVideoPlayerManager *)videoPlayerManager;
-(void)mrCommand:(id)arg1 createCalendarEventWithParams:(id)arg2 ;
-(void)mrCommand:(id)arg1 playVideoWithURL:(id)arg2 ;
-(void)mrCommand:(id)arg1 storePictureWithURL:(id)arg2 ;
-(void)mrCommand:(id)arg1 shouldUseCustomClose:(BOOL)arg2 ;
-(void)mrCommand:(id)arg1 setOrientationPropertiesWithForceOrientation:(unsigned long long)arg2 ;
-(void)mrCommand:(id)arg1 openURL:(id)arg2 ;
-(void)mrCommand:(id)arg1 expandWithParams:(id)arg2 ;
-(void)mrCommand:(id)arg1 resizeWithParams:(id)arg2 ;
-(void)mrCommandClose:(id)arg1 ;
-(void)handleNativeCommand:(id)arg1 withProperties:(id)arg2 ;
-(void)setVideoPlayerManager:(MRVideoPlayerManager *)arg1 ;
-(void)setDelegate:(id<MRNativeCommandHandlerDelegate>)arg1 ;
-(id<MRNativeCommandHandlerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end
