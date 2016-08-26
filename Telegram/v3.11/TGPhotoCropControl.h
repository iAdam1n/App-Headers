/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPanGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface TGPhotoCropControl : UIControl <UIGestureRecognizerDelegate> {

	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _pressGestureRecognizer;
	BOOL _beganInteraction;
	BOOL _endedInteraction;
	/*^block*/id _shouldBeginResizing;
	/*^block*/id _didBeginResizing;
	/*^block*/id _didResize;
	/*^block*/id _didEndResizing;

}

@property (nonatomic,copy) id shouldBeginResizing;                  //@synthesize shouldBeginResizing=_shouldBeginResizing - In the implementation block
@property (nonatomic,copy) id didBeginResizing;                     //@synthesize didBeginResizing=_didBeginResizing - In the implementation block
@property (nonatomic,copy) id didResize;                            //@synthesize didResize=_didResize - In the implementation block
@property (nonatomic,copy) id didEndResizing;                       //@synthesize didEndResizing=_didEndResizing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handlePress:(id)arg1 ;
-(void)setShouldBeginResizing:(id)arg1 ;
-(void)setDidBeginResizing:(id)arg1 ;
-(void)setDidResize:(id)arg1 ;
-(void)setDidEndResizing:(id)arg1 ;
-(id)shouldBeginResizing;
-(id)didBeginResizing;
-(id)didResize;
-(id)didEndResizing;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)handlePan:(id)arg1 ;
@end
