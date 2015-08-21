/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBPullToRefreshContentViewProtocolDeprecated
@property (nonatomic,readonly) double loadingHeight; 
@property (assign,nonatomic) UIEdgeInsets contentInsets; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (assign,getter=isPastThreshold,nonatomic) BOOL pastThreshold; 
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (assign,nonatomic) BOOL failedToLoadResults; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) double pullToRefreshThreshold; 
@optional
-(double)pullToRefreshThreshold;
-(void)scrollViewDidScroll:(double)arg1 withVelocity:(CGPoint)arg2 isUserInitiated:(BOOL)arg3;
-(void)setFailedToLoadResults:(BOOL)arg1;
-(BOOL)failedToLoadResults;
-(void)setEnabled:(BOOL)arg1;
-(BOOL)enabled;

@required
-(double)loadingHeight;
-(BOOL)isPastThreshold;
-(void)setPastThreshold:(BOOL)arg1;
-(void)setVisible:(BOOL)arg1;
-(id)initWithStyle:(int)arg1;
-(BOOL)isVisible;
-(BOOL)isLoading;
-(void)setContentInsets:(UIEdgeInsets)arg1;
-(UIEdgeInsets)contentInsets;
-(void)setLoading:(BOOL)arg1;

@end

