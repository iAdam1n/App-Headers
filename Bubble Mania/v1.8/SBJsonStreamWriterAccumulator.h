/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/SBJsonStreamWriterDelegate.h>

@class NSMutableData, NSData;

@interface SBJsonStreamWriterAccumulator : NSObject <SBJsonStreamWriterDelegate> {

	NSMutableData* data;

}

@property (copy,readonly) NSData * data; 
-(void)writer:(id)arg1 appendBytes:(const void*)arg2 length:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)init;
-(NSData *)data;
@end
