/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBDisplayableMediaTransitioningDelegate.h>

@class FBPhotosTransitioningDelegate, UIView, NSString;

@interface FBOverlayedPhotosTransitioningDelegate : NSObject <FBDisplayableMediaTransitioningDelegate> {

	FBPhotosTransitioningDelegate* _photosTransitioningDelegate;
	UIView* _overlayView;
	UIView* _mediaView;

}

@property (assign,nonatomic,__weak) UIView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic,__weak) UIView * mediaView;                //@synthesize mediaView=_mediaView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaView:(UIView *)arg1 ;
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithContainerView:(id)arg2 ;
-(void)transitionManager:(id)arg1 didEndTransitionWithContainerView:(id)arg2 ;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithProgress:(double)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 willStartTransitionWithContainerView:(id)arg2 ;
-(BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1 ;
-(UIView *)overlayView;
-(id)init;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)mediaView;
@end

