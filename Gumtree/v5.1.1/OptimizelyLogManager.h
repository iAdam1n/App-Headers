/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OptimizelyAFHTTPRequestOperationManager;

@interface OptimizelyLogManager : NSObject {

	OptimizelyAFHTTPRequestOperationManager* _logClient;

}

@property (nonatomic,retain) OptimizelyAFHTTPRequestOperationManager * logClient;              //@synthesize logClient=_logClient - In the implementation block
-(id)dictionaryFromJSON:(id)arg1 ;
-(void)setLogClient:(OptimizelyAFHTTPRequestOperationManager *)arg1 ;
-(OptimizelyAFHTTPRequestOperationManager *)logClient;
-(void)sendLogsToServer:(id)arg1 ;
-(void)removeLogs:(id)arg1 ;
-(void)sendLog:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)log:(id)arg1 withStackTrace:(id)arg2 ;
-(void)start;
-(void)flushLogs;
-(id)metaData;
@end

