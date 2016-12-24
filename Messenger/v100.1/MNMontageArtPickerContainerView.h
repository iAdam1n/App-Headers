/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UINavigationBar, UIView;

@interface MNMontageArtPickerContainerView : UIView {

	UINavigationBar* _navigationBar;
	UIView* _topMostView;

}

@property (assign,nonatomic,__weak) UINavigationBar * navigationBar;              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic,__weak) UIView * topMostView;                         //@synthesize topMostView=_topMostView - In the implementation block
-(UIView *)topMostView;
-(void)setTopMostView:(UIView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UINavigationBar *)navigationBar;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
@end
