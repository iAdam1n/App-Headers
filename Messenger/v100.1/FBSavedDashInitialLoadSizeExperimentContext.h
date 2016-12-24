/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBSavedDashInitialLoadSizeExperimentContext : FBExperimentContext {

	BOOL _screenSizeBasedLoad;
	long long _initialLoadSize;

}

@property (assign,nonatomic) BOOL screenSizeBasedLoad;               //@synthesize screenSizeBasedLoad=_screenSizeBasedLoad - In the implementation block
@property (assign,nonatomic) long long initialLoadSize;              //@synthesize initialLoadSize=_initialLoadSize - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)initialLoadSize;
-(BOOL)screenSizeBasedLoad;
-(void)setScreenSizeBasedLoad:(BOOL)arg1 ;
-(void)setInitialLoadSize:(long long)arg1 ;
@end
