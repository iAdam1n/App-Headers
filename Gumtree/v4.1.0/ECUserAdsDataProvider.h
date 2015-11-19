/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECItemDataProviderProtocol.h>
#import <Gumtree/ECItemDataRemoveProtocol.h>

@class NSString, NSArray;

@interface ECUserAdsDataProvider : NSObject <ECItemDataProviderProtocol, ECItemDataRemoveProtocol> {

	BOOL hasMore;
	BOOL _updatingResults;

}

@property (assign,nonatomic) BOOL updatingResults;                         //@synthesize updatingResults=_updatingResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) unsigned long long totalItems; 
@property (nonatomic,readonly) BOOL hasMore; 
@property (nonatomic,readonly) BOOL updating; 
-(unsigned long long)totalItems;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadWithRefresh:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)updatingResults;
-(BOOL)hasMore;
-(void)removeItems:(id)arg1 localRemovedHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setUpdatingResults:(BOOL)arg1 ;
-(id)init;
-(NSArray *)items;
-(void)clearResults;
-(BOOL)updating;
@end

