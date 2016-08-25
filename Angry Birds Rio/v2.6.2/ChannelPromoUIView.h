/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <UIKit/UIView.h>
#import <AngryBirdsRio/ChannelPromoImageDelegate.h>

@protocol ChannelPromoViewDelegate;
@class UIControl, UIView, NSMutableDictionary, NSString;

@interface ChannelPromoUIView : UIView <ChannelPromoImageDelegate> {

	float _durationInSeconds;
	id<ChannelPromoViewDelegate> _delegate;
	UIControl* _backgroundView;
	UIView* _promoContentView;
	NSMutableDictionary* _elementDictionary;
	NSMutableDictionary* _elementParamsDictionary;
	NSMutableDictionary* _elementTimerDictionary;
	NSMutableDictionary* _elementImageDictionary;

}

@property (assign,nonatomic) id<ChannelPromoViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * promoContentView;                                  //@synthesize promoContentView=_promoContentView - In the implementation block
@property (nonatomic,retain) UIControl * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * elementDictionary;                    //@synthesize elementDictionary=_elementDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * elementParamsDictionary;              //@synthesize elementParamsDictionary=_elementParamsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * elementTimerDictionary;               //@synthesize elementTimerDictionary=_elementTimerDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * elementImageDictionary;               //@synthesize elementImageDictionary=_elementImageDictionary - In the implementation block
@property (assign) float durationInSeconds;                                              //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)promoContentView;
-(void)controlClicked:(id)arg1 ;
-(id)createPromoContentView;
-(NSMutableDictionary *)elementImageDictionary;
-(id)createButtonFromUrl:(id)arg1 withName:(id)arg2 ;
-(NSMutableDictionary *)elementDictionary;
-(NSMutableDictionary *)elementParamsDictionary;
-(void)animateViewWillAppear:(id)arg1 withWhichType:(id)arg2 fromWhichDirection:(id)arg3 ;
-(void)controlTouchDown:(id)arg1 ;
-(void)controlTouchUp:(id)arg1 ;
-(void)cancelTimer:(id)arg1 ;
-(NSMutableDictionary *)elementTimerDictionary;
-(void)onTimeout:(id)arg1 ;
-(void)animateViewWillDismiss:(id)arg1 withWhichType:(id)arg2 fromWhichDirection:(id)arg3 dimissView:(/*^block*/id)arg4 ;
-(void)promoImageDidLoaded:(id)arg1 ;
-(void)setPromoContentView:(UIView *)arg1 ;
-(void)setElementDictionary:(NSMutableDictionary *)arg1 ;
-(void)setElementParamsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setElementTimerDictionary:(NSMutableDictionary *)arg1 ;
-(void)setElementImageDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithParams:(id)arg1 ;
-(void)addPromoSubview:(id)arg1 ;
-(void)setDurationInSeconds:(float)arg1 ;
-(void)setDelegate:(id<ChannelPromoViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<ChannelPromoViewDelegate>)delegate;
-(void)setBackgroundView:(UIControl *)arg1 ;
-(UIControl *)backgroundView;
-(float)durationInSeconds;
-(void)startTimer:(id)arg1 ;
-(void)cancelAllTimers;
@end

