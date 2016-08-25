/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/HTTPConnectionDelegate.h>

@class NSMutableArray, NSMutableSet;

@interface HTTPQueue : NSObject <HTTPConnectionDelegate> {

	int requestConnectionLimit;
	int holdingCount;
	NSMutableArray* requestQueue;
	NSMutableSet* connectingRequests;

}

@property (nonatomic,retain) NSMutableArray * requestQueue; 
@property (nonatomic,retain) NSMutableSet * connectingRequests; 
@property (assign,nonatomic) int requestConnectionLimit; 
@property (assign,nonatomic) int holdingCount; 
+(id)queueWithConnectionLimit:(int)arg1 ;
+(id)queue;
+(id)globalQueue;
-(void)connection:(id)arg1 getResponse:(id)arg2 ;
-(void)connection:(id)arg1 updateDownloadProgress:(id)arg2 ;
-(void)addRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)setRequestConnectionLimit:(int)arg1 ;
-(void)setConnectingRequests:(NSMutableSet *)arg1 ;
-(void)setHoldingCount:(int)arg1 ;
-(void)sendNextRequest;
-(int)holdingCount;
-(NSMutableSet *)connectingRequests;
-(int)requestConnectionLimit;
-(id)getRequestQueue;
-(void)dealloc;
-(void)hold;
-(void)resume;
-(void)setRequestQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)requestQueue;
-(void)clearQueue;
-(id)initWithLimit:(int)arg1 ;
@end

