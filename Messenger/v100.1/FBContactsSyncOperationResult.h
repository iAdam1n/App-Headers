/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, FBContactsFetchContext;

@interface FBContactsSyncOperationResult : FBValueObject <NSCopying> {

	BOOL _shouldFetchMoreContacts;
	NSArray* _syncEvents;
	FBContactsFetchContext* _context;

}

@property (nonatomic,copy,readonly) NSArray * syncEvents;                          //@synthesize syncEvents=_syncEvents - In the implementation block
@property (nonatomic,copy,readonly) FBContactsFetchContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL shouldFetchMoreContacts;                       //@synthesize shouldFetchMoreContacts=_shouldFetchMoreContacts - In the implementation block
-(id)initWithSyncEvents:(id)arg1 context:(id)arg2 shouldFetchMoreContacts:(BOOL)arg3 ;
-(BOOL)shouldFetchMoreContacts;
-(FBContactsFetchContext *)context;
-(NSArray *)syncEvents;
@end
