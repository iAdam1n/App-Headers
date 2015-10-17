/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>
#import <Tweetbot/PTHTweetbotMediumViewProtocol.h>

@class UIViewController, UIView, UIPanGestureRecognizer, PTHProgressView, NSString;

@interface PTHTweetbotMediumLoadingView : UIView <PTHTweetbotMediumViewProtocol> {

	PTHProgressView* _progressView;
	UIViewController* _controller;
	UIView* _accessoryView;

}

@property (assign,nonatomic,__weak) UIViewController * controller;                         //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                       //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) double progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * panView; 
@property (nonatomic,readonly) UIView * flickView; 
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (nonatomic,readonly) BOOL shouldPan; 
-(void)doubleTap;
-(void)willPresentFrom:(CGRect)arg1 ;
-(void)dismissTo:(CGRect)arg1 ;
-(void)willShow;
-(void)configureActionSheet:(id)arg1 ;
-(UIView *)flickView;
-(BOOL)shouldPan;
-(void)didPresent;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setProgress:(double)arg1 ;
-(void)present;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(double)progress;
-(UIView *)panView;
-(void)didShow;
-(void)willHide;
-(void)didHide;
@end
