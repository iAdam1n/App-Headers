/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface TODOFBVideoUploadNewLibExperimentContext : FBExperimentContext {

	double _segmentationSizeMb;
	BOOL _useNewLib;

}

@property (assign,nonatomic) double segmentationSizeMb;              //@synthesize segmentationSizeMb=_segmentationSizeMb - In the implementation block
@property (assign,nonatomic) BOOL useNewLib;                         //@synthesize useNewLib=_useNewLib - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)segmentationSizeMb;
-(BOOL)useNewLib;
-(void)setSegmentationSizeMb:(double)arg1 ;
-(void)setUseNewLib:(BOOL)arg1 ;
@end
