/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface TAGDataProvider : NSObject {

	BOOL _hasHits;
	unsigned long long _maxHitCount;
	double _maxHitAge;
	NSManagedObjectContext* _context;

}

@property (assign,nonatomic) BOOL hasHits;                                  //@synthesize hasHits=_hasHits - In the implementation block
@property (assign,nonatomic) unsigned long long maxHitCount;                //@synthesize maxHitCount=_maxHitCount - In the implementation block
@property (assign,nonatomic) double maxHitAge;                              //@synthesize maxHitAge=_maxHitAge - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * context;              //@synthesize context=_context - In the implementation block
-(void)setHasHits:(BOOL)arg1 ;
-(double)maxHitAge;
-(BOOL)context:(id)arg1 deleteRequest:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)maxHitCount;
-(unsigned long long)context:(id)arg1 hitCount:(id*)arg2 ;
-(BOOL)deleteExcessHits:(id*)arg1 ;
-(void)onExit:(id)arg1 ;
-(oneway void)updateFailedHits:(id)arg1 ;
-(oneway void)addHitWithURLString:(id)arg1 ;
-(oneway void)fetchHitsWithLimit:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)fetchNotRecentlyAttemptedHitsWithLimit:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)deleteHits:(id)arg1 ;
-(BOOL)hasHits;
-(void)setMaxHitCount:(unsigned long long)arg1 ;
-(void)setMaxHitAge:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(NSManagedObjectContext *)context;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)save;
@end
