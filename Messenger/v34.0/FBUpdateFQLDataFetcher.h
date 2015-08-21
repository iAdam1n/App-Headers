/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBUpdateDataFetcher.h>

@class NSString, NSMutableArray;

@interface FBUpdateFQLDataFetcher : FBUpdateDataFetcher {

	BOOL _filterDisabledBuilds;
	NSString* _releaseChannel;
	NSString* _appId;
	NSString* _bundleId;
	NSString* _releaseNumber;
	unsigned long long _limit;
	NSMutableArray* _customFilters;
	NSMutableArray* _fqlRequests;

}

@property (nonatomic,copy) NSString * releaseChannel;                   //@synthesize releaseChannel=_releaseChannel - In the implementation block
@property (nonatomic,copy) NSString * appId;                            //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy) NSString * bundleId;                         //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy) NSString * releaseNumber;                    //@synthesize releaseNumber=_releaseNumber - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                  //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL filterDisabledBuilds;                 //@synthesize filterDisabledBuilds=_filterDisabledBuilds - In the implementation block
@property (nonatomic,copy) NSMutableArray * customFilters;              //@synthesize customFilters=_customFilters - In the implementation block
@property (nonatomic,copy) NSMutableArray * fqlRequests;                //@synthesize fqlRequests=_fqlRequests - In the implementation block
-(id)fqlQuery;
-(void)setReleaseNumber:(NSString *)arg1 ;
-(void)resetCustomFQLQueryFilters;
-(void)addCustomFQLQueryFilter:(id)arg1 ;
-(id)_sortedFQLResult:(id)arg1 ;
-(id)fqlQueryName;
-(id)fqlQueryWithShellBuilds;
-(id)parseFQLResult:(id)arg1 error:(id*)arg2 ;
-(NSString *)releaseNumber;
-(BOOL)filterDisabledBuilds;
-(void)setFilterDisabledBuilds:(BOOL)arg1 ;
-(NSMutableArray *)customFilters;
-(void)setCustomFilters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fqlRequests;
-(void)setFqlRequests:(NSMutableArray *)arg1 ;
-(NSString *)releaseChannel;
-(void)setReleaseChannel:(NSString *)arg1 ;
-(NSString *)bundleId;
-(id)init;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
@end

