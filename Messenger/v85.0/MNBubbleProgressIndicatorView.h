/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/MNProgressView.h>

@class MNProgressIndicatorView, MNMessageBubbleView, NSString;

@interface MNBubbleProgressIndicatorView : UIView <MNProgressView> {

	MNProgressIndicatorView* _progressIndicatorView;
	MNMessageBubbleView* _bubbleView;

}

@property (nonatomic,readonly) MNMessageBubbleView * bubbleView;              //@synthesize bubbleView=_bubbleView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBubbleDisplayConfigurer:(id)arg1 ;
-(void)setProgressColor:(id)arg1 trackColor:(id)arg2 ;
-(void)updateProgressViewWithProgress:(float)arg1 direction:(long long)arg2 ;
-(void)_setupProgressIndicatorView;
-(void)_setUpBubbleOverlayWithbubbleDisplayConfigurer:(id)arg1 ;
-(void)layoutSubviews;
-(MNMessageBubbleView *)bubbleView;
@end
