/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/PHLivePhotoViewDelegate.h>

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

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanUpLivePhoto;
-(id)initWithHostingView:(id)arg1 overlayView:(id)arg2 targetDimension:(long long)arg3 ;
-(void)reloadViewWithAssetID:(id)arg1 isLivePhotoEnabled:(BOOL)arg2 shouldAutoPlayLivePhoto:(BOOL)arg3 ;
-(void)toggleLivePhoto:(BOOL)arg1 ;
-(void)relayoutViewBelowOverlayView;
-(void)_setupLivePhotoShouldAutoPlay:(BOOL)arg1 ;
-(void)_setupLivePhoto:(id)arg1 forAssetID:(id)arg2 ;
-(void)_startLivePhotoPlayback;
-(void)dealloc;
-(void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2 ;
-(void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2 ;
@end
