/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECItemDataProviderProtocol.h>
#import <Gumtree/ECItemDataRemoveProtocol.h>

@class ECGetItemsResults, NSString, NSArray;

@interface ECSavedSearchesDataProvider : NSObject <ECItemDataProviderProtocol, ECItemDataRemoveProtocol> {

	BOOL hasMore;
	BOOL _lastLoadFailed;
	BOOL _clearResultsOnNextLoad;
	ECGetItemsResults* _results;
	ECGetItemsResults* _lastResultsLoaded;

}

@property (nonatomic,retain) ECGetItemsResults * results;                        //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) ECGetItemsResults * lastResultsLoaded;              //@synthesize lastResultsLoaded=_lastResultsLoaded - In the implementation block
@property (assign,nonatomic) BOOL lastLoadFailed;                                //@synthesize lastLoadFailed=_lastLoadFailed - In the implementation block
@property (assign,nonatomic) BOOL clearResultsOnNextLoad;                        //@synthesize clearResultsOnNextLoad=_clearResultsOnNextLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) unsigned long long totalItems; 
@property (nonatomic,readonly) BOOL hasMore; 
@property (nonatomic,readonly) BOOL updating; 
-(unsigned long long)totalItems;
-(ECGetItemsResults *)lastResultsLoaded;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)clearResultsOnNextLoad;
-(void)setClearResultsOnNextLoad:(BOOL)arg1 ;
-(void)setLastResultsLoaded:(ECGetItemsResults *)arg1 ;
-(void)setLastLoadFailed:(BOOL)arg1 ;
-(BOOL)lastLoadFailed;
-(void)cancelUpdate;
-(void)refreshItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)updatingResults;
-(BOOL)hasMore;
-(void)removeItems:(id)arg1 localRemovedHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(NSArray *)items;
-(ECGetItemsResults *)results;
-(void)setResults:(ECGetItemsResults *)arg1 ;
-(BOOL)isUpdating;
-(BOOL)hasResults;
-(void)clearResults;
-(BOOL)updating;
@end

