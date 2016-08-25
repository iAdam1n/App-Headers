/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MWSTrackProvider.h>

@class NSDictionary, NSString, NSArray;

@interface MWSTrackProviderLeanplum : MWSTrackProvider {

	NSDictionary* userAttributesDictionary;
	BOOL isStarted;
	NSDictionary* lpVariables;
	BOOL _isProduction;
	BOOL _syncResourcePaths;
	BOOL _autoRecordPurchases;
	BOOL _syncResourcePathsAsync;
	NSString* _userId;
	NSString* _applicationId;
	NSString* _key;
	NSArray* _syncResourcePathsInclude;
	NSArray* _syncResourcePathsExclude;

}

@property (nonatomic,retain) NSString * userId;                               //@synthesize userId=_userId - In the implementation block
@property (assign,nonatomic) BOOL isProduction;                               //@synthesize isProduction=_isProduction - In the implementation block
@property (nonatomic,retain) NSString * applicationId;                        //@synthesize applicationId=_applicationId - In the implementation block
@property (nonatomic,retain) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL syncResourcePaths;                          //@synthesize syncResourcePaths=_syncResourcePaths - In the implementation block
@property (assign,nonatomic) BOOL autoRecordPurchases;                        //@synthesize autoRecordPurchases=_autoRecordPurchases - In the implementation block
@property (nonatomic,retain) NSArray * syncResourcePathsInclude;              //@synthesize syncResourcePathsInclude=_syncResourcePathsInclude - In the implementation block
@property (nonatomic,retain) NSArray * syncResourcePathsExclude;              //@synthesize syncResourcePathsExclude=_syncResourcePathsExclude - In the implementation block
@property (assign,nonatomic) BOOL syncResourcePathsAsync;                     //@synthesize syncResourcePathsAsync=_syncResourcePathsAsync - In the implementation block
-(id)initWithAppId:(id)arg1 withKey:(id)arg2 ;
-(void)setIsProduction:(BOOL)arg1 ;
-(void)setSyncResourcePaths:(BOOL)arg1 ;
-(void)setSyncResourcePathsInclude:(NSArray *)arg1 ;
-(void)handleSetupAfterStart;
-(void)sendEvent:(id)arg1 Dictionary:(id)arg2 Value:(id)arg3 Info:(id)arg4 ;
-(void)handleSetupBeforeStart;
-(int)legalProviderCapabilities;
-(void)sendAttributes:(id)arg1 ;
-(void)sendPaymentTransaction:(id)arg1 ;
-(void)setSyncResourcePathsExclude:(NSArray *)arg1 ;
-(void)setSyncResourcePathsAsync:(BOOL)arg1 ;
-(void)setAutoRecordPurchases:(BOOL)arg1 ;
-(BOOL)isProduction;
-(BOOL)autoRecordPurchases;
-(BOOL)syncResourcePaths;
-(NSArray *)syncResourcePathsInclude;
-(NSArray *)syncResourcePathsExclude;
-(BOOL)syncResourcePathsAsync;
-(id)convertDynamicVariableToData:(id)arg1 ;
-(id)getLeanplumUserID;
-(void)defineDynamicVariables:(id)arg1 ;
-(id)getDynamicVariableData:(unsigned long long)arg1 ;
-(void)requestDynamicVariableData:(unsigned long long)arg1 WithCompletion:(/*^block*/id)arg2 ;
-(void)forceVariableUpdateWithCompletion:(/*^block*/id)arg1 type:(int)arg2 ;
-(NSString *)key;
-(void)initialize;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)applicationId;
-(void)setApplicationId:(NSString *)arg1 ;
-(void)setDefaults;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
@end

