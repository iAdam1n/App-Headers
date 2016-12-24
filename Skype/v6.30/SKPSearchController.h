/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface SKPSearchController : NSObject {

	NSString* _cacheName;
	NSMutableArray* _mutableSearchHistory;
	NSString* _searchString;

}

@property (nonatomic,readonly) NSString * cacheName;                               //@synthesize cacheName=_cacheName - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableSearchHistory;              //@synthesize mutableSearchHistory=_mutableSearchHistory - In the implementation block
@property (nonatomic,retain) NSString * searchString;                              //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) NSArray * searchHistory; 
-(unsigned long long)encodingVersion;
-(void)readCache;
-(void)setSearchHistory:(NSArray *)arg1 ;
-(id)readAndValidateCache;
-(NSArray *)searchHistory;
-(void)insertObject:(id)arg1 inSearchHistoryAtIndex:(unsigned long long)arg2 ;
-(void)saveCache;
-(void)userDidAccessConversationWithObjectId:(unsigned long long)arg1 identity:(id)arg2 ;
-(void)userDidAccessConversationWithContactConversationIdentity:(id)arg1 ;
-(void)clearSearchHistory;
-(void)replaceObjectInSearchHistoryAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeSearchHistoryAtIndexes:(id)arg1 ;
-(NSMutableArray *)mutableSearchHistory;
-(NSString *)cacheName;
-(id)init;
-(void)invalidate;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
@end
