/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAppService.h>

@class FBUserSession, NSMutableArray, FBMessagePackCoder, NSString;

@interface FBOfflineCommentsManager : NSObject <FBAppService> {

	FBUserSession* _userSession;
	NSMutableArray* _offlineCommentsStore;
	FBMessagePackCoder* _coder;

}

@property (nonatomic,retain) NSMutableArray * offlineCommentsStore;              //@synthesize offlineCommentsStore=_offlineCommentsStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)_cacheOfflineCommentsStoreToDisk;
-(void)_postOfflineCommentsCachedObjects:(id)arg1 ;
-(NSMutableArray *)offlineCommentsStore;
-(void)setOfflineCommentsStore:(NSMutableArray *)arg1 ;
-(void)addOfflineCommentCacheObject:(id)arg1 ;
-(void)removeOfflineCommentCacheObjectWithOptimisticID:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
