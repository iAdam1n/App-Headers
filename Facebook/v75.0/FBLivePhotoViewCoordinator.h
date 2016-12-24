/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/PHLivePhotoViewDelegate.h>

@protocol FBLivePhotoViewCoordinatorDelegate;
@class UIView, NSString, UIGestureRecognizer, PHLivePhotoView;

@interface FBLivePhotoViewCoordinator : NSObject <PHLivePhotoViewDelegate> {

	UIView* _hostingView;
	UIView* _overlayView;
	long long _targetDimension;
	long long _currentFetchingRequestID;
	BOOL _isLivePhotoEnabled;
	NSString* _assetID;
	UIGestureRecognizer* _livePhotoGestureRecognizer;
	PHLivePhotoView* _livePhotoView;
	id<FBLivePhotoViewCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLivePhotoViewCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHostingView:(id)arg1 overlayView:(id)arg2 targetDimension:(long long)arg3 delegate:(id)arg4 ;
-(void)cleanUpLivePhoto;
-(void)reloadViewWithAssetID:(id)arg1 isLivePhotoEnabled:(BOOL)arg2 shouldAutoPlayLivePhoto:(BOOL)arg3 ;
-(void)relayoutViewBelowOverlayView;
-(void)_fetchLivePhotoAndAutoPlay:(BOOL)arg1 ;
-(void)_setupLivePhoto:(id)arg1 forAssetID:(id)arg2 autoPlay:(BOOL)arg3 ;
-(void)toggleLivePhoto:(BOOL)arg1 ;
-(void)setDelegate:(id<FBLivePhotoViewCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(id<FBLivePhotoViewCoordinatorDelegate>)delegate;
-(void)setOverlayView:(id)arg1 ;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
@end
