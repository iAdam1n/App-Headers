/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface IosMoreCiEntryExperimentContext : FBExperimentContext {

	BOOL _ciEntryEnabled;
	BOOL _blueButtonViewEnabled;
	BOOL _ddStyleViewEnabled;
	BOOL _directToFcEnabled;

}

@property (assign,nonatomic) BOOL ciEntryEnabled;                     //@synthesize ciEntryEnabled=_ciEntryEnabled - In the implementation block
@property (assign,nonatomic) BOOL blueButtonViewEnabled;              //@synthesize blueButtonViewEnabled=_blueButtonViewEnabled - In the implementation block
@property (assign,nonatomic) BOOL ddStyleViewEnabled;                 //@synthesize ddStyleViewEnabled=_ddStyleViewEnabled - In the implementation block
@property (assign,nonatomic) BOOL directToFcEnabled;                  //@synthesize directToFcEnabled=_directToFcEnabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)blueButtonViewEnabled;
-(BOOL)ciEntryEnabled;
-(BOOL)ddStyleViewEnabled;
-(BOOL)directToFcEnabled;
-(void)setCiEntryEnabled:(BOOL)arg1 ;
-(void)setBlueButtonViewEnabled:(BOOL)arg1 ;
-(void)setDdStyleViewEnabled:(BOOL)arg1 ;
-(void)setDirectToFcEnabled:(BOOL)arg1 ;
@end
