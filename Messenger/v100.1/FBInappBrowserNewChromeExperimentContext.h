/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBInappBrowserNewChromeExperimentContext : FBExperimentContext {

	long long _swipeToDismiss;
	long long _typeUrl;
	BOOL _pulseIcon;
	long long _scrollAwayNavigationBar;

}

@property (assign,nonatomic) long long swipeToDismiss;                       //@synthesize swipeToDismiss=_swipeToDismiss - In the implementation block
@property (assign,nonatomic) long long typeUrl;                              //@synthesize typeUrl=_typeUrl - In the implementation block
@property (assign,nonatomic) BOOL pulseIcon;                                 //@synthesize pulseIcon=_pulseIcon - In the implementation block
@property (assign,nonatomic) long long scrollAwayNavigationBar;              //@synthesize scrollAwayNavigationBar=_scrollAwayNavigationBar - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)pulseIcon;
-(long long)scrollAwayNavigationBar;
-(long long)swipeToDismiss;
-(long long)typeUrl;
-(void)setSwipeToDismiss:(long long)arg1 ;
-(void)setTypeUrl:(long long)arg1 ;
-(void)setPulseIcon:(BOOL)arg1 ;
-(void)setScrollAwayNavigationBar:(long long)arg1 ;
@end
