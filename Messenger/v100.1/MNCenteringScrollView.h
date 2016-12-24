/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIView, NSMutableSet, FBKVOController;

@interface MNCenteringScrollView : UIScrollView {

	UIView* _contentView;
	NSMutableSet* _gestureRecognizersThatMustFailBeforeInteraction;
	FBKVOController* _kvoController;

}
-(void)requireGestureRecognizerToFailBeforePanning:(id)arg1 ;
-(void)requireGestureRecognizerToFailBeforeZooming:(id)arg1 ;
-(BOOL)isPannedToEdge:(unsigned)arg1 ;
-(void)_centerContentView;
-(void)_contentViewBoundsMightChange;
-(id)_gestureRecognizersRequiredToFail;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(void)dealloc;
-(void)setContentOffset:(CGPoint)arg1 ;
@end
