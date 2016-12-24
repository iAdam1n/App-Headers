/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol MNPrimerViewDelegate;
@class UILabel, UIButton, UIImageView, NSObject, NSString;

@interface MNPrimerAlertView : UIView <CAAnimationDelegate> {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _cancelButton;
	UIButton* _okButton;
	UIImageView* _arrowView;
	BOOL _allowCancel;
	NSObject*<MNPrimerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<MNPrimerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowCancel;                                             //@synthesize allowCancel=_allowCancel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_okButtonPressed:(id)arg1 ;
-(CGSize)_titleTextSizeThatFitsSize:(CGSize)arg1 ;
-(CGSize)_messageTextSizeThatFitsSize:(CGSize)arg1 ;
-(void)_drawLine:(CGContextRef)arg1 startPoint:(CGPoint)arg2 endPoint:(CGPoint)arg3 ;
-(void)startArrowViewBouncingAnimation;
-(void)_presentWithPopUpAnimation;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 okButtonTitle:(id)arg5 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(NSObject*<MNPrimerViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSObject*<MNPrimerViewDelegate>)delegate;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)showInView:(id)arg1 ;
-(void)_dismiss;
-(BOOL)allowCancel;
-(void)setAllowCancel:(BOOL)arg1 ;
-(void)_cancelButtonPressed:(id)arg1 ;
@end
