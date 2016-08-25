/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol WAMultiSendThumbnailBrowserItemViewDelegate;
@class UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface WAMultiSendThumbnailBrowserItemView : UIView <UIGestureRecognizerDelegate> {

	UIImageView* _overlayView;
	CGPoint _centerBeforeDraggingInSuperSuperviewCoordinates;
	UIPanGestureRecognizer* _panGesture;
	UITapGestureRecognizer* _singleTapGesture;
	UILongPressGestureRecognizer* _longPressGesture;
	BOOL _selected;
	long long _index;
	unsigned long long _state;
	id<WAMultiSendThumbnailBrowserItemViewDelegate> _delegate;
	UIImageView* _backgroundImageView;

}

@property (assign,nonatomic) long long index;                                                              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<WAMultiSendThumbnailBrowserItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIImageView * overlayView;                                                  //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) UIImageView * backgroundImageView;                                          //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;                                            //@synthesize selected=_selected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addWobbleAnimationToView:(id)arg1 ;
-(void)moveToCenter:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)animateOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)viewWasLongPressed:(id)arg1 ;
-(void)viewDidDrag:(id)arg1 ;
-(void)viewWasTapped:(id)arg1 ;
-(void)stopWobble;
-(void)startWobble;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WAMultiSendThumbnailBrowserItemViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<WAMultiSendThumbnailBrowserItemViewDelegate>)delegate;
-(unsigned long long)state;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)backgroundImageView;
-(BOOL)isSelected;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(UIImageView *)overlayView;
@end

