/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamLoadResult.h>

@class FBMemSearchCombinedResultsConnection, NSArray, NSString;

@interface FBSearchCombinedResultsStreamLoadResult : FBStreamLoadResult {

	FBMemSearchCombinedResultsConnection* _combinedResultsConnection;
	double _networkTime;
	NSArray* _topLevelResultStyles;
	NSString* _browseSessionID;
	NSString* _verticalToLog;
	NSString* _postSearchIntentLog;
	NSString* _loggingUnitId;

}

@property (nonatomic,readonly) FBMemSearchCombinedResultsConnection * combinedResultsConnection;              //@synthesize combinedResultsConnection=_combinedResultsConnection - In the implementation block
@property (nonatomic,readonly) double networkTime;                                                            //@synthesize networkTime=_networkTime - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topLevelResultStyles;                                           //@synthesize topLevelResultStyles=_topLevelResultStyles - In the implementation block
@property (nonatomic,copy,readonly) NSString * browseSessionID;                                               //@synthesize browseSessionID=_browseSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * verticalToLog;                                                 //@synthesize verticalToLog=_verticalToLog - In the implementation block
@property (nonatomic,copy,readonly) NSString * postSearchIntentLog;                                           //@synthesize postSearchIntentLog=_postSearchIntentLog - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingUnitId;                                                 //@synthesize loggingUnitId=_loggingUnitId - In the implementation block
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 ;
-(NSString *)verticalToLog;
-(NSString *)postSearchIntentLog;
-(NSString *)browseSessionID;
-(NSString *)loggingUnitId;
-(NSArray *)topLevelResultStyles;
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 networkTime:(unsigned long long)arg4 combinedResultsConnection:(id)arg5 topLevelResultStyles:(id)arg6 browseSessionID:(id)arg7 verticalToLog:(id)arg8 postSearchIntentLog:(id)arg9 loggingUnitId:(id)arg10 ;
-(FBMemSearchCombinedResultsConnection *)combinedResultsConnection;
-(double)networkTime;
@end
