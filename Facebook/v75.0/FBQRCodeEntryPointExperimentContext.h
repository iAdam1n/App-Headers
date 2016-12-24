/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBQRCodeEntryPointExperimentContext : FBExperimentContext {

	BOOL _showInBookmark;
	BOOL _showInSearchNullState;
	BOOL _showInFriendCenter;

}

@property (assign,nonatomic) BOOL showInBookmark;                     //@synthesize showInBookmark=_showInBookmark - In the implementation block
@property (assign,nonatomic) BOOL showInSearchNullState;              //@synthesize showInSearchNullState=_showInSearchNullState - In the implementation block
@property (assign,nonatomic) BOOL showInFriendCenter;                 //@synthesize showInFriendCenter=_showInFriendCenter - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)showInBookmark;
-(BOOL)showInFriendCenter;
-(BOOL)showInSearchNullState;
-(void)setShowInBookmark:(BOOL)arg1 ;
-(void)setShowInSearchNullState:(BOOL)arg1 ;
-(void)setShowInFriendCenter:(BOOL)arg1 ;
@end
