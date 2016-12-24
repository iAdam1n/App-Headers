/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBNA360MediaBlockController.h>
#import <Facebook/FBNA360PhotoNodeDelegate.h>
#import <Facebook/FBDeviceOrientationSensorDelegate.h>

@class FBUserSession, FBRichStoryBlockDisplayContext, FBNA360PhotoModel, FB360MediaContainerNode, FBNA360PhotoNode, FBNA360PhotoControlsOverlayNode, FBTimer, FBDeviceOrientationSensor, NSString;

@interface FBNA360PhotoBlockController : FBNA360MediaBlockController <FBNA360PhotoNodeDelegate, FBDeviceOrientationSensorDelegate> {

	FBUserSession* _session;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBNA360PhotoModel* _photoModel;
	FB360MediaContainerNode* _containerNode;
	FBNA360PhotoNode* _360photoNode;
	FBNA360PhotoControlsOverlayNode* _photoControls;
	BOOL _shouldShowNux;
	FBTimer* _nuxDisplayTimer;
	BOOL _didSendDragStartMetric;
	BOOL _didSendPinchStartMetric;
	BOOL _didSendSignificantChangeMetric;
	FBDeviceOrientationSensor* _deviceOrientationSensor;

}

@property (nonatomic,readonly) FBDeviceOrientationSensor * deviceOrientationSensor;              //@synthesize deviceOrientationSensor=_deviceOrientationSensor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)collapsedBlockRenderableLayoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(void)didEnterPreloadViewport;
-(BOOL)blockCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(id)blockRenderable;
-(void)didEnterWorkingRange;
-(void)didExitWorkingRange;
-(BOOL)wantsCentermostFocus;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB196)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB196)arg1 ;
-(void)_didTapCloseButton:(id)arg1 ;
-(void)_didTapHeadingIndicator:(id)arg1 ;
-(void)_fadeOverlay:(id)arg1 toAlpha:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_showNuxIfNeeded;
-(void)threeSixtyPhotoNodeDidGenerateTexture:(id)arg1 ;
-(void)threeSixtyPhotoNodeDidRenderFrame:(id)arg1 ;
-(void)threeSixtyPhotoNode:(id)arg1 wasTappedAtPoint:(CGPoint)arg2 ;
-(void)threeSixtyPhotoNodeDidBeginZoomGesture:(id)arg1 ;
-(void)threeSixtyPhotoNodeDidBeginPanGesture:(id)arg1 ;
-(void)threeSixtyPhotoNodeDidMoveSignificantly:(id)arg1 ;
-(FBDeviceOrientationSensor *)deviceOrientationSensor;
-(void)deviceOrientationDidChange:(long long)arg1 ;
@end
