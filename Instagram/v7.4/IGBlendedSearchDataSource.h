/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGAutocompleteNetworkDataSourceAnalytics.h>
#import <Instagram/IGAutocompleteAsyncDataSource.h>

@protocol IGAutocompleteAsyncDataSourceDelegate;
@class IGRequest, IGService, NSSet, NSString, NSDictionary;

@interface IGBlendedSearchDataSource : NSObject <IGAutocompleteNetworkDataSourceAnalytics, IGAutocompleteAsyncDataSource> {

	BOOL _searching;
	id<IGAutocompleteAsyncDataSourceDelegate> _delegate;
	IGRequest* _currentRequest;
	IGService* _service;
	NSSet* _hashtags;
	NSSet* _users;
	NSSet* _places;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGAutocompleteAsyncDataSourceDelegate> delegate; 
@property (getter=isSearching,nonatomic,readonly) BOOL searching;                                    //@synthesize searching=_searching - In the implementation block
@property (assign,nonatomic,__weak) id<IGAutocompleteAsyncDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGRequest * currentRequest;                                             //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) IGService * service;                                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSSet * hashtags;                                                     //@synthesize hashtags=_hashtags - In the implementation block
@property (nonatomic,readonly) NSSet * users;                                                        //@synthesize users=_users - In the implementation block
@property (nonatomic,readonly) NSSet * places;                                                       //@synthesize places=_places - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseQueryText; 
@property (nonatomic,copy,readonly) NSString * responseRankToken; 
@property (nonatomic,readonly) NSDictionary * analyticsInfo; 
@property (nonatomic,readonly) BOOL responseWasFoundInQueryCache; 
+(id)itemsFromJson:(id)arg1 itemCreationBlock:(/*^block*/id)arg2 ;
-(id)allResults;
-(id)resultForRow:(long long)arg1 ;
-(unsigned long long)numberOfResults;
-(NSDictionary *)analyticsInfo;
-(NSString *)responseQueryText;
-(NSString *)responseRankToken;
-(long long)numberOfLocalResults;
-(BOOL)isLocalResult:(id)arg1 ;
-(BOOL)responseWasFoundInQueryCache;
-(id)requestForQuery:(id)arg1 location:(id)arg2 rankToken:(id)arg3 ;
-(NSSet *)hashtags;
-(void)fetchDataForSearchQuery:(id)arg1 location:(id)arg2 rankToken:(id)arg3 ;
-(id)hashtagResults;
-(id)userResults;
-(id)blendedResults;
-(BOOL)isSearching;
-(void)setCurrentRequest:(IGRequest *)arg1 ;
-(NSSet *)places;
-(void)setDelegate:(id<IGAutocompleteAsyncDataSourceDelegate>)arg1 ;
-(id<IGAutocompleteAsyncDataSourceDelegate>)delegate;
-(void)handleResponse:(id)arg1 ;
-(IGService *)service;
-(void)setService:(IGService *)arg1 ;
-(id)placeResults;
-(IGRequest *)currentRequest;
-(NSSet *)users;
-(void)clearResults;
@end

