/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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

