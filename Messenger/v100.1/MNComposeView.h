/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/MNComposerTextViewContaining.h>

@protocol FBMultiMediaAttachmentsViewDelegate;
@class UIView, MNComposerDeferredTextView, FBMultiMediaAttachmentsView, NSMutableArray, MNTouchBeganGestureRecognizer, FBPlatformShareView, NSString;

@interface MNComposeView : UIView <UIGestureRecognizerDelegate, MNComposerTextViewContaining> {

	UIView* _attachmentSeparator;
	MNComposerDeferredTextView* _deferredTextView;
	UIView* _maskView;
	FBMultiMediaAttachmentsView* _mediaAttachmentsView;
	NSMutableArray* _textViewFocusHandlers;
	MNTouchBeganGestureRecognizer* _inputFocusGestureRecognizer;
	FBPlatformShareView* _shareAttachmentView;
	id<FBMultiMediaAttachmentsViewDelegate> _attachmentsViewDelegate;
	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic,__weak) id<FBMultiMediaAttachmentsViewDelegate> attachmentsViewDelegate;              //@synthesize attachmentsViewDelegate=_attachmentsViewDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                                      //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (nonatomic,readonly) FBMultiMediaAttachmentsView * mediaAttachmentsView;                                //@synthesize mediaAttachmentsView=_mediaAttachmentsView - In the implementation block
@property (nonatomic,readonly) MNTouchBeganGestureRecognizer * inputFocusGestureRecognizer;                       //@synthesize inputFocusGestureRecognizer=_inputFocusGestureRecognizer - In the implementation block
@property (nonatomic,retain) FBPlatformShareView * shareAttachmentView;                                           //@synthesize shareAttachmentView=_shareAttachmentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<MNComposerTextViewConfiguring> textView; 
-(void)setAttachmentsViewDelegate:(id<FBMultiMediaAttachmentsViewDelegate>)arg1 ;
-(void)setUpTextViewIfNeeded;
-(FBMultiMediaAttachmentsView *)mediaAttachmentsView;
-(void)setShareAttachmentView:(FBPlatformShareView *)arg1 ;
-(void)createAttachmentsViewIfNeeded;
-(FBPlatformShareView *)shareAttachmentView;
-(void)addTextViewFocusHandler:(/*^block*/id)arg1 ;
-(void)_handleInputFocus:(id)arg1 ;
-(MNTouchBeganGestureRecognizer *)inputFocusGestureRecognizer;
-(void)_initTextAccessoryViews;
-(void)_initInputFocusGestureRecognizer;
-(void)_initDeferredTextView;
-(CGRect)_rectForContentInBounds:(CGRect)arg1 ;
-(CGRect)_rectForAttachmentWithContentFrame:(CGRect)arg1 margins:(UIEdgeInsets*)arg2 ;
-(CGRect)_rectForTextViewInBubbleViewBounds:(CGRect)arg1 attachmentHeight:(double)arg2 ;
-(id<FBMultiMediaAttachmentsViewDelegate>)attachmentsViewDelegate;
-(void)createAttachmentSeparatorIfNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)reset;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(id<MNComposerTextViewConfiguring>)textView;
@end
