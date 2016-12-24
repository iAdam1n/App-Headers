/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBFacecastE2ELoggingExperimentContext : FBExperimentContext {

	long long _frameSampleInterval;
	BOOL _isViewSampled;
	long long _viewerSampleNum;
	BOOL _isBroadcastSampled;

}

@property (assign,nonatomic) long long frameSampleInterval;              //@synthesize frameSampleInterval=_frameSampleInterval - In the implementation block
@property (assign,nonatomic) BOOL isViewSampled;                         //@synthesize isViewSampled=_isViewSampled - In the implementation block
@property (assign,nonatomic) long long viewerSampleNum;                  //@synthesize viewerSampleNum=_viewerSampleNum - In the implementation block
@property (assign,nonatomic) BOOL isBroadcastSampled;                    //@synthesize isBroadcastSampled=_isBroadcastSampled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)frameSampleInterval;
-(BOOL)isBroadcastSampled;
-(BOOL)isViewSampled;
-(long long)viewerSampleNum;
-(void)setFrameSampleInterval:(long long)arg1 ;
-(void)setIsViewSampled:(BOOL)arg1 ;
-(void)setViewerSampleNum:(long long)arg1 ;
-(void)setIsBroadcastSampled:(BOOL)arg1 ;
@end
