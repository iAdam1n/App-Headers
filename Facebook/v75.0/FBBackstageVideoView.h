/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBBackstageVideoControllerListener.h>
#import <Facebook/FBClonePhotoView.h>

@class FBBackstageVideoPlaybackItem, FBNetworkImageView, FBBackstageVideoController, FBBackstageActivityView, UIImage, NSString;

@interface FBBackstageVideoView : UIView <FBBackstageVideoControllerListener, FBClonePhotoView> {

	BOOL _wasPlayingBeforeBackgrounded;
	FBBackstageVideoPlaybackItem* _playbackItem;
	FBNetworkImageView* _placeholderImageView;
	FBBackstageVideoController* _videoController;
	FBBackstageActivityView* _activityView;

}

@property (nonatomic,copy,readonly) UIImage * thumbnailImage; 
@property (nonatomic,retain) FBBackstageVideoPlaybackItem * playbackItem;              //@synthesize playbackItem=_playbackItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)clonePhotoViewInfoWithSourceInfo:(id)arg1 ;
-(id)initWithVideoPlaybackItem:(id)arg1 videoController:(id)arg2 session:(id)arg3 useActivityView:(BOOL)arg4 ;
-(void)_setPlaceholderImage;
-(void)_handleBackgrounded;
-(void)_handleForegrounded;
-(void)setPlaybackItem:(FBBackstageVideoPlaybackItem *)arg1 ;
-(void)_addVideoContainerIfNeeded;
-(FBBackstageVideoPlaybackItem *)playbackItem;
-(void)backstageVideoController:(id)arg1 didStartPlaying:(id)arg2 ;
-(void)backstageVideoController:(id)arg1 didUpdateProgress:(double)arg2 ;
-(id)initWithVideoPlaybackItem:(id)arg1 videoController:(id)arg2 session:(id)arg3 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)play;
-(void)pause;
-(UIImage *)thumbnailImage;
@end
