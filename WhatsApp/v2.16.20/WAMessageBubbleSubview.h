/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@interface WAMessageBubbleSubview : UIView {

	unsigned long long _eventID;
	BOOL _canHandleTaps;
	double _lastGestureTime;
	BOOL _isHandlingTouches;

}
+(BOOL)isUserInteractionEnabled;
-(BOOL)isDoubleTapGestureEnabled;
-(void)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)touches:(id)arg1 didBeginWithHighlight:(BOOL)arg2 ;
-(void)touchesDidEnd;
-(BOOL)shouldHighlightContainerViewOnTouchesDidBegin;
-(void)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(void)touchesWillBegin:(id)arg1 ;
-(id)parentView;
-(void)handleLongPressAtPoint:(CGPoint)arg1 ;
-(void)performGestureHandlerIfPossible:(/*^block*/id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end
