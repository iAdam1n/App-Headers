/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamLoadResult.h>

@class FBMemGraphSearchResultsConnection, NSArray, NSString;

@interface FBGraphSearchResultsStreamLoadResult : FBStreamLoadResult {

	FBMemGraphSearchResultsConnection* _resultsConnection;
	double _networkTime;
	NSArray* _topLevelResultStyles;
	NSString* _browseSessionID;
	NSString* _verticalToLog;
	NSString* _postSearchIntentLog;

}

@property (nonatomic,readonly) FBMemGraphSearchResultsConnection * resultsConnection;              //@synthesize resultsConnection=_resultsConnection - In the implementation block
@property (nonatomic,readonly) double networkTime;                                                 //@synthesize networkTime=_networkTime - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topLevelResultStyles;                                //@synthesize topLevelResultStyles=_topLevelResultStyles - In the implementation block
@property (nonatomic,copy,readonly) NSString * browseSessionID;                                    //@synthesize browseSessionID=_browseSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * verticalToLog;                                      //@synthesize verticalToLog=_verticalToLog - In the implementation block
@property (nonatomic,copy,readonly) NSString * postSearchIntentLog;                                //@synthesize postSearchIntentLog=_postSearchIntentLog - In the implementation block
-(NSString *)verticalToLog;
-(NSString *)postSearchIntentLog;
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 ;
-(NSString *)browseSessionID;
-(FBMemGraphSearchResultsConnection *)resultsConnection;
-(double)networkTime;
-(NSArray *)topLevelResultStyles;
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 networkTime:(unsigned long long)arg4 resultsConnection:(id)arg5 topLevelResultStyles:(id)arg6 browseSessionID:(id)arg7 verticalToLog:(id)arg8 postSearchIntentLog:(id)arg9 ;
@end
