/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBUniversalLinksExperimentContext : FBExperimentContext {

	BOOL _fullDeeplinking;
	BOOL _extendAppleHack;

}

@property (assign,nonatomic) BOOL fullDeeplinking;              //@synthesize fullDeeplinking=_fullDeeplinking - In the implementation block
@property (assign,nonatomic) BOOL extendAppleHack;              //@synthesize extendAppleHack=_extendAppleHack - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)extendAppleHack;
-(BOOL)fullDeeplinking;
-(void)setFullDeeplinking:(BOOL)arg1 ;
-(void)setExtendAppleHack:(BOOL)arg1 ;
@end
