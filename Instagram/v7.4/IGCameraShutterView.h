/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:11 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface IGCameraShutterView : UIView {

	UIView* _backgroundView;
	UIView* _topBlind;
	UIView* _bottomBlind;
	long long _state;

}

@property (assign,nonatomic) long long state;              //@synthesize state=_state - In the implementation block
-(void)closeAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)openAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)openAnimated:(BOOL)arg1 delay:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)moveToPosition:(double)arg1 andDarken:(BOOL)arg2 ;
-(void)shutterWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)moveToPosition:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
@end

