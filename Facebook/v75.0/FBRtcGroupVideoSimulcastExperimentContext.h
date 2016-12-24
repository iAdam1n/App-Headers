/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBRtcGroupVideoSimulcastExperimentContext : FBExperimentContext {

	long long _nonSimulcastMaxSize;
	BOOL _enableSimulcast;
	long long _numSimulcastLayers;
	long long _maxBr;
	long long _V;

}

@property (assign,nonatomic) long long nonSimulcastMaxSize;              //@synthesize nonSimulcastMaxSize=_nonSimulcastMaxSize - In the implementation block
@property (assign,nonatomic) BOOL enableSimulcast;                       //@synthesize enableSimulcast=_enableSimulcast - In the implementation block
@property (assign,nonatomic) long long numSimulcastLayers;               //@synthesize numSimulcastLayers=_numSimulcastLayers - In the implementation block
@property (assign,nonatomic) long long maxBr;                            //@synthesize maxBr=_maxBr - In the implementation block
@property (assign,V,nonatomic) long long V;                              //@synthesize V=_V - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)V;
-(BOOL)enableSimulcast;
-(long long)maxBr;
-(long long)nonSimulcastMaxSize;
-(long long)numSimulcastLayers;
-(void)setNonSimulcastMaxSize:(long long)arg1 ;
-(void)setEnableSimulcast:(BOOL)arg1 ;
-(void)setNumSimulcastLayers:(long long)arg1 ;
-(void)setMaxBr:(long long)arg1 ;
-(void)setV:(long long)arg1 ;
@end
