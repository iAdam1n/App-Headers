/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableArray;

@interface FBHttpExecutorQueue : NSObject {

	NSMutableArray* _requestQueue;

}
-(id)removeAllRequests;
-(id)nextRequestsWithSlots:(SCD_Struct_FB112*)arg1 batchingLeewayNanos:(unsigned long long)arg2 alwaysSendImmediateRequests:(BOOL)arg3 subsequentRequestStartTimeNanos:(unsigned long long*)arg4 ;
-(void)scheduleAllRequestsImmediately;
-(void)removeRequest:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(void)addRequest:(id)arg1 ;
@end
