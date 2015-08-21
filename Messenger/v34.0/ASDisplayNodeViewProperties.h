/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
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
-(BOOL)isHidden;
-(double)alpha;
-(void)setHidden:(BOOL)arg1;
-(void)setAlpha:(double)arg1;
-(void)setBounds:(CGRect)arg1;
-(void)setClipsToBounds:(BOOL)arg1;
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

