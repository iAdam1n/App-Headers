/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSNumber, NSManagedObjectContext;

@interface GAIDataStore : NSObject {

	BOOL _setUpCoreData;
	NSString* _clientId;
	NSString* _hashedIdfa;
	NSNumber* _lastChangeTimeStamp;
	NSNumber* _idfaChangeCount;
	unsigned long long _maxHitCount;
	NSManagedObjectContext* _oldContext;
	NSManagedObjectContext* _context;
	NSManagedObjectContext* _currentContext;

}

@property (nonatomic,retain) NSString * clientId; 
@property (nonatomic,retain) NSString * hashedIdfa; 
@property (nonatomic,retain) NSNumber * idfaChangeCount; 
@property (nonatomic,retain) NSNumber * lastChangeTimeStamp; 
@property (assign,nonatomic) unsigned long long maxHitCount;                       //@synthesize maxHitCount=_maxHitCount - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * oldContext;                  //@synthesize oldContext=_oldContext - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * currentContext;              //@synthesize currentContext=_currentContext - In the implementation block
+(id)databaseFullURL:(id)arg1 ;
+(id)databaseFullPath:(id)arg1 ;
+(id)thread;
+(id)dataStore;
-(id)requestHitsWithLimit:(unsigned long long)arg1 ;
-(unsigned long long)maxHitCount;
-(long long)context:(id)arg1 hitCount:(id*)arg2 ;
-(BOOL)deleteExcessHits:(id*)arg1 ;
-(void)onExit:(id)arg1 ;
-(void)setMaxHitCount:(unsigned long long)arg1 ;
-(id)requestEntityName:(id)arg1 ;
-(long long)hitCount:(id*)arg1 ;
-(id)fetchHitsWithLimit:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)deleteHitsWithIds:(id)arg1 error:(id*)arg2 ;
-(id)performBlockAndWait:(/*^block*/id)arg1 withError:(id*)arg2 ;
-(void)gai_performBlockHelper:(id)arg1 ;
-(id)coordinatorWithModel:(id)arg1 URL:(id)arg2 ;
-(NSManagedObjectContext *)oldContext;
-(id)requestPropertyWithName:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 numberValue:(id)arg2 withError:(id*)arg3 ;
-(BOOL)setProperty:(id)arg1 stringValue:(id)arg2 withError:(id*)arg3 ;
-(id)oldHitDescription:(id)arg1 ;
-(BOOL)setUpCoreData;
-(id)contextWithModel:(id)arg1 URL:(id)arg2 ;
-(BOOL)context:(id)arg1 removeStaleHits:(id*)arg2 ;
-(id)fetchClientId;
-(NSNumber *)lastChangeTimeStamp;
-(oneway void)setLastChangeTimeStamp:(NSNumber *)arg1 ;
-(NSNumber *)idfaChangeCount;
-(oneway void)setIdfaChangeCount:(NSNumber *)arg1 ;
-(NSString *)hashedIdfa;
-(oneway void)setHashedIdfa:(NSString *)arg1 ;
-(void)addHit:(id)arg1 ;
-(BOOL)deleteAllHits:(id*)arg1 ;
-(void)setOldContext:(NSManagedObjectContext *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSManagedObjectContext *)context;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(BOOL)save:(id*)arg1 ;
-(NSManagedObjectContext *)currentContext;
-(void)setCurrentContext:(NSManagedObjectContext *)arg1 ;
-(oneway void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
@end

