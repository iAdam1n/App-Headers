/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNCameraOverlayView.h>

@class UIImageView, NSString;

@interface MNScalingOverlay : UIView <MNCameraOverlayView> {

	UIImageView* _overlayImageView;
	double _collapsedScale;
	CGPoint _anchorPoint;
	double _progress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageNames:(id)arg1 scale:(double)arg2 anchorPoint:(CGPoint)arg3 animationDuration:(double)arg4 ;
-(id)initWithImageName:(id)arg1 scale:(double)arg2 anchorPoint:(CGPoint)arg3 ;
-(void)layoutSubviews;
-(void)setTransitionProgress:(double)arg1 ;
@end
