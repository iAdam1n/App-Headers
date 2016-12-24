/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface GroupMallAdsUserLevelExpsExperimentContext : FBExperimentContext {

	BOOL _showLikeNux;
	BOOL _showQpFooterForGroupAdmin;
	BOOL _showQpFooterForGroupViewers;
	BOOL _enabled;

}

@property (assign,nonatomic) BOOL showLikeNux;                              //@synthesize showLikeNux=_showLikeNux - In the implementation block
@property (assign,nonatomic) BOOL showQpFooterForGroupAdmin;                //@synthesize showQpFooterForGroupAdmin=_showQpFooterForGroupAdmin - In the implementation block
@property (assign,nonatomic) BOOL showQpFooterForGroupViewers;              //@synthesize showQpFooterForGroupViewers=_showQpFooterForGroupViewers - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)showLikeNux;
-(BOOL)showQpFooterForGroupAdmin;
-(BOOL)showQpFooterForGroupViewers;
-(void)setShowLikeNux:(BOOL)arg1 ;
-(void)setShowQpFooterForGroupAdmin:(BOOL)arg1 ;
-(void)setShowQpFooterForGroupViewers:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end
