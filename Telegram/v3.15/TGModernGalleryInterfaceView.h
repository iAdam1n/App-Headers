/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TGModernGalleryInterfaceView <NSObject>
@optional
-(BOOL)showHiddenInterfaceOnScroll;
-(BOOL)shouldAutorotate;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@required
-(void)setClosePressed:(/*^block*/id)arg1;
-(void)setScrollViewOffsetRequested:(/*^block*/id)arg1;
-(void)itemFocused:(id)arg1 itemView:(id)arg2;
-(void)addItemHeaderView:(id)arg1;
-(void)removeItemHeaderView:(id)arg1;
-(void)addItemFooterView:(id)arg1;
-(void)removeItemFooterView:(id)arg1;
-(void)addItemLeftAcessoryView:(id)arg1;
-(void)removeItemLeftAcessoryView:(id)arg1;
-(void)addItemRightAcessoryView:(id)arg1;
-(void)removeItemRightAcessoryView:(id)arg1;
-(void)animateTransitionInWithDuration:(double)arg1;
-(void)animateTransitionOutWithDuration:(double)arg1;
-(void)setTransitionOutProgress:(double)arg1;
-(BOOL)allowsDismissalWithSwipeGesture;
-(BOOL)allowsHide;
-(BOOL)prefersStatusBarHidden;

@end

