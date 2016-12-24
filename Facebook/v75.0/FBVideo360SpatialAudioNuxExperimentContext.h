/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBVideo360SpatialAudioNuxExperimentContext : FBExperimentContext {

	NSString* _headNux;
	NSString* _bodyNux;

}

@property (nonatomic,copy) NSString * headNux;              //@synthesize headNux=_headNux - In the implementation block
@property (nonatomic,copy) NSString * bodyNux;              //@synthesize bodyNux=_bodyNux - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)bodyNux;
-(NSString *)headNux;
-(void)setHeadNux:(NSString *)arg1 ;
-(void)setBodyNux:(NSString *)arg1 ;
@end
