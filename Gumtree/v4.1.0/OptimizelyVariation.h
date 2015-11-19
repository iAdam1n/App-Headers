/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray, NSDictionary, OptimizelyExperiment, NSString;

@interface OptimizelyVariation : NSObject {

	int _numPendingAssets;
	NSArray* _assetList;
	NSDictionary* _assets;
	NSDictionary* _codeTests;
	OptimizelyExperiment* _experiment;
	NSString* _key;
	/*^block*/id _readyStateHandler;
	unsigned long long _state;
	unsigned long long _traffic;
	NSDictionary* _variables;
	NSDictionary* _views;
	NSString* _variationId;

}

@property (readonly) NSArray * assetList;                          //@synthesize assetList=_assetList - In the implementation block
@property (readonly) NSDictionary * assets;                        //@synthesize assets=_assets - In the implementation block
@property (readonly) NSDictionary * codeTests;                     //@synthesize codeTests=_codeTests - In the implementation block
@property (__weak) OptimizelyExperiment * experiment;              //@synthesize experiment=_experiment - In the implementation block
@property (readonly) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (copy) id readyStateHandler;                             //@synthesize readyStateHandler=_readyStateHandler - In the implementation block
@property (assign) unsigned long long state;                       //@synthesize state=_state - In the implementation block
@property (assign) unsigned long long traffic;                     //@synthesize traffic=_traffic - In the implementation block
@property (readonly) NSDictionary * variables;                     //@synthesize variables=_variables - In the implementation block
@property (readonly) NSDictionary * views;                         //@synthesize views=_views - In the implementation block
@property (nonatomic,retain) NSString * variationId;               //@synthesize variationId=_variationId - In the implementation block
-(NSString *)variationId;
-(void)setReady;
-(id)readyStateHandler;
-(OptimizelyExperiment *)experiment;
-(void)setExperiment:(OptimizelyExperiment *)arg1 ;
-(void)setReadyStateHandler:(id)arg1 ;
-(NSDictionary *)variables;
-(NSDictionary *)codeTests;
-(void)addNoOpsFromOtherVariation:(id)arg1 ;
-(unsigned long long)traffic;
-(id)initWithDictionary:(id)arg1 experiment:(id)arg2 ;
-(void)decrementPendingAssets;
-(NSArray *)assetList;
-(void)setTraffic:(unsigned long long)arg1 ;
-(void)setVariationId:(NSString *)arg1 ;
-(NSDictionary *)assets;
-(void)prepare;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)key;
-(NSDictionary *)views;
@end
