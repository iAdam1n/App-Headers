/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class UIColor;


@protocol ASDisplayNodeViewProperties
@property (assign,nonatomic) BOOL clipsToBounds; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL autoresizesSubviews; 
@property (assign,nonatomic) unsigned long long autoresizingMask; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) double alpha; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) long long contentMode; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,getter=isExclusiveTouch,nonatomic) BOOL exclusiveTouch; 
@property (assign,setter=asyncdisplaykit_setAsyncTransactionContainer:,getter=asyncdisplaykit_isAsyncTransactionContainer,nonatomic) BOOL asyncdisplaykit_asyncTransactionContainer; 
@required
-(void)asyncdisplaykit_setAsyncTransactionContainer:(BOOL)arg1;
-(BOOL)asyncdisplaykit_isAsyncTransactionContainer;
-(void)setAutoresizingMask:(unsigned long long)arg1;
-(void)setUserInteractionEnabled:(BOOL)arg1;
-(CGRect)bounds;
-(void)setClipsToBounds:(BOOL)arg1;
-(BOOL)isHidden;
-(double)alpha;
-(void)setHidden:(BOOL)arg1;
-(void)setAlpha:(double)arg1;
-(void)setBounds:(CGRect)arg1;
-(void)setContentMode:(long long)arg1;
-(long long)contentMode;
-(BOOL)clipsToBounds;
-(UIColor *)tintColor;
-(void)setTintColor:(id)arg1;
-(BOOL)isUserInteractionEnabled;
-(unsigned long long)autoresizingMask;
-(void)setExclusiveTouch:(BOOL)arg1;
-(BOOL)isExclusiveTouch;
-(void)setAutoresizesSubviews:(BOOL)arg1;
-(BOOL)autoresizesSubviews;

@end

