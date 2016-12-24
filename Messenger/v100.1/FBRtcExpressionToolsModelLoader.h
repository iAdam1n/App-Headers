/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBRtcExpressionToolsModelLoaderDelegate;
@class FBUserSession, FBScenePath, NSMutableArray;

@interface FBRtcExpressionToolsModelLoader : NSObject {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	unsigned long long _rtcMaskVersion;
	id<FBServiceTransactionMutating> _expressionQueryTransaction;
	id<FBRtcExpressionToolsModelLoaderDelegate> _delegate;
	BOOL _masksEnabled;
	NSMutableArray* _masks;

}
-(void)_loadCompletedWithResponse:(id)arg1 finalStatus:(id)arg2 withError:(id)arg3 ;
-(void)_configureLoad:(id)arg1 ;
-(id)initWithSession:(id)arg1 masksEnabled:(BOOL)arg2 rtcMaskVersion:(unsigned long long)arg3 scenePath:(id)arg4 delegate:(id)arg5 ;
-(void)load;
@end
