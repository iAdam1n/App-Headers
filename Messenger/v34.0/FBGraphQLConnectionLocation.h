/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/FBGraphQLConnectionLocationInterface.h>

@class FBGraphQLConnectionCursor, NSString;

@interface FBGraphQLConnectionLocation : FBValueObject <NSCopying, FBGraphQLConnectionLocationInterface> {

	BOOL _hasAnotherPage;
	FBGraphQLConnectionCursor* _cursor;
	long long _loadingStatus;
	unsigned long long _requestedCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBGraphQLConnectionCursor * connectionCursor; 
@property (nonatomic,readonly) BOOL hasAnotherPage; 
@property (nonatomic,readonly) BOOL isLoading; 
@property (nonatomic,copy,readonly) FBGraphQLConnectionCursor * cursor;                   //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) BOOL hasAnotherPage;                                       //@synthesize hasAnotherPage=_hasAnotherPage - In the implementation block
@property (nonatomic,readonly) long long loadingStatus;                                   //@synthesize loadingStatus=_loadingStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long requestedCount;                         //@synthesize requestedCount=_requestedCount - In the implementation block
-(id)initWithStoreLocation:(id)arg1 ;
-(BOOL)isEquivalentToStoreLocation:(id)arg1 ;
-(id)locationWithIncrementedRequestedCount;
-(id)locationWithUpdatedLoadingStatus:(long long)arg1 ;
-(id)locationWithUpdatedRequestedCount:(unsigned long long)arg1 ;
-(id)locationWithUpdatedHasAnotherPage:(BOOL)arg1 ;
-(id)locationWithDecrementedRequestedCount;
-(BOOL)isEquivalentToLocation:(id)arg1 ;
-(FBGraphQLConnectionCursor *)connectionCursor;
-(BOOL)isLoading;
-(BOOL)hasAnotherPage;
-(long long)loadingStatus;
-(unsigned long long)requestedCount;
-(id)initWithCursor:(id)arg1 hasAnotherPage:(BOOL)arg2 loadingStatus:(long long)arg3 requestedCount:(unsigned long long)arg4 ;
-(FBGraphQLConnectionCursor *)cursor;
@end
