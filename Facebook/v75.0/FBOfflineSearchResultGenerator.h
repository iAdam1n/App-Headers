/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBOfflineSearchFeedEdgesGenerator, NSString, FBSearchResultsLogEventListenerAnnouncer;

@interface FBOfflineSearchResultGenerator : NSObject {

	FBOfflineSearchFeedEdgesGenerator* _feedEdgesGenerator;
	NSString* _clientSessionID;
	FBSearchResultsLogEventListenerAnnouncer* _logAnnouncer;
	BOOL _matchActorsOnly;

}
-(id)initWithFeedEdgesGenerator:(id)arg1 clientSessionID:(id)arg2 logAnnouncer:(id)arg3 matchActorsOnly:(BOOL)arg4 ;
-(id)resultsForQuery:(id)arg1 ;
@end
