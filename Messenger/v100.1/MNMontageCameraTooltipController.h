/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, FBLazyCreator, MNMontageCameraVideoTooltipConfiguration;

@interface MNMontageCameraTooltipController : NSObject {

	UIView* _hostView;
	FBLazyCreator* _videoRecordTooltipOverlayControllerCreator;
	MNMontageCameraVideoTooltipConfiguration* _videoTooltipConfiguration;

}
-(BOOL)isVideoRecordTooltipVisible;
-(void)hideVideoRecordTooltip;
-(id)initWithNuxCoordinator:(id)arg1 hostView:(id)arg2 videoTooltipConfiguration:(id)arg3 ;
-(void)showVideoRecordTooltipWithAnchorView:(id)arg1 ;
-(void)reset;
@end
