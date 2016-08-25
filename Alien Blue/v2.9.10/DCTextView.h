/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextView.h>

@protocol DCTextViewDelegate;
@interface DCTextView : UITextView {

	id<DCTextViewDelegate> _keyboardInputDelegate;

}

@property (assign,nonatomic,__weak) id<DCTextViewDelegate> keyboardInputDelegate;              //@synthesize keyboardInputDelegate=_keyboardInputDelegate - In the implementation block
-(void)setKeyboardInputDelegate:(id<DCTextViewDelegate>)arg1 ;
-(void)toggleNonOpaqueViews;
-(void)toggleHelp;
-(void)disableForPeriod;
-(void)toggleShowCoordinates;
-(void)forceSetNeedsDisplay;
-(void)forceSetNeedsLayout;
-(void)moveUpInViewHierarchy;
-(void)moveBackInViewHierarchy;
-(void)moveDownToFirstSubview;
-(void)moveToNextSiblingView;
-(void)moveToPrevSiblingView;
-(void)logCodeForCurrentViewChanges;
-(void)enterGDB;
-(void)toggleViewOutlines;
-(void)toggleFlashViewRedraws;
-(void)enterBlockMode;
-(void)nudgeViewLeft;
-(void)nudgeViewRight;
-(void)nudgeViewUp;
-(void)nudgeViewDown;
-(void)centerInSuperview;
-(void)increaseWidth;
-(void)decreaseWidth;
-(void)increaseHeight;
-(void)decreaseHeight;
-(void)increaseViewAlpha;
-(void)decreaseViewAlpha;
-(void)logProperties;
-(void)logAccessibilityProperties;
-(void)logViewRecursive;
-(void)constraintsAffectingLayoutForAxisX;
-(void)constraintsAffectingLayoutForAxisY;
-(void)keyLeft:(id)arg1 ;
-(void)keyRight:(id)arg1 ;
-(id<DCTextViewDelegate>)keyboardInputDelegate;
-(void)keyDown:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)reloadData;
-(void)invoke;
-(id)keyCommands;
-(void)exerciseAmbiguityInLayout;
@end

