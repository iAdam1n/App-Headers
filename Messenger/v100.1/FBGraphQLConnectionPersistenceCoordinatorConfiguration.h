/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>

@protocol FBDiskCacheProtocol;
@class NSString;

@interface FBGraphQLConnectionPersistenceCoordinatorConfiguration : FBValueObject {

	BOOL _includeUpdates;
	BOOL _synchronousInitialPageLoad;
	BOOL _deferredLoad;
	BOOL _streamingLoad;
	id<FBDiskCacheProtocol> _diskCache;
	NSString* _uniqueIdentifier;
	unsigned long long _countLimit;
	/*^block*/id _restoredEdgeFilter;
	double _persistenceDelay;

}

@property (nonatomic,readonly) id<FBDiskCacheProtocol> diskCache;              //@synthesize diskCache=_diskCache - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long countLimit;                  //@synthesize countLimit=_countLimit - In the implementation block
@property (nonatomic,copy,readonly) id restoredEdgeFilter;                     //@synthesize restoredEdgeFilter=_restoredEdgeFilter - In the implementation block
@property (nonatomic,readonly) double persistenceDelay;                        //@synthesize persistenceDelay=_persistenceDelay - In the implementation block
@property (nonatomic,readonly) BOOL includeUpdates;                            //@synthesize includeUpdates=_includeUpdates - In the implementation block
@property (nonatomic,readonly) BOOL synchronousInitialPageLoad;                //@synthesize synchronousInitialPageLoad=_synchronousInitialPageLoad - In the implementation block
@property (nonatomic,readonly) BOOL deferredLoad;                              //@synthesize deferredLoad=_deferredLoad - In the implementation block
@property (nonatomic,readonly) BOOL streamingLoad;                             //@synthesize streamingLoad=_streamingLoad - In the implementation block
-(id<FBDiskCacheProtocol>)diskCache;
-(id)initWithDiskCache:(id)arg1 uniqueIdentifier:(id)arg2 countLimit:(unsigned long long)arg3 restoredEdgeFilter:(/*^block*/id)arg4 includeUpdates:(BOOL)arg5 synchronousInitialPageLoad:(BOOL)arg6 deferredLoad:(BOOL)arg7 streamingLoad:(BOOL)arg8 ;
-(id)restoredEdgeFilter;
-(double)persistenceDelay;
-(BOOL)includeUpdates;
-(BOOL)synchronousInitialPageLoad;
-(BOOL)deferredLoad;
-(BOOL)streamingLoad;
-(NSString *)uniqueIdentifier;
-(unsigned long long)countLimit;
@end
