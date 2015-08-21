/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGWebDataSource.h>

@protocol IGWebDataSourceDelegate;
@class IGRequest, NSMutableArray, NSString;

@interface IGHashtagListNetworkDataSource : NSObject <IGWebDataSource> {

	IGRequest* _request;
	id<IGWebDataSourceDelegate> _delegate;
	NSMutableArray* _results;
	NSString* _searchString;
	NSString* _rankToken;

}

@property (assign,nonatomic,__weak) id<IGWebDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                               //@synthesize results=_results - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                    //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy,readonly) NSString * rankToken;                              //@synthesize rankToken=_rankToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allResults;
-(id)resultForRow:(long long)arg1 ;
-(NSString *)rankToken;
-(void)performSearch:(id)arg1 rankToken:(id)arg2 ;
-(void)setDelegate:(id<IGWebDataSourceDelegate>)arg1 ;
-(id<IGWebDataSourceDelegate>)delegate;
-(NSMutableArray *)results;
-(NSString *)searchString;
-(id)noResultsMessage;
-(void)setSearchString:(NSString *)arg1 ;
-(id)errorMessage;
-(unsigned long long)numberOfResults;
-(void)fetchData;
-(void)clearResults;
-(void)setRequest:(id)arg1 ;
@end

