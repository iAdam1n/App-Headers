/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class OptimizelyExperiment, NSString;

@interface OptimizelyAsset : NSObject {

	BOOL _hasDeviceVersion;
	BOOL _isReady;
	OptimizelyExperiment* _experiment;
	NSString* _path;
	/*^block*/id _readyStateHandler;
	/*^block*/id _failStateHandler;

}

@property (assign,nonatomic,__weak) OptimizelyExperiment * experiment;              //@synthesize experiment=_experiment - In the implementation block
@property (assign) BOOL hasDeviceVersion;                                           //@synthesize hasDeviceVersion=_hasDeviceVersion - In the implementation block
@property (assign) BOOL isReady;                                                    //@synthesize isReady=_isReady - In the implementation block
@property (retain) NSString * path;                                                 //@synthesize path=_path - In the implementation block
@property (copy) id readyStateHandler;                                              //@synthesize readyStateHandler=_readyStateHandler - In the implementation block
@property (copy) id failStateHandler;                                               //@synthesize failStateHandler=_failStateHandler - In the implementation block
+(id)assetWithDictionary:(id)arg1 ;
+(id)deviceSpecificAsset:(id)arg1 ;
-(void)setReady;
-(void)setHasDeviceVersion:(BOOL)arg1 ;
-(id)failStateHandler;
-(id)readyStateHandler;
-(OptimizelyExperiment *)experiment;
-(void)setExperiment:(OptimizelyExperiment *)arg1 ;
-(BOOL)hasDeviceVersion;
-(void)setReadyStateHandler:(id)arg1 ;
-(void)setFailStateHandler:(id)arg1 ;
-(BOOL)isReady;
-(void)prepare;
-(id)init;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setIsReady:(BOOL)arg1 ;
@end

