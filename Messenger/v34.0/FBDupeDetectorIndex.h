/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSMutableDictionary;

@interface FBDupeDetectorIndex : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _identifierToDupeCoefficient;
	unsigned long long _numberOfUncachedAssetPairsDuringLastIndexing;

}

@property (nonatomic,readonly) unsigned long long numberOfUncachedAssetPairsDuringLastIndexing;              //@synthesize numberOfUncachedAssetPairsDuringLastIndexing=_numberOfUncachedAssetPairsDuringLastIndexing - In the implementation block
+(id)sharedInstance;
-(SCD_Struct_FB456)_getCoefficientForIdentifier:(id)arg1 ;
-(void)_indexSortedAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setDupeCoefficient:(float)arg1 forIdentifier:(id)arg2 persistResult:(BOOL)arg3 ;
-(SCD_Struct_FB456)dupeCoefficientForAssetIdentifierA:(id)arg1 assetIdentifierB:(id)arg2 ;
-(void)indexAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)numberOfUncachedAssetPairsDuringLastIndexing;
-(id)init;
@end

