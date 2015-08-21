/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class UIViewController, UIView, UIPanGestureRecognizer;


@protocol PTHTweetbotMediumViewProtocol <NSObject>
@property (assign,nonatomic,__weak) UIViewController * controller; 
@property (nonatomic,readonly) UIView * panView; 
@property (nonatomic,readonly) UIView * flickView; 
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (nonatomic,readonly) BOOL shouldPan; 
@required
-(void)doubleTap;
-(void)willPresentFrom:(CGRect)arg1;
-(void)dismissTo:(CGRect)arg1;
-(void)willShow;
-(UIView *)flickView;
-(BOOL)shouldPan;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)present;
-(UIViewController *)controller;
-(void)setController:(id)arg1;
-(UIView *)panView;
-(void)didPresent;
-(void)didShow;
-(void)willHide;
-(void)didHide;

@end

