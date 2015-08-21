/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGAutocompleteNetworkDataSourceDelegate.h>
#import <Instagram/IGAutocompleteAsyncDataSource.h>
#import <Instagram/IGAutocompleteNetworkDataSourceAnalytics.h>

@protocol IGAutocompleteAsyncDataSourceDelegate;
@class NSString, NSDictionary, IGHashtagAutocompleteNetworkDataSource, NSArray;

@interface IGHashtagAutocompleteDataSource : NSObject <IGAutocompleteNetworkDataSourceDelegate, IGAutocompleteAsyncDataSource, IGAutocompleteNetworkDataSourceAnalytics> {

	BOOL _searching;
	BOOL _responseWasFoundInQueryCache;
	id<IGAutocompleteAsyncDataSourceDelegate> _delegate;
	IGHashtagAutocompleteNetworkDataSource* _dataSource;
	NSArray* _currentResults;
	NSString* _responseQueryText;
	NSString* _responseRankToken;
	NSDictionary* _analyticsInfo;

}

@property (assign,nonatomic,__weak) id<IGAutocompleteAsyncDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSearching,nonatomic) BOOL searching;                                      //@synthesize searching=_searching - In the implementation block
@property (assign,nonatomic) BOOL shouldReverseSort; 
@property (nonatomic,retain) IGHashtagAutocompleteNetworkDataSource * dataSource;                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * currentResults;                                               //@synthesize currentResults=_currentResults - In the implementation block
@property (nonatomic,copy) NSString * responseQueryText;                                             //@synthesize responseQueryText=_responseQueryText - In the implementation block
@property (nonatomic,copy) NSString * responseRankToken;                                             //@synthesize responseRankToken=_responseRankToken - In the implementation block
@property (nonatomic,retain) NSDictionary * analyticsInfo;                                           //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (assign,nonatomic) BOOL responseWasFoundInQueryCache;                                      //@synthesize responseWasFoundInQueryCache=_responseWasFoundInQueryCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allResults;
-(id)resultForRow:(long long)arg1 ;
-(BOOL)shouldReverseSort;
-(void)setShouldReverseSort:(BOOL)arg1 ;
-(void)beginFilteringHashtags:(id)arg1 rankToken:(id)arg2 additionalParams:(id)arg3 analyticsInfo:(id)arg4 ;
-(NSDictionary *)analyticsInfo;
-(void)setAnalyticsInfo:(NSDictionary *)arg1 ;
-(void)autocompleteNetworkDataSource:(id)arg1 didUpdateSuggestions:(id)arg2 forQuery:(id)arg3 foundInQueryCache:(BOOL)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 isLoading:(BOOL)arg7 ;
-(void)autocompleteNetworkDataSource:(id)arg1 didFailUpdateWithError:(id)arg2 forQuery:(id)arg3 fallbackData:(id)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 ;
-(NSString *)responseQueryText;
-(void)setResponseQueryText:(NSString *)arg1 ;
-(NSString *)responseRankToken;
-(void)setResponseRankToken:(NSString *)arg1 ;
-(void)setCurrentResults:(NSArray *)arg1 ;
-(void)setResponseWasFoundInQueryCache:(BOOL)arg1 ;
-(long long)numberOfLocalResults;
-(BOOL)isLocalResult:(id)arg1 ;
-(BOOL)responseWasFoundInQueryCache;
-(BOOL)isSearching;
-(void)setDataSource:(IGHashtagAutocompleteNetworkDataSource *)arg1 ;
-(void)setDelegate:(id<IGAutocompleteAsyncDataSourceDelegate>)arg1 ;
-(id)init;
-(IGHashtagAutocompleteNetworkDataSource *)dataSource;
-(id<IGAutocompleteAsyncDataSourceDelegate>)delegate;
-(void)reset;
-(void)setSearching:(BOOL)arg1 ;
-(unsigned long long)numberOfResults;
-(NSArray *)currentResults;
-(void)clearResults;
@end

