/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/DDLogFormatter.h>

@class NSString, NSDateFormatter, NSMutableDictionary;

@interface DDDispatchQueueLogFormatter : NSObject <DDLogFormatter> {

	NSString* dateFormatString;
	int atomicLoggerCount;
	NSDateFormatter* threadUnsafeDateFormatter;
	int lock;
	unsigned long long _minQueueLength;
	unsigned long long _maxQueueLength;
	NSMutableDictionary* _replacements;

}

@property (assign) unsigned long long minQueueLength;               //@synthesize minQueueLength=_minQueueLength - In the implementation block
@property (assign) unsigned long long maxQueueLength;               //@synthesize maxQueueLength=_maxQueueLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formatLogMessage:(id)arg1 ;
-(void)didAddToLogger:(id)arg1 ;
-(void)willRemoveFromLogger:(id)arg1 ;
-(unsigned long long)minQueueLength;
-(unsigned long long)maxQueueLength;
-(id)queueThreadLabelForLogMessage:(id)arg1 ;
-(id)replacementStringForQueueLabel:(id)arg1 ;
-(void)setReplacementString:(id)arg1 forQueueLabel:(id)arg2 ;
-(void)setMinQueueLength:(unsigned long long)arg1 ;
-(void)setMaxQueueLength:(unsigned long long)arg1 ;
-(id)init;
-(id)stringFromDate:(id)arg1 ;
@end

