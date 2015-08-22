/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString, NSDate, NSArray;

@interface FBContactsFetchContext : FBValueObject <NSCopying> {

	unsigned long long _numberOfContactsToFetch;
	unsigned long long _startFetchAtOffset;
	NSString* _fetchedUpToCursor;
	NSDate* _fetchedUpToDate;
	unsigned long long _cumulativeNumberOfContactsFetched;
	NSArray* _favoritesResponse;

}

@property (nonatomic,readonly) unsigned long long numberOfContactsToFetch;                        //@synthesize numberOfContactsToFetch=_numberOfContactsToFetch - In the implementation block
@property (nonatomic,readonly) unsigned long long startFetchAtOffset;                             //@synthesize startFetchAtOffset=_startFetchAtOffset - In the implementation block
@property (nonatomic,copy,readonly) NSString * fetchedUpToCursor;                                 //@synthesize fetchedUpToCursor=_fetchedUpToCursor - In the implementation block
@property (nonatomic,copy,readonly) NSDate * fetchedUpToDate;                                     //@synthesize fetchedUpToDate=_fetchedUpToDate - In the implementation block
@property (nonatomic,readonly) unsigned long long cumulativeNumberOfContactsFetched;              //@synthesize cumulativeNumberOfContactsFetched=_cumulativeNumberOfContactsFetched - In the implementation block
@property (nonatomic,copy,readonly) NSArray * favoritesResponse;                                  //@synthesize favoritesResponse=_favoritesResponse - In the implementation block
-(id)initWithNumberOfContactsToFetch:(unsigned long long)arg1 startFetchAtOffset:(unsigned long long)arg2 fetchedUpToCursor:(id)arg3 fetchedUpToDate:(id)arg4 cumulativeNumberOfContactsFetched:(unsigned long long)arg5 favoritesResponse:(id)arg6 ;
-(NSDate *)fetchedUpToDate;
-(unsigned long long)numberOfContactsToFetch;
-(unsigned long long)startFetchAtOffset;
-(NSArray *)favoritesResponse;
-(NSString *)fetchedUpToCursor;
-(unsigned long long)cumulativeNumberOfContactsFetched;
@end
