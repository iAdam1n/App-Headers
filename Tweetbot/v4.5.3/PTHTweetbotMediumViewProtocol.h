/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController, UIView, UIPanGestureRecognizer;


@protocol PTHTweetbotMediumViewProtocol <NSObject>
@property (assign,nonatomic,__weak) UIViewController * controller; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (nonatomic,__weak,readonly) UIView * panView; 
@property (nonatomic,__weak,readonly) UIView * flickView; 
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (nonatomic,readonly) BOOL shouldPan; 
@property (nonatomic,readonly) CGSize previewPreferredContentSize; 
@required
-(void)doubleTap;
-(void)willPresentFrom:(CGRect)arg1;
-(void)dismissTo:(CGRect)arg1;
-(void)willPreview;
-(void)didPreview;
-(void)configureActionSheet:(id)arg1;
-(UIView *)flickView;
-(BOOL)shouldPan;
-(CGSize)previewPreferredContentSize;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)present;
-(UIView *)accessoryView;
-(void)setAccessoryView:(id)arg1;
-(UIViewController *)controller;
-(void)setController:(id)arg1;
-(UIView *)panView;
-(void)willShow;
-(void)didShow;
-(void)willHide;
-(void)didHide;
-(void)didPresent;

@end
