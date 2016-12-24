/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface TODOFBEntityCardsGroupsEntryExperimentContext : FBExperimentContext {

	BOOL _enableShowMutuality;
	BOOL _enableMembersList;
	BOOL _enableShowMutualityGroup;

}

@property (assign,nonatomic) BOOL enableShowMutuality;                   //@synthesize enableShowMutuality=_enableShowMutuality - In the implementation block
@property (assign,nonatomic) BOOL enableMembersList;                     //@synthesize enableMembersList=_enableMembersList - In the implementation block
@property (assign,nonatomic) BOOL enableShowMutualityGroup;              //@synthesize enableShowMutualityGroup=_enableShowMutualityGroup - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enableMembersList;
-(BOOL)enableShowMutuality;
-(BOOL)enableShowMutualityGroup;
-(void)setEnableShowMutuality:(BOOL)arg1 ;
-(void)setEnableMembersList:(BOOL)arg1 ;
-(void)setEnableShowMutualityGroup:(BOOL)arg1 ;
@end
