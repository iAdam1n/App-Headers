/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@protocol WAVoiceCallInteractionBlockingViewDelegate;
@class UIImageView, UILabel, UITapGestureRecognizer;

@interface WAVoiceCallInteractionBlockingView : UIView {

	UIImageView* _blockingIconView;
	UILabel* _instructionLabel;
	UITapGestureRecognizer* _doubleTapRecognizer;
	id<WAVoiceCallInteractionBlockingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WAVoiceCallInteractionBlockingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)unlockButtonDoubleTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WAVoiceCallInteractionBlockingViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<WAVoiceCallInteractionBlockingViewDelegate>)delegate;
@end

