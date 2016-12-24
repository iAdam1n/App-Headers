/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MNPendingRequestsMetadataBuilder : NSObject {

	unsigned long long _numberOfPendingRequests;
	unsigned long long _numberOfUnreadPendingRequests;
	unsigned long long _numberOfFilteredRequests;
	NSString* _pendingRequestsSnippet;

}
+(id)pendingRequestsMetadata;
+(id)pendingRequestsMetadataFromExistingPendingRequestsMetadata:(id)arg1 ;
-(id)withNumberOfPendingRequests:(unsigned long long)arg1 ;
-(id)withNumberOfUnreadPendingRequests:(unsigned long long)arg1 ;
-(id)withNumberOfFilteredRequests:(unsigned long long)arg1 ;
-(id)withPendingRequestsSnippet:(id)arg1 ;
-(id)build;
@end
