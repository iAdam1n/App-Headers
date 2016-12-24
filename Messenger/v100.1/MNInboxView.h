/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, NSString;

@interface MNInboxView : UIView <UIGestureRecognizerDelegate> {

	UIView* _topBarView;
	UIView* _contentView;
	UIView* _bottomBarView;
	double _topBarHeight;
	double _bottomBarHeight;

}

@property (assign,nonatomic) double topBarHeight;                   //@synthesize topBarHeight=_topBarHeight - In the implementation block
@property (assign,nonatomic) double bottomBarHeight;                //@synthesize bottomBarHeight=_bottomBarHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)setTopBarHeight:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateLayoutAnimated:(BOOL)arg1 ;
-(void)setBottomBarHeight:(double)arg1 animated:(BOOL)arg2 ;
-(void)setTopBarView:(id)arg1 ;
-(void)setBottomBarView:(id)arg1 ;
-(void)setBottomBarHeight:(double)arg1 ;
-(void)setContentView:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(double)bottomBarHeight;
-(double)topBarHeight;
-(void)setTopBarHeight:(double)arg1 ;
-(void)_updateSubviewOrder;
@end
