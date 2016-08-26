/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSInputStream.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol NSStreamDelegate;
@class NSArray, NSString;

@interface GSDK_GTMGatherInputStream : NSInputStream <NSStreamDelegate> {

	NSArray* _dataArray;
	unsigned long long _arrayIndex;
	long long _dataOffset;
	unsigned long long _streamStatus;
	id<NSStreamDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)streamWithArray:(id)arg1 ;
-(long long)absoluteOffset;
-(void)setAbsoluteOffset:(long long)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithArray:(id)arg1 ;
-(void)close;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(BOOL)hasBytesAvailable;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
@end
