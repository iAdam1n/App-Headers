/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReceivedDataBufferProtocol.h>

@protocol FBReceivedDataBufferDelegate;
@class NSMutableData, NSString;

@interface FBReceivedChunkedDataMemoryBuffer : NSObject <FBReceivedDataBufferProtocol> {

	NSMutableData* _data;
	BOOL _opened;
	unsigned long long _chunksProcessed;
	id<FBReceivedDataBufferDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBReceivedDataBufferDelegate> delegate; 
-(BOOL)_isBufferConsumed;
-(void)_processNewData:(long long)arg1 ;
-(void)setDelegate:(id<FBReceivedDataBufferDelegate>)arg1 ;
-(NSString *)description;
-(id<FBReceivedDataBufferDelegate>)delegate;
-(unsigned long long)length;
-(id)data;
-(void)close;
-(void)appendData:(id)arg1 ;
-(void)open;
@end
